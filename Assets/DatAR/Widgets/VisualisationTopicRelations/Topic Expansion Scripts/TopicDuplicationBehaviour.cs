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

    public string ErrorMessage { get; private set; }
    private List<FormattedTopicCooccurrence> Cooccurrences;

    private void Awake()
    {
        var topicPool = GameObject.Find("StandaloneTopicPool");

        if (!topicPool)
        {
            Debug.LogError("No `StandaloneTopicPool` was found in the scene. "
                           + "This GameObject is required to allow topic expansion.");
            gameObject.SetActive(false);
            return;
        }
    }

    // If not fixed, simply move when picked up.
    async public void DuplicateIfFixed()
    {
        // Sorted list
        if (shouldDuplicateOnGrab && !QueryTopicManager.QTM.GetGraphMode())
        {
            // FIXED TOPIC IN LIST
            // Leave a duplicate behind in the same place, since we grabbed the original topic sphere
            var duplicate = Instantiate(gameObject, transform.parent);
            duplicate.transform.position = transform.position;
            duplicate.GetComponent<Renderer>().material = GetComponent<Renderer>().material;

            // MOVABLE TOPIC IN SCENE
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
            brainTopics.transform.SetParent(transform, true);
            brainTopics.AddComponent<BrainTopicManager>();
            
            BrainTopicManager btm = brainTopics.GetComponent<BrainTopicManager>();
            btm.MaxHistogramScale = 3;
            btm.TopicPrefab = Resources.Load<BrainTopicSphere>("TopicPrefab");
            BrainTopics = btm;

            BrainTopicSphere topicInList = duplicate.GetComponent<BrainTopicSphere>();
            BrainTopicSphere movableTopic = transform.GetComponent<BrainTopicSphere>();
            
            // If the moved topic has a list of connected topics, then pass this list to the duplicate and delete old list
            List<BrainTopicSphere> connectedTopics = movableTopic.GetConnectedTopics();
            
            // If topic is being duplicated for the first time, visualize edge between duplicate and topic in list
            // Start keeping track of duplicates
            if(connectedTopics == null)
            {
                topicInList.AddEdge(movableTopic);
                movableTopic.SetConnectedTopics(topicInList.GetConnectedTopics());
            } 
            else
            {
                // After first time, save list of duplicates in topic in list
                topicInList.SetConnectedTopics(movableTopic.GetConnectedTopics()); 
                foreach(BrainTopicSphere topic in topicInList.GetConnectedTopics()) // Reset each edge when a new duplicate is made
                    topic.AddEdge(topicInList);
                
                topicInList.AddTopicToList(movableTopic);
                topicInList.RemoveLines(); // Disable line renderer of topic in list, otherwise lines are shown twice

                movableTopic.AddEdge(topicInList); // Update edges
            }
        
            Cooccurrences = await QueryTopicManager.QTM.QueryTopic(transform.GetChild(3).GetComponent<TextMeshPro>().text, transform.name, transform.GetComponent<BrainTopicSphere>().TopicClass);
            SelectOverview();
        }

        // Bubble graph
        else if (shouldDuplicateOnGrab)
        {
            // Leave a duplicate behind in the same place, since we grabbed the original topic sphere
            var duplicate = Instantiate(gameObject, transform.parent);
            duplicate.transform.position = transform.position;
            duplicate.GetComponent<Renderer>().material = GetComponent<Renderer>().material;

            // Assign topic to topic pool
            transform.SetParent(GameObject.Find("StandaloneGraphPool").transform, true);
            GetComponent<TopicDuplicationBehaviour>().shouldDuplicateOnGrab = false;
            tag = "Deletable";

            // Make Appeartimes and bar invisible
            transform.GetChild(1).gameObject.SetActive(false);
            transform.GetChild(2).gameObject.SetActive(false);

            // Make this a root node and add a graphmanager
            transform.gameObject.AddComponent<Node>();
            transform.gameObject.AddComponent<Rigidbody>();
            transform.gameObject.GetComponent<Rigidbody>().useGravity = false;
            transform.gameObject.GetComponent<Rigidbody>().isKinematic = true;
            transform.gameObject.AddComponent<GraphManager>();
            transform.gameObject.GetComponent<GraphManager>().nodepf = Resources.Load<Node>("NodePrefab");
            transform.gameObject.GetComponent<GraphManager>().edgepf = Resources.Load<GameObject>("EdgePrefab");
            transform.gameObject.GetComponent<GraphManager>().CreateGraph(transform.GetChild(3).GetComponent<TextMeshPro>().text, transform.name, transform.GetComponent<BrainTopicSphere>().TopicClass, "");
        }
    }

    private void SelectOverview()
    {
        BrainTopics.GenerateConnectedTopicList(Cooccurrences);
    }
}
