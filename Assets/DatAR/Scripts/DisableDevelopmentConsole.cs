using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableDevelopmentConsole : MonoBehaviour
{
    private void Start()
    {
        // Disable to GazeProvider as it isn't relevant to DatAR and gets in the way of the mesh outline generation.
        var gazeProvider = Camera.main.GetComponent<GazeProvider>();
        if(gazeProvider != null)
        {
            gazeProvider.enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {   // Only necessary if built using the Debug configuration, as Unity inserts a weird
        // developer console every update in this config. This is the only way to turn it off.
        Debug.developerConsoleVisible = false;
    }
}
