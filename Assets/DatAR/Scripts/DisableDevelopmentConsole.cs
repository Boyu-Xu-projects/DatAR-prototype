using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableDevelopmentConsole : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        Debug.developerConsoleVisible = false;
    }
}
