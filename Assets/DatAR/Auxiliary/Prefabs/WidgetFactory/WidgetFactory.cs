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
    [FormerlySerializedAs("isFixed")] public bool shouldDuplicateOnGrab = true;
    [SerializeField] private GameObject prefabToGenerate;

    private ResourceSphereManufacturer _manufacturer;

    private void Awake()
    {
        var resourceSpherePool = GameObject.Find("StandaloneWidgetPool");

        if (!resourceSpherePool)
        {
            Debug.LogError("No `StandaloneWidgetPool` Prefab was not found in the scene. "
                           + "This GameObject is required to allow free-floating resource spheres.");
            gameObject.SetActive(false);
            return;
        }

        _manufacturer = resourceSpherePool.GetComponent<ResourceSphereManufacturer>();
    }
    public void DuplicateIfFixed()
    {
        if (shouldDuplicateOnGrab)
        {
            var duplicate = Instantiate(prefabToGenerate, GameObject.Find("StandaloneWidgetPool").transform);
            duplicate.transform.position = transform.position;
            duplicate.transform.localScale = transform.localScale;
            duplicate.GetComponent<Renderer>().material = GetComponent<Renderer>().material;

            transform.SetParent(GameObject.Find("StandaloneWidgetPool").transform, true);
            transform.localScale = new Vector3(_manufacturer.pointScale, _manufacturer.pointScale, _manufacturer.pointScale);
            GetComponent<WidgetFactory>().shouldDuplicateOnGrab = false;


            // If not fixed, simply move when picked up.
            //public void GenerateWidget()
            //{
            //    var duplicate = Instantiate(prefabToGenerate, GameObject.Find("StandaloneWidgetPool").transform);
            //    var hand = transform.parent.GetComponent<Hand>();
            //    hand.DetachObject(gameObject);
            //    hand.AttachObject(duplicate, hand.GetGrabStarting());
            //}
        }
    }
}