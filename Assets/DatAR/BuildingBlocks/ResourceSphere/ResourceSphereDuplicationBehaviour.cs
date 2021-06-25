using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public class ResourceSphereDuplicationBehaviour : MonoBehaviour
{
    [FormerlySerializedAs("isFixed")] public bool shouldDuplicateOnGrab = true;

    private ResourceSphereManufacturer _manufacturer;
    
    private ColorService _colorService;

    private void Awake()
    {
        var resourceSpherePool = GameObject.Find("StandaloneResourceSpherePool");

        if (!resourceSpherePool)
        {
            Debug.LogError("No `StandaloneResourceSpherePool` Prefab was not found in the scene. "
                           + "This GameObject is required to allow free-floating resource spheres.");
            gameObject.SetActive(false);
            return;
        }
        
        _manufacturer = resourceSpherePool.GetComponent<ResourceSphereManufacturer>();
        
        var services = GameObject.Find("Services");
        if (!services)
        {
            Debug.LogError("The `Services` Prefab was not found in the scene. "
                           + "This GameObject is required for this script to function.");
            gameObject.SetActive(false);
            return;
        }
        
        _colorService = services.GetComponent<ColorService>();
    }

    // If not fixed, simply move when picked up.
    public void DuplicateIfFixed()
    {
        if (shouldDuplicateOnGrab)
        {
            var duplicate = Instantiate(gameObject, GameObject.Find("StandaloneResourceSpherePool").transform);
            duplicate.transform.localScale = new Vector3(_manufacturer.pointScale,_manufacturer.pointScale,_manufacturer.pointScale);
            duplicate.GetComponent<ResourceSphereDuplicationBehaviour>().shouldDuplicateOnGrab = false;
            //var hand = transform.parent.GetComponent<Hand>();
            //hand.DetachObject(gameObject);
            //hand.AttachObject(duplicate, hand.GetGrabStarting());
            
            //// Set color to neutral
            //if (GetComponent<ResourceComponent>().Resource.Types.Contains("rdf:Class"))
            //{
            //    duplicate.GetComponent<Renderer>().material = _colorService.classColor;
            //}
            //else
            //{
            //    duplicate.GetComponent<Renderer>().material = _colorService.neutralColor;
            //}
            //duplicate.GetComponentInChildren<TMP_Text>().alpha = duplicate.GetComponent<Renderer>().material.color.a;
        }
    }
}
