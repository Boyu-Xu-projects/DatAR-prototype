using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BrainTopicManager : MonoBehaviour
{
    public BrainTopicSphere TopicPrefab;
    public float MaxHistogramScale;

    public void GenerateConceptList(List<FormattedTopicCooccurrence> cooccurrences, bool displayRatio, bool centerAndUpscale)
    {
        foreach (Transform oldConcept in transform)
        {
            Destroy(oldConcept.gameObject);
        }
        transform.DetachChildren();

        foreach (var cooccurrence in cooccurrences)
        {
            var topicObject = Instantiate(TopicPrefab, transform);
            topicObject.transform.localPosition = new Vector3(0, -0.6f * transform.childCount, 0);

            if (!displayRatio)
            {
                topicObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, cooccurrence.DiseaseCooccurences);
            }
            else
            {
                topicObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, (int) cooccurrence.DiseaseRatio);
            }
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

    private void SetHistogramValues(bool displayRatio)
    {
        var allConcepts = GetComponentsInChildren<BrainTopicSphere>();
        var maxDiseaseAppearTimes = (displayRatio) ? 
            100 :
            allConcepts.SelectMany(x => new[] { x.DiseaseAppearTimes, x.DiseaseAppearTimes }).Max();

        allConcepts.ForEach(concept =>
        {
            var calculatedScaleDisease = Util.Map(concept.DiseaseAppearTimes, 0, maxDiseaseAppearTimes, 0, MaxHistogramScale);
            concept.diseaseBar.transform.localScale = new Vector3(calculatedScaleDisease, 0.25f, 0.01f); //TODO: Hardcoded scales, make dynamic
            concept.diseaseBar.transform.localPosition -= new Vector3(calculatedScaleDisease / 2, 0, 0);
        });
    }
}
