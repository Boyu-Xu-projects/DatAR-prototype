using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;


public class WidgetFactory : MonoBehaviour
{

    [SerializeField] private GameObject prefabToGenerate;
    public bool shouldDuplicateOnGrab = true;

    private void Awake()
    {
        var widgetPool = GameObject.Find("StandaloneWidgetPool");

        if (!widgetPool)
        {
            Debug.LogError("No `StandaloneWidgetPool` Prefab was not found in the scene. "
                           + "This GameObject is required to allow widget generation");
            gameObject.SetActive(false);
        }
    }
    public void GenerateWidget()
    {
        if (shouldDuplicateOnGrab)
        {
            var duplicate = Instantiate(prefabToGenerate, transform.parent);
            duplicate.transform.position = transform.position;
            duplicate.transform.localScale = transform.localScale;
            duplicate.GetComponent<Renderer>().material = GetComponent<Renderer>().material;

            transform.SetParent(GameObject.Find("StandaloneWidgetPool").transform, true);
            shouldDuplicateOnGrab = false;
        }
        //transform.localScale = new Vector3(_manufacturer.pointScale, _manufacturer.pointScale, _manufacturer.pointScale);
        //GameObject.Find("StandaloneWidgetPool").transform

    }
}
