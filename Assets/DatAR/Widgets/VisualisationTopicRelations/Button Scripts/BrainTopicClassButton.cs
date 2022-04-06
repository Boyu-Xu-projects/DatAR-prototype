using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BrainTopicClassButton : MonoBehaviour
{
    public string brainClass;
    public TopicRelationManager visualization;
    // Start is called before the first frame update
    void Awake()
    {
        GetComponent<Interactable>().OnClick.AddListener(delegate { visualization.SelectFromClass(brainClass, GetComponent<Interactable>()); });
    }
}
