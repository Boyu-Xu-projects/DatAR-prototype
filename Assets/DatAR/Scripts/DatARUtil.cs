using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DatARUtil : MonoBehaviour
{
    #region Singleton
    private static DatARUtil instance = null;
    public static DatARUtil Instance
    {
        get
        {
            if(instance == null)
            {
                instance = FindObjectOfType<DatARUtil>();
                if(instance == null)
                {
                    GameObject go = new GameObject("DatARUtilSingleton");
                    go.AddComponent<DatARUtil>();
                    DontDestroyOnLoad(go);
                }
            }
            return instance;
        }
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(this);
        }
    }
    #endregion

    [HideInInspector] public GameObject currentFocusTarget;

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
