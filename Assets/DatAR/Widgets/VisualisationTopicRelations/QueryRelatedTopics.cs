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
            return;

        displayRatio = value;

        if (CurrentFilter == null)
            SelectOverview();
        else
            SelectFromClass(CurrentFilter);
    }

    async private void GetRelatedTopics()
    {
        if (diseaseReceptacle.SlottedResourceContainer == null ||
            diseaseReceptacle.SlottedResourceContainer.Resource == null)
            return;
        
        IsLoading.OnNext(QueryState.IsLoading);

        try
        {
            var diseaseId = diseaseReceptacle.SlottedResourceContainer.Resource.Id;
            var diseaseLabel = diseaseReceptacle.SlottedResourceContainer.Resource.Label;

            var cooccurrences = await _sparqlService.GetTopicsRelatedToDisease(diseaseId);

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
            List<DiseaseTopicsResource>[] fixedCooccurrences = new List<DiseaseTopicsResource>[6];
            for(int i = 0; i < 6; i++)
                fixedCooccurrences[i] = new List<DiseaseTopicsResource>();

            // Sort the different category of topics in different lists
            foreach(var cooccurrence in cooccurrences)
            {
                // Ignore cooccurrences that have unknown sources.
                if(!cooccurrence.Id.Contains("lbd"))
                    continue;

                if(cooccurrence.Concept.Types.Count > 1)
                {
                    var concepts = cooccurrence.Concept.SplitTypes();
                    foreach(var concept in concepts)
                    {
                        switch(concept.Types[0]) {
                            case "lbd:region": {
                                fixedCooccurrences[0].Add(new DiseaseTopicsResource(
                                    cooccurrence.Types,
                                    cooccurrence.AppearTimes,
                                    concept,
                                    cooccurrence.Disease));
                                break;
                            }
                            case "lbd:transmitter": {
                                fixedCooccurrences[1].Add(new DiseaseTopicsResource(
                                    cooccurrence.Types,
                                    cooccurrence.AppearTimes,
                                    concept,
                                    cooccurrence.Disease));
                                break;
                            }
                            case "lbd:gene": {
                                fixedCooccurrences[2].Add(new DiseaseTopicsResource(
                                    cooccurrence.Types,
                                    cooccurrence.AppearTimes,
                                    concept,
                                    cooccurrence.Disease));
                                break;
                            }
                            case "lbd:function": {
                                fixedCooccurrences[3].Add(new DiseaseTopicsResource(
                                    cooccurrence.Types,
                                    cooccurrence.AppearTimes,
                                    concept,
                                    cooccurrence.Disease));
                                break;
                            }
                            case "lbd:protein": {
                                fixedCooccurrences[4].Add(new DiseaseTopicsResource(
                                    cooccurrence.Types,
                                    cooccurrence.AppearTimes,
                                    concept,
                                    cooccurrence.Disease));
                                break;
                            }
                            case "lbd:neuron": {
                                fixedCooccurrences[5].Add(new DiseaseTopicsResource(
                                    cooccurrence.Types,
                                    cooccurrence.AppearTimes,
                                    concept,
                                    cooccurrence.Disease));
                                break;
                            }
                            default:
                                break;
                        }
                    }
                }
                else
                {
                    switch(cooccurrence.Concept.Types[0]) {
                        case "lbd:region": {
                            fixedCooccurrences[0].Add(cooccurrence);
                            break;
                        }
                        case "lbd:transmitter": {
                            fixedCooccurrences[1].Add(cooccurrence);
                            break;
                        }
                        case "lbd:gene": {
                            fixedCooccurrences[2].Add(cooccurrence);
                            break;
                        }
                        case "lbd:function": {
                            fixedCooccurrences[3].Add(cooccurrence);
                            break;
                        }
                        case "lbd:protein": {
                            fixedCooccurrences[4].Add(cooccurrence);
                            break;
                        }
                        case "lbd:neuron": {
                            fixedCooccurrences[5].Add(cooccurrence);
                            break;
                        }
                        default:
                            break;
                    }
                }
            }

            // Within each category, sort on cooccurrences on descending order
            foreach(List<DiseaseTopicsResource> category in fixedCooccurrences)
                category.Sort((y,x) => x.AppearTimes.CompareTo(y.AppearTimes));
        
            // Within each category, take only the top 6
            Cooccurrences = new List<FormattedTopicCooccurrence>();
            foreach(List<DiseaseTopicsResource> category in fixedCooccurrences) {
                int numberOfTopics = 5;
                if(category.Count < numberOfTopics)
                    numberOfTopics = category.Count;

                for(int i = 0; i < numberOfTopics; i++)
                    Cooccurrences.Add(new FormattedTopicCooccurrence(
                        category[i].Concept.Label,
                        category[i].Concept.Types[0],
                        diseaseLabel,
                        category[i].Concept.Id,
                        category[i].AppearTimes
                    ));
            }

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
                    siblingButton.IsToggled = false;
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
    public string TopicName { get; private set; }
    public string TopicLabel { get; private set; }
    public int TopicCooccurrences { get; private set; }
    public double TopicRatio { get; private set; }

    public FormattedTopicCooccurrence(string _Concept, string _Class, string _TopicName, string _TopicLabel, int _TopicCooccurrences)
    {
        Concept = _Concept; // Found topic
        Class = _Class; // Topic class
        TopicLabel = _TopicName; // Topic or Disease name associated with found topic above
        TopicLabel = _TopicLabel; // Topic object in LBD
        TopicCooccurrences = _TopicCooccurrences; // Number of cooccurrences found

        TopicRatio = ((double)TopicCooccurrences / (TopicCooccurrences + TopicCooccurrences)) * 100d;
    }
}
