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
using System.Threading.Tasks;

public class TopicRelationManager : MonoBehaviour, IQueryState
{

    [SerializeField] private Receptacle diseaseReceptacle;

    public TMPro.TextMeshPro diseaseText;
    public BrainTopicManager BrainTopics;
    public GameObject Buttons;

    public BehaviorSubject<QueryState> IsLoading { get; }

    public string ErrorMessage { get; private set; }

    private List<FormattedTopicCooccurrence> Cooccurrences;
    private bool displayRatio = false;

    public string CurrentFilter{ get; set; }

    public TopicRelationManager()
    {
        IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
    }

    private void Awake()
    {
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

    // TODO: Seperate querying function so other scripts can make use of this, instead of copy paste.
    async private void GetRelatedTopics()
    {
        if (diseaseReceptacle.SlottedResourceContainer == null ||
            diseaseReceptacle.SlottedResourceContainer.Resource == null)
            return;
        
        IsLoading.OnNext(QueryState.IsLoading);

        var topicId = diseaseReceptacle.SlottedResourceContainer.Resource.Id;
        var topicLabel = diseaseReceptacle.SlottedResourceContainer.Resource.Label;

        var result = await QueryTopicManager.QTM.QueryTopic(topicId, topicLabel);
        Cooccurrences = result;

        if(Cooccurrences == null) 
        {
            ErrorMessage = $"No cooccurrences found for {topicLabel}.";
            IsLoading.OnNext(QueryState.HasError);
        }
        else
        {
            IsLoading.OnNext(QueryState.HasLoaded);

            diseaseText.text = topicLabel;
            diseaseText.gameObject.SetActive(true);

            Buttons.SetActive(true);

            SelectOverview();
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