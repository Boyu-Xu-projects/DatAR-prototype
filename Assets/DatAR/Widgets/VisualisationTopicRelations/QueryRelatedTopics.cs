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

public class QueryRelatedTopics : MonoBehaviour, IQueryState
{
    private SparqlService _sparqlService;

    [SerializeField] private Receptacle diseaseReceptacle;

    public TMPro.TextMeshPro diseaseText;
    public BrainTopicManager BrainTopics;
    public GameObject Buttons;

    public BehaviorSubject<QueryState> IsLoading { get; }

    public string ErrorMessage { get; private set; }

    private List<FormattedTopicCooccurrence> Cooccurrences;
    private bool displayRatio = false;

    public string CurrentFilter{ get; set; }

    public QueryRelatedTopics()
    {
        IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
    }

    private void Awake()
    {
        var services = GameObject.Find("Services");
        _sparqlService = services.GetComponent<SparqlService>();

        diseaseReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => GetRelatedTopics());
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

    async private void GetRelatedTopics()
    {
        if (diseaseReceptacle.SlottedResourceContainer == null ||
            diseaseReceptacle.SlottedResourceContainer.Resource == null)
        {
            return;
        }

        IsLoading.OnNext(QueryState.IsLoading);

        try
        {
            var diseaseId = diseaseReceptacle.SlottedResourceContainer.Resource.Id;
            var diseaseLabel = diseaseReceptacle.SlottedResourceContainer.Resource.Label;

            // TODO: Change later
            var cooccurrences = await _sparqlService.GetTopicsRelatedToDisease(diseaseId);
            //var cooccurrences = await _sparqlService.GetTopicsRelatedToDisease("lbd:adrenaline");

            if (cooccurrences.Count < 0)
            {
                ErrorMessage = $"No cooccurrences found for {diseaseId}.";
                IsLoading.OnNext(QueryState.HasError);
                return;
            }

            IsLoading.OnNext(QueryState.HasLoaded);

            diseaseText.text = diseaseLabel;
            diseaseText.gameObject.SetActive(true);

            Buttons.SetActive(true);

            // Split concepts that belong to multiple classes into their seperate list items.
            var fixedCooccurrences = new List<DiseaseTopicsResource>();
            foreach(var cooccurrence in cooccurrences)
            {
                if(cooccurrence.Concept.Types.Count > 1)
                {
                    var concepts = cooccurrence.Concept.SplitTypes();
                    foreach(var concept in concepts)
                    {
                        fixedCooccurrences.Add(new DiseaseTopicsResource(
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

            // Only take co-occurrences with concepts form a valid type.
            fixedCooccurrences = fixedCooccurrences.Where(x => new string[] { 
                "lbd:region", 
                "lbd:transmitter", 
                "lbd:gene", 
                "lbd:function", 
                "lbd:protein", 
                "lbd:neuron" 
            }.Contains(x.Concept.Types[0])).ToList();

            // Format the co-occurrence data based on concept, and calculate number of co-occurrences the diseases have with that concept.
            //TODO: Implement a sorting interface. Currently sorts based on total number of co-occurrences for each class.
            Cooccurrences = fixedCooccurrences.GroupBy(x => x.Concept, (key, value) => new FormattedTopicCooccurrence(
                key.Label,
                key.Types[0],
                diseaseId,
                value.Where(x => x.Disease.Id == /*"lbd:adrenaline"*/diseaseId).FirstOrDefault()?.AppearTimes ?? 0
                ))
            .GroupBy(x => x.Class)
            .OrderByDescending(x => x.Sum(y => y.TopicCooccurrences + y.TopicCooccurrences))
            .SelectMany(x => x)
            .ToList();

            SelectOverview();
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
        BrainTopics.GenerateConceptList(
                Cooccurrences
                    .GroupBy(x => x.Class)
                    .SelectMany(x => x.OrderByDescending(r => r.TopicCooccurrences + r.TopicCooccurrences).Take(3)) //TODO: 3 concepts per class in the overview is hardcoded, make configurable.
                    .ToList(),
                displayRatio,
                false
            );
    }

    // TODO: This code is messy... Clean up. Change into more logical if-statements,
    // separate out the concept list generation and the conditions, don't rely on checking button == null
    public void SelectFromClass(string brainClass, Interactable thisButton = null)
    {
        if(thisButton == null)
        {
            BrainTopics.GenerateConceptList(
                Cooccurrences
                    .Where(x => x.Class == brainClass)
                    .OrderByDescending(x => x.TopicCooccurrences + x.TopicCooccurrences)
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
            BrainTopics.GenerateConceptList(
                Cooccurrences
                    .Where(x => x.Class == brainClass)
                    .OrderByDescending(x => x.TopicCooccurrences + x.TopicCooccurrences)
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

public class FormattedTopicCooccurrence
{
    public string Concept { get; private set; }
    public string Class { get; private set; }
    public string TopicId { get; private set; }
    public int TopicCooccurrences { get; private set; }
    public double TopicRatio { get; private set; }

    public FormattedTopicCooccurrence(string _Concept, string _Class, string _Topic, int _TopicCooccurrences)
    {
        Concept = _Concept;
        Class = _Class;
        TopicId = _Topic;
        TopicCooccurrences = _TopicCooccurrences;

        TopicRatio = ((double)TopicCooccurrences / (TopicCooccurrences + TopicCooccurrences)) * 100d;
    }
}
