using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UniRx;
using UnityEngine;

public class QueryDiseaseCoocurrences : MonoBehaviour, IQueryState
{

    private SparqlService _sparqlService;
    
    [SerializeField] private Receptacle disease1Receptacle;
    [SerializeField] private Receptacle disease2Receptacle;

    public TMPro.TextMeshPro disease1Text;
    public TMPro.TextMeshPro disease2Text;
    public BrainConceptManager BrainConcepts;
    public GameObject Buttons;

    public BehaviorSubject<QueryState> IsLoading { get; }

    public string ErrorMessage { get; private set; }

    private List<FormattedCooccurrence> Cooccurrences;
    private bool displayRatio = false;

    public string CurrentFilter{ get; set; }

    public QueryDiseaseCoocurrences()
    {
        IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
    }

    private void Awake()
    {
        var services = GameObject.Find("Services");
        _sparqlService = services.GetComponent<SparqlService>();

        disease1Receptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => GetDiseaseCooccurrences());

        disease2Receptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => GetDiseaseCooccurrences());
    }

    public void SetDisplayRatio(bool value)
    {
        if(value == displayRatio)
        {
            return;
        }

        displayRatio = value;

        if (CurrentFilter == null)
        {
            SelectOverview();
        }
        else
        {
            SelectFromClass(CurrentFilter);
        }
    }

    async private void GetDiseaseCooccurrences()
    {
        if (disease1Receptacle.SlottedResourceContainer == null ||
            disease1Receptacle.SlottedResourceContainer.Resource == null ||
            disease2Receptacle.SlottedResourceContainer == null ||
            disease2Receptacle.SlottedResourceContainer.Resource == null)
        {
            return;
        }

        IsLoading.OnNext(QueryState.IsLoading);

        try
        {
            var disease1Id = disease1Receptacle.SlottedResourceContainer.Resource.Id;
            var disease2Id = disease2Receptacle.SlottedResourceContainer.Resource.Id;
            var disease1Label = disease1Receptacle.SlottedResourceContainer.Resource.Label;
            var disease2Label = disease2Receptacle.SlottedResourceContainer.Resource.Label;

            var cooccurrences = await _sparqlService.GetDiseaseRelations(disease1Id, disease2Id);

            if (cooccurrences.Count < 0)
            {
                ErrorMessage = $"No cooccurrences found for {disease1Id} and {disease2Id}";
                IsLoading.OnNext(QueryState.HasError);
                return;
            }

            IsLoading.OnNext(QueryState.HasLoaded);

            disease1Text.text = disease1Label;
            disease2Text.text = disease2Label;
            disease1Text.gameObject.SetActive(true);
            disease2Text.gameObject.SetActive(true);

            Buttons.SetActive(true);

            // Split concepts that belong to multiple classes into their seperate list items.
            var fixedCooccurrences = new List<DiseaseRelationResource>();
            foreach(var cooccurrence in cooccurrences)
            {
                if(cooccurrence.Concept.Types.Count > 1)
                {
                    var concepts = cooccurrence.Concept.SplitTypes();
                    foreach(var concept in concepts)
                    {
                        fixedCooccurrences.Add(new DiseaseRelationResource(
                            cooccurrence.Types,
                            cooccurrence.AppearTimes,
                            concept,
                            cooccurrence.Disease));
                    }
                }
                else
                {
                    fixedCooccurrences.Add(cooccurrence);
                }
            }

            fixedCooccurrences = fixedCooccurrences.Where(x => new string[] { "lbd:region", "lbd:transmitter", "lbd:gene", "lbd:function", "lbd:protein", "lbd:neuron" }.Contains(x.Concept.Types[0])).ToList();

            Cooccurrences = fixedCooccurrences.GroupBy(x => x.Concept, (key, value) => new FormattedCooccurrence(
                key.Label,
                key.Types[0],
                disease1Id,
                value.Where(x => x.Disease.Id == disease1Id).FirstOrDefault()?.AppearTimes ?? 0,
                disease2Id,
                value.Where(x => x.Disease.Id == disease2Id).FirstOrDefault()?.AppearTimes ?? 0
                ))
            .GroupBy(x => x.Class)
            .OrderByDescending(x => x.Sum(y => y.Disease1Cooccurences + y.Disease2Cooccurences))
            .SelectMany(x => x)
            .ToList();

            SelectOverview();

            //var cooccurrencesByClass = fixedCooccurrences
            //    .GroupBy(cooccurrence => cooccurrence.Concept.Types[0], (key, value) => new
            //        {
            //            Class = key,
            //            Cooccurrences = value,
            //            Disease1AppearTimes = value.Where(x => x.Disease.Id == disease1Id).Sum(x => x.AppearTimes),
            //            Disease2AppearTimes = value.Where(x => x.Disease.Id == disease2Id).Sum(x => x.AppearTimes)
            //        })
            //    .Where(x => new string[]{ "lbd:region", "lbd:transmitter", "lbd:gene", "lbd:function", "lbd:protein", "lbd:neuron"}.Contains(x.Class))
            //    .OrderByDescending(x => x.Disease1AppearTimes + x.Disease2AppearTimes)
            //    .ToList();

            //for(var i = 0; i < cooccurrencesByClass.Count(); i++)
            //{
            //    //TODO: properly manage irrelevent classes
            //    if(i > 5)
            //    {
            //        break;
            //    }

            //    classVisualizations[i].PopulateData(
            //        cooccurrencesByClass[i].Class, 
            //        cooccurrencesByClass[i].Disease1AppearTimes, 
            //        cooccurrencesByClass[i].Disease2AppearTimes);

            //    classVisualizations[i].SetCooccurrences(cooccurrencesByClass[i].Cooccurrences, disease1Id, disease2Id);

            //    classVisualizations[i].gameObject.SetActive(true);
            //}
        }
        catch (Exception e)
        {
            ErrorMessage = e.Message;
            Debug.LogError(e);
            IsLoading.OnNext(QueryState.HasError);
        }
    }

    private void SelectOverview()
    {
        BrainConcepts.GenerateConceptList(
                Cooccurrences
                    .GroupBy(x => x.Class)
                    .SelectMany(x => x.OrderByDescending(r => r.Disease1Cooccurences + r.Disease2Cooccurences).Take(3))
                    .ToList(),
                displayRatio,
                false
            );
    }

    //TODO: CLean this up...
    public void SelectFromClass(string brainClass, Interactable thisButton = null)
    {
        if(thisButton == null)
        {
            BrainConcepts.GenerateConceptList(
                Cooccurrences
                    .Where(x => x.Class == brainClass)
                    .OrderByDescending(x => x.Disease1Cooccurences + x.Disease2Cooccurences)
                    .Take(5)
                    .ToList(),
                displayRatio,
                true
            );

            CurrentFilter = brainClass;

            return;
        }

        if (thisButton.IsToggled)
        {
            BrainConcepts.GenerateConceptList(
                Cooccurrences
                    .Where(x => x.Class == brainClass)
                    .OrderByDescending(x => x.Disease1Cooccurences + x.Disease2Cooccurences)
                    .Take(5)
                    .ToList(),
                displayRatio,
                true
            );

            CurrentFilter = brainClass;

            thisButton.transform.parent.GetComponentsInChildren<Interactable>().ForEach(siblingButton =>
            {
                if (siblingButton != thisButton)
                {
                    siblingButton.IsToggled = false;
                }
            });
        }
        else
        {
            SelectOverview();
            CurrentFilter = null;
        }
    }
}

public class FormattedCooccurrence
{
    public string Concept { get; private set; }
    public string Class { get; private set; }
    public string Disease1Id { get; private set; }
    public string Disease2Id { get; private set; }
    public int Disease1Cooccurences { get; private set; }
    public int Disease2Cooccurences { get; private set; }
    public double Disease1Ratio { get; private set; }
    public double Disease2Ratio { get; private set; }

    public FormattedCooccurrence(string _Concept, string _Class, string _Disease1, int _Disease1Cooccurrences, string _Disease2, int _Disease2Cooccurrences)
    {
        Concept = _Concept;
        Class = _Class;
        Disease1Id = _Disease1;
        Disease2Id = _Disease2;
        Disease1Cooccurences = _Disease1Cooccurrences;
        Disease2Cooccurences = _Disease2Cooccurrences;

        Disease1Ratio = ((double)Disease1Cooccurences / (Disease1Cooccurences + Disease2Cooccurences)) * 100d;
        Disease2Ratio = ((double)Disease2Cooccurences / (Disease1Cooccurences + Disease2Cooccurences)) * 100d;
    }
}
