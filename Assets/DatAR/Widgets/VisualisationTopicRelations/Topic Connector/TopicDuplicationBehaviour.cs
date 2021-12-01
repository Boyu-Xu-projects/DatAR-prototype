using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public class TopicDuplicationBehaviour : MonoBehaviour
{
    [FormerlySerializedAs("isFixed")] public bool shouldDuplicateOnGrab = true;

    private TopicManufacturer _manufacturer;

    private void Awake()
    {
        var topicPool = GameObject.Find("StandaloneTopicPool");

        if (!topicPool)
        {
            Debug.LogError("No `StandaloneTopicePool` Prefab was not found in the scene. "
                           + "This GameObject is required to allow topic expansion.");
            gameObject.SetActive(false);
            return;
        }
        
        _manufacturer = topicPool.GetComponent<TopicManufacturer>();
        
    }

    // If not fixed, simply move when picked up.
    public void DuplicateIfFixed()
    {
        if (shouldDuplicateOnGrab)
        {
            var duplicate = Instantiate(gameObject, transform.parent);
            duplicate.transform.position = transform.position;
            duplicate.transform.localScale = transform.localScale;
            duplicate.GetComponent<Renderer>().material = GetComponent<Renderer>().material;

            transform.SetParent(GameObject.Find("StandaloneTopicPool").transform, true);
            transform.localScale = new Vector3(_manufacturer.pointScale,_manufacturer.pointScale,_manufacturer.pointScale);
            GetComponent<TopicDuplicationBehaviour>().shouldDuplicateOnGrab = false;
            tag = "Deletable";
        }
    }
}
