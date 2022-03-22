using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GazeCursorOn : MonoBehaviour
{
    private void Start()
    {
        PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOn);
    }

    void Update()
    {
        PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOn);
    }
}
