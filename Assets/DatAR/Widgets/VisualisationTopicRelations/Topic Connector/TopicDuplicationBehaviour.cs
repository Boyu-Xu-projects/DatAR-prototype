using DatAR.DataModels.Resources;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public class TopicDuplicationBehaviour : MonoBehaviour
{
    [FormerlySerializedAs("isFixed")] public bool shouldDuplicateOnGrab = true;
    private BrainTopicManager BrainTopics;


    private SparqlService _sparqlService;
    public string ErrorMessage { get; private set; }
    private List<FormattedTopicCooccurrence> Cooccurrences;

    private void Awake()
    {
        var topicPool = GameObject.Find("StandaloneTopicPool");

        if (!topicPool)
        {
            Debug.LogError("No `StandaloneTopicePool` Prefab was not found in the scene. "
                           + "This GameObject is required to allow topic expansion.");
            gameObject.SetActive(false);
            return;
        }

        var services = GameObject.Find("Services");
        _sparqlService = services.GetComponent<SparqlService>();
    }

    // If not fixed, simply move when picked up.
    public void DuplicateIfFixed()
    {
        if (shouldDuplicateOnGrab)
        {
            // Leave a duplicate behind in the same place, since we grabbed the original topic sphere
            var duplicate = Instantiate(gameObject, transform.parent);
            duplicate.transform.position = transform.position;
            duplicate.GetComponent<Renderer>().material = GetComponent<Renderer>().material;

            // Assign topic to topic pool
            transform.SetParent(GameObject.Find("StandaloneTopicPool").transform, true);
            GetComponent<TopicDuplicationBehaviour>().shouldDuplicateOnGrab = false;
            tag = "Deletable";

            // Make Appeartimes and bar invisible
            transform.GetChild(1).gameObject.SetActive(false);
            transform.GetChild(2).gameObject.SetActive(false);

            // Add topic manager via script to topic sphere
            GameObject brainTopics = new GameObject();
            brainTopics.name = "BrainTopics";
            brainTopics.AddComponent<BrainTopicManager>();
            brainTopics.GetComponent<BrainTopicManager>().MaxHistogramScale = 3;
            brainTopics.GetComponent<BrainTopicManager>().TopicPrefab = Resources.Load<BrainTopicSphere>("TopicPrefab");
            brainTopics.transform.SetParent(transform, true);
            BrainTopics = brainTopics.GetComponent<BrainTopicManager>();

            QuerySelectedTopic(transform.name, transform.GetChild(3).GetComponent<TextMeshPro>().text);
        }
    }

    async private void QuerySelectedTopic(string topic, string topicLabel)
    {
        try
        {
            var topicName = topic; //adrenaline
            var topicObject = topicLabel; //lbd:adrenaline

            var cooccurrences = await _sparqlService.GetTopicsRelatedToTopic(topicObject);

            if (cooccurrences.Count < 0)
            {
                ErrorMessage = $"No cooccurrences found for {topicName}.";
                return;
            }

            // diseaseText.text = topicObject;
            // diseaseText.gameObject.SetActive(true);

            // Split concepts that belong to multiple classes into their seperate list items.
            List<DiseaseTopicsResource>[] fixedCooccurrences = new List<DiseaseTopicsResource>[6];
            for(int i = 0; i < 6; i++)
                fixedCooccurrences[i] = new List<DiseaseTopicsResource>();

            // Sort the different category of topics in different lists
            foreach(var cooccurrence in cooccurrences)
            {
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
                int numberOfTopics = 3;
                if(category.Count < numberOfTopics)
                    numberOfTopics = category.Count;

                for(int i = 0; i < numberOfTopics; i++)
                    Cooccurrences.Add(new FormattedTopicCooccurrence(
                        category[i].Concept.Label,
                        category[i].Concept.Types[0],
                        topicName,
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
        }
    }

    private void SelectOverview()
    {
        BrainTopics.GenerateConnectedTopicList(Cooccurrences);
    }
}
