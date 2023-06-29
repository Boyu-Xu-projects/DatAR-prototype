using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GraphButton : MonoBehaviour
{
    public TopicRelationManager trm;

    public void Toggle()
    {
        trm.SetGraphMode();
    }
}
