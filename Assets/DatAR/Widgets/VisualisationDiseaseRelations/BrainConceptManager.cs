using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BrainConceptManager : MonoBehaviour
{
    public BrainConceptSphere ConceptPrefab;
    public float MaxHistogramScale;

    public void GenerateConceptList(List<FormattedCooccurrence> cooccurrences)
    {
        foreach (Transform oldConcept in transform)
        {
            Destroy(oldConcept.gameObject);
        }
        transform.DetachChildren();

        foreach (var cooccurrence in cooccurrences)
        {
            var conceptObject = Instantiate(ConceptPrefab, transform);
            conceptObject.transform.localPosition = new Vector3(0, -0.6f * transform.childCount, 0);
            conceptObject.PopulateData(cooccurrence.Concept, cooccurrence.Class, cooccurrence.Disease1.Item2, cooccurrence.Disease2.Item2);
        }

        SetHistogramValues();
    }

    private void SetHistogramValues()
    {
        var allConcepts = GetComponentsInChildren<BrainConceptSphere>();
        var maxDiseaseAppearTimes = allConcepts.SelectMany(x => new[] { x.Disease1AppearTimes, x.Disease2AppearTimes }).Max();

        allConcepts.ForEach(concept =>
        {
            var calculatedScaleDisease1 = Util.Map(concept.Disease1AppearTimes, 0, maxDiseaseAppearTimes, 0, MaxHistogramScale);
            concept.disease1Bar.transform.localScale = new Vector3(calculatedScaleDisease1, 0.25f, 0.01f);
            concept.disease1Bar.transform.localPosition -= new Vector3(calculatedScaleDisease1 / 2, 0, 0);

            var calculatedScaleDisease2 = Util.Map(concept.Disease2AppearTimes, 0, maxDiseaseAppearTimes, 0, MaxHistogramScale);
            concept.disease2Bar.transform.localScale = new Vector3(calculatedScaleDisease2, 0.25f, 0.01f);
            concept.disease2Bar.transform.localPosition += new Vector3(calculatedScaleDisease2 / 2, 0, 0);
        });
    }
}
