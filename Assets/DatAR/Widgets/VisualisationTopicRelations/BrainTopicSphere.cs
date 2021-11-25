using DatAR.DataModels.Resources;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BrainTopicSphere : MonoBehaviour
{
    public TMPro.TextMeshPro conceptText;
    public TMPro.TextMeshPro diseaseAppearTimesText;
    public GameObject diseaseBar;

    [HideInInspector] public string BrainTopicLabel { get; private set; }
    [HideInInspector] public int DiseaseAppearTimes { get; private set; }

    public void PopulateData(string brainTopic, string brainClass, int diseaseAppearTimes)
    {
        BrainTopicLabel = brainTopic;
        DiseaseAppearTimes = diseaseAppearTimes;

        conceptText.text = BrainTopicLabel;
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