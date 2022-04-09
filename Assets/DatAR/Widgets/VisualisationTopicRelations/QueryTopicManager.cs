using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using DatAR.DataModels.Resources;

public class QueryTopicManager : MonoBehaviour
{
    private SparqlService _sparqlService;
    private static QueryTopicManager qtm;

    public static QueryTopicManager QTM {
        get 
        {
            if(qtm == null) {
                qtm = FindObjectOfType<QueryTopicManager>();
                if(qtm == null) {
                    GameObject obj = new GameObject();
                    obj.name = "QueryTopicManager";
                    qtm = obj.AddComponent<QueryTopicManager>();
                }
            }
            return qtm;
        }
    }

    void Awake()
    {
        if (qtm == null)
        {
            qtm = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else        
            Destroy(gameObject);

        var services = GameObject.Find("Services");
        _sparqlService = services.GetComponent<SparqlService>();
    }

    async public Task<List<FormattedTopicCooccurrence>> QueryTopic(string topicId, string topicLabel, string topicClass = "")
    {
        try
        {
            var cooccurrences = await _sparqlService.GetTopicsRelatedToDisease(topicId);

            if (cooccurrences.Count < 0)
                return null;
        
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

            // Within each category, sort on cooccurrences on descending order
            foreach(List<DiseaseTopicsResource> category in fixedCooccurrences)
                category.Sort((y,x) => x.AppearTimes.CompareTo(y.AppearTimes));
        
            // Within each category, take only the top 6
            List<FormattedTopicCooccurrence> retrievedCooccurrences = new List<FormattedTopicCooccurrence>();
            
            foreach(List<DiseaseTopicsResource> category in fixedCooccurrences) {
                int numberOfTopics = 5;
                if(category.Count < numberOfTopics)
                    numberOfTopics = category.Count;

                for(int i = 0; i < numberOfTopics; i++)
                    retrievedCooccurrences.Add(new FormattedTopicCooccurrence(
                        category[i].Concept.Label,
                        category[i].Concept.Types[0],
                        topicLabel,
                        category[i].Concept.Id,
                        category[i].AppearTimes
                    ));
            }

            return retrievedCooccurrences;
        }
        catch (Exception e) // Failed to retrieve results from data source. Generating random "topics" for demo purposes.
        {
            Debug.LogError(e);
            Debug.Log("Using hard-coded example...");
            
            int numberOfTopicsPerCategory = 3;
            int numberOfCategories = 6;
            string randomText = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
            string categoryName = "";
            
            List<FormattedTopicCooccurrence> retrievedCooccurrences = new List<FormattedTopicCooccurrence>();

            for(int i = 0; i < numberOfCategories; i++)
            {
                switch(i)
                {
                    case 0: { categoryName = "lbd:region"; break; }
                    case 1: { categoryName = "lbd:transmitter"; break; }
                    case 2: { categoryName = "lbd:gene"; break; }
                    case 3: { categoryName = "lbd:function"; break; }
                    case 4: { categoryName = "lbd:protein"; break; }
                    case 5: { categoryName = "lbd:neuron"; break; }
                }

                List<FormattedTopicCooccurrence> tempList = new List<FormattedTopicCooccurrence>();

                for(int j = 0; j < numberOfTopicsPerCategory; j++)
                {
                    tempList.Add(new FormattedTopicCooccurrence(
                        randomText[UnityEngine.Random.Range(0, 52)].ToString(), // Concept Name
                        categoryName, // Concept Category
                        topicLabel, // Topic Name
                        "lbd:unkown", // Concept ID
                        UnityEngine.Random.Range(10, 1000) // Appearance times
                    ));
                }

                tempList.Sort((y,x) => x.TopicCooccurrences.CompareTo(y.TopicCooccurrences));
                
                foreach(FormattedTopicCooccurrence item in tempList)
                    retrievedCooccurrences.Add(item);
            }
            
            return retrievedCooccurrences;
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
