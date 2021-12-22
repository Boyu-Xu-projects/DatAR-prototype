using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GraphManager : MonoBehaviour
{
    private SparqlService _sparqlService;
    public string ErrorMessage { get; private set; }
    private List<FormattedTopicCooccurrence> Cooccurrences;

    public Node nodepf;
    private Node rootNode;

    public GameObject edgepf; 
    public float width = 50;
    public float length = 50;
    public float height = 50;
  
    private void Awake()
    {
        var graphPool = GameObject.Find("StandaloneGraphPool");

        if (!graphPool)
        {
            Debug.LogError("No `StandaloneGraphPool` was found in the scene. "
                           + "This GameObject is required to allow graph generation.");
            gameObject.SetActive(false);
            return;
        }

        var services = GameObject.Find("Services");
        _sparqlService = services.GetComponent<SparqlService>();
    }

    public void CreateGraph(string topic, string topicLabel, string topicClass, string category = ""){
        // TODO:
        // 0: Request topic and retrieve the wanted categories to get results in
        // 1: Generate all the Nodes
        // 2: Connect all Nodes. If showing only in-class graph, then they all probably connect to 1 topic
        
        rootNode = transform.gameObject.GetComponent<Node>();
        LoadRelatedTopics(topic, topicLabel, topicClass, category);
    }

    async private void LoadRelatedTopics(string topic, string topicLabel, string topicClass, string category)
    {
        var cooccurrences = await _sparqlService.GetTopicsRelatedToDisease(topicLabel);

        if (cooccurrences.Count < 0)
        {
            ErrorMessage = $"No cooccurrences found for {topic}.";
            return;
        }

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
                    // Topics with multiple categories are sometimes misclassified. Ignore topics that have the same category as the queried topic.
                    if(concept.Types[0] == topicClass)
                            continue;
                    else {
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

        // TODO: Not sure if I want to keep this format. Maybe change the whole structure of the query so I don't have to sort here as well.
        /*
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
        }*/


        GenerateNodes(topic, topicLabel, fixedCooccurrences);
    }

    async private void GenerateNodes(string topic, string topicLabel, List<DiseaseTopicsResource>[] topicNodes)
    {
        Node n = null;
        Dictionary<string,Node> nodes = new Dictionary<string,Node>();

        //nodes.Add(word, n);
        
        foreach (var topicList in topicNodes) {
            int start = 0;
            foreach (var topicNode in topicList) {
                if (start > 3)
                    break;

                //Node go = Instantiate(nodepf, new Vector3(Random.Range(-width/2, width/2), Random.Range(-length/2, length/2), Random.Range(-height/2, height/2)), Quaternion.identity);
                Node go = Instantiate(nodepf, transform);
                go.transform.localPosition = new Vector3(Random.Range(-width/2, width/2), Random.Range(-length/2, length/2), Random.Range(-height/2, height/2));
                n = go.GetComponent<Node>();
                n.name = topicNode.Concept.Label;
                n.SetClass(topicNode.Concept.Types[0]);
                n.transform.GetChild(0).GetComponent<TextMeshPro>().text = topicNode.Concept.Label;
                n.AddEdge(rootNode);
                // n.SetEdgePrefab(edgepf);

                start++;
            }
        }

        //TODO: Query the relations of topics above in a specific category
    }
}
