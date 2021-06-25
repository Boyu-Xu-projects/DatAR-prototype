using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class ResourceSphereButtonPressToDuplicate : MonoBehaviour
{
    //public SteamVR_Action_Boolean actionToDuplicate;
    private ResourceSphereManufacturer _manufacturer;
    //private XrPlatformSwitcher _xrPlatform;

    private void Awake()
    {
        var resourceSpherePool = GameObject.Find("StandaloneResourceSpherePool");
        var services = GameObject.Find("Services");

        if (!resourceSpherePool)
        {
            Debug.LogError("No `StandaloneResourceSpherePool` Prefab was not found in the scene. "
                           + "This GameObject is required to allow free-floating resource spheres.");
            gameObject.SetActive(false);
            return;
        }
        
        _manufacturer = resourceSpherePool.GetComponent<ResourceSphereManufacturer>();
        //_xrPlatform = services.GetComponent<XrPlatformSwitcher>();
    }
    
    public void CheckIfShouldDuplicate()
    {
        //if (_xrPlatform.loadedPlatform.Value == XrPlatformType.SteamVr && actionToDuplicate.GetStateDown(SteamVR_Input_Sources.Any))
        //{
        //    var duplicate = Instantiate(gameObject, GameObject.Find("StandaloneResourceSpherePool").transform);
        //    duplicate.transform.localScale = new Vector3(_manufacturer.pointScale,_manufacturer.pointScale,_manufacturer.pointScale);
        //    duplicate.transform.position = gameObject.transform.position;
        //    // The duplicate is placed where the original game object was.
        //}
    }
}
