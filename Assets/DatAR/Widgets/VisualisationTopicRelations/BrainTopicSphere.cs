using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BrainTopicSphere : MonoBehaviour
{
    public TMPro.TextMeshPro conceptText;
    public TMPro.TextMeshPro topicLabel;
    public TMPro.TextMeshPro diseaseAppearTimesText;
    public GameObject diseaseBar;

    [HideInInspector] public string BrainTopicName { get; private set; }
    [HideInInspector] public string BrainTopicLabel { get; private set; }
    [HideInInspector] public int DiseaseAppearTimes { get; private set; }
    [HideInInspector] public string TopicClass { get; private set; }

    private List<Transform> connectedTopicsCoords; 
    private Transform[] points; // Format for the line renderer
    private List<BrainTopicSphere> connectedTopics; // For tracking all duplicates of this brain topic

    private void CreateConnectedTopicList()
    {
        connectedTopics = new List<BrainTopicSphere>();
        connectedTopicsCoords = new List<Transform>();
        connectedTopicsCoords.Add(transform);
        transform.GetComponent<LineRenderer>().enabled = true;
    }

    public void AddTopicToList(BrainTopicSphere duplicatedTopic)
    {
        connectedTopics.Add(duplicatedTopic);
        connectedTopicsCoords.Add(duplicatedTopic.transform);
        return;
    }

    public void AddEdge(BrainTopicSphere topic)
    {
        CreateConnectedTopicList();
        AddTopicToList(topic);
        UpdateLR();
    }

    // Update Line Renderer 
    private void UpdateLR()
    {
        points = connectedTopicsCoords.ToArray();
        transform.GetComponent<LineRenderer>().enabled = true;
        transform.GetComponent<LineRenderer>().positionCount = points.Length;
    }

    public void SetConnectedTopics(List<BrainTopicSphere> topics)
    {
        connectedTopics = topics;
        connectedTopicsCoords = new List<Transform>();

        connectedTopicsCoords.Add(transform);

        foreach(BrainTopicSphere topic in connectedTopics)
            connectedTopicsCoords.Add(topic.gameObject.transform);
    }

    public List<BrainTopicSphere> GetConnectedTopics()
    {
        return connectedTopics;
    }

    public void RemoveLines()
    {
        transform.GetComponent<LineRenderer>().enabled = false;
    }

    private void FixedUpdate()
    {
        if(points != null) {
            for(int i = 0; i < points.Length; i++)
                transform.GetComponent<LineRenderer>().SetPosition(i, points[i].position);
        }
    }

    public void PopulateData(string brainTopic, string brainClass, int diseaseAppearTimes, string brainTopicLabel, string topicClass)
    {
        BrainTopicName = brainTopic;
        BrainTopicLabel = brainTopicLabel;
        DiseaseAppearTimes = diseaseAppearTimes;
        TopicClass = topicClass;

        conceptText.text = BrainTopicName;
        topicLabel.text = BrainTopicLabel;
        diseaseAppearTimesText.text = DiseaseAppearTimes.ToString();


        switch (brainClass)
        {
            case "lbd:region":
                GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_BrainRegion");
                break;
            case "lbd:transmitter":
                GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Neurotransmitter");
                break;
            case "lbd:function":
                GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_CognitiveFunction");
                break;
            case "lbd:protein":
                GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Protein");
                break;
            case "lbd:neuron":
                GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Neuron");
                break;
            case "lbd:gene":
                GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Gene");
                break;
        }
    }
}