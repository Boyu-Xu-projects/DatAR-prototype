using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GraphButton : MonoBehaviour
{
    public BrainTopicManager BrainTopicManager;

    public void Toggle()
    {
        QueryTopicManager.QTM.SetGraphMode();
    }
}
