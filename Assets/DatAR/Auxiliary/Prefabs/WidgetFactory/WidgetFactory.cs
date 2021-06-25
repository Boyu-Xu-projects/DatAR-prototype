using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WidgetFactory : MonoBehaviour
{
    [SerializeField] private GameObject prefabToGenerate;
    
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

    // If not fixed, simply move when picked up.
    //public void GenerateWidget()
    //{
    //    var duplicate = Instantiate(prefabToGenerate, GameObject.Find("StandaloneWidgetPool").transform);
    //    var hand = transform.parent.GetComponent<Hand>();
    //    hand.DetachObject(gameObject);
    //    hand.AttachObject(duplicate, hand.GetGrabStarting());
    //}
}
