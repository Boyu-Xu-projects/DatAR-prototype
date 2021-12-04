using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEditor;

public class BrainTopicManager : MonoBehaviour
{
    public BrainTopicSphere TopicPrefab;
    public float MaxHistogramScale;

    public void GenerateConceptList(List<FormattedTopicCooccurrence> cooccurrences, bool displayRatio = false, bool centerAndUpscale = false)
    {
        foreach (Transform oldConcept in transform)
            Destroy(oldConcept.gameObject);
        
        transform.DetachChildren();

        foreach (var cooccurrence in cooccurrences)
        {
            var conceptObject = Instantiate(TopicPrefab, transform);
            conceptObject.transform.localPosition = new Vector3(0, -0.6f * transform.childCount, 0);
            conceptObject.name = cooccurrence.Concept;

            if (!displayRatio)
                conceptObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, cooccurrence.TopicCooccurrences);
            else
                conceptObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, (int) cooccurrence.TopicRatio);
        }

        SetHistogramValues(displayRatio);

        //TODO: Hardcoded position and scale for now, make dynamic based on number of conceps shown
        if (centerAndUpscale)
        {
            transform.localPosition = new Vector3(0, 2.25f, 0);
            transform.localScale = new Vector3(1.3f, 1.3f, 1.3f);
        }
        else
        {
            transform.localPosition = new Vector3(0, 5.5f, 0);
            transform.localScale = new Vector3(1f, 1f, 1f);
        }
    }

    public void GenerateConnectedTopicList(List<FormattedTopicCooccurrence> cooccurrences, bool displayRatio = false, bool centerAndUpscale = false)
    {   
        foreach (var cooccurrence in cooccurrences)
        {
            var conceptObject = Instantiate(TopicPrefab, transform);
            conceptObject.transform.localPosition = new Vector3(0, -1.2f * transform.childCount, 0);
            conceptObject.transform.localScale = new Vector3(1f, 1f, 1f);
            conceptObject.name = cooccurrence.Concept;
            //conceptObject.GetComponent<TopicDuplicationBehaviour>().shouldDuplicateOnGrab = true;

            if (!displayRatio)
                conceptObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, cooccurrence.TopicCooccurrences);
            
            else
                conceptObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, (int) cooccurrence.TopicRatio);
        }

        SetHistogramValues(displayRatio);

        //TODO: Hardcoded position and scale for now, make dynamic based on number of conceps shown
        if (centerAndUpscale)
        {
            transform.localPosition = new Vector3(0, 2.25f, 0);
            transform.localScale = new Vector3(1.3f, 1.3f, 1.3f);
        }
        else
        {
            // Transform is the BrainTopics Gameobject from a Topic Sphere
            transform.localPosition = new Vector3(transform.parent.localPosition.x + 2f, transform.parent.localPosition.y + 5f, 0);
            transform.localScale = new Vector3(1f, 1f, 1f); 
        }
    }

    private void SetHistogramValues(bool displayRatio)
    {
        var allConcepts = GetComponentsInChildren<BrainTopicSphere>();
        var maxDiseaseAppearTimes = (displayRatio) ? 
            100 :
            allConcepts.SelectMany(x => new[] { x.DiseaseAppearTimes }).Max();

        allConcepts.ForEach(concept =>
        {
            var calculatedScaleDisease = Util.Map(concept.DiseaseAppearTimes, 0, maxDiseaseAppearTimes, 0, MaxHistogramScale);
            concept.diseaseBar.transform.localScale = new Vector3(calculatedScaleDisease, 0.25f, 0.01f); //TODO: Hardcoded scales, make dynamic
            concept.diseaseBar.transform.localPosition += new Vector3(calculatedScaleDisease / 2, 0, 0);
        });
    }
}
