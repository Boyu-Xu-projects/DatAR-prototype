using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Linq;

public class GraphManager : MonoBehaviour
{
    private SparqlService _sparqlService;
    public string ErrorMessage { get; private set; }
    private List<FormattedTopicCooccurrence> Cooccurrences;

    public Node nodepf;
    private Node rootNode;

    public GameObject edgepf; 
    public float width = 100;
    public float length = 100;
    public float height = 100;

    private int numberOfTopicsToPick = 3;
  
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

        // Sort on most occurrences
        foreach(List<DiseaseTopicsResource> topicCategory in fixedCooccurrences)
            topicCategory.Sort((y,x) => x.AppearTimes.CompareTo(y.AppearTimes));

        List<DiseaseTopicsResource> finalList = new List<DiseaseTopicsResource>();

        // Take the top X topics from the list and put them in 1 list
        foreach(List<DiseaseTopicsResource> topicCategory in fixedCooccurrences)
        {
            int start = 0;
            foreach(DiseaseTopicsResource topicResource in topicCategory) 
            {
                if (start > numberOfTopicsToPick || topicResource.Concept.Id == null)
                    break;

                finalList.Add(topicResource);
                start++;
            }
        }

        GenerateNodes(topic, topicLabel, finalList);
    }

    async private void GenerateNodes(string topic, string topicLabel, List<DiseaseTopicsResource> topicList)
    {
        Node n = null;
        Dictionary<string,Node> nodes = new Dictionary<string,Node>();
        List<Node> allNodes = new List<Node>();

        // Query for edges
        string filter = GenerateTopicEdgesFilter(topicList);
        var edges = await _sparqlService.GetTopicEdges(filter);

        // Root connections have transparent edges for more clarity
        edgepf.GetComponent<Renderer>().material = Resources.Load<Material>("TopicMaterials/RootEdge");

        foreach (var topicNode in topicList) {
            //Node go = Instantiate(nodepf, new Vector3(Random.Range(-width/2, width/2), Random.Range(-length/2, length/2), Random.Range(-height/2, height/2)), Quaternion.identity);
            Node go = Instantiate(nodepf, transform);
            go.transform.localPosition = new Vector3(Random.Range(-width/2, width/2), Random.Range(-length/2, length/2), Random.Range(-height/2, height/2));
            n = go.GetComponent<Node>();
            n.name = topicNode.Concept.Label;
            n.SetClass(topicNode.Concept.Types[0]);
            n.transform.GetChild(0).GetComponent<TextMeshPro>().text = topicNode.Concept.Label;
            n.SetEdgePrefab(edgepf);
            n.AddEdge(rootNode);
            nodes.Add(topicNode.Concept.Label, n);

            allNodes.Add(n);
        }

        edgepf.GetComponent<Renderer>().material = Resources.Load<Material>("TopicMaterials/Edge");

        foreach (var edge in edges)
        {
            Node node = nodes[edge.Concept.Label];
            
            if(edge.Concept.Label == edge.Disease.Label)
                continue;
            
            node.AddEdge(nodes[edge.Disease.Label]);
            nodes[edge.Disease.Label].AddConnectedNode(node);
        }

        // Assign for each node the connected and unconnected nodes
        foreach (var node in nodes)
            node.Value.SetUnconnectedNodes(allNodes);

        //TODO: Query the relations of topics above in a specific category
    }

    private string GenerateTopicEdgesFilter(List<DiseaseTopicsResource> topicList)
    {
        string query = "";
        foreach(var topic in topicList)
        {
            string id = topic.Concept.Id;
            foreach(var topic2 in topicList)
            {
                // Remove "lbd:"
                string secondId = topic2.Concept.Id.Remove(0, 4);
                query+= $@"?statement = {id}2{secondId} || ";
            }
        }

        query = query.Remove(query.Length - 4, 4);
        return query;
    }
}
