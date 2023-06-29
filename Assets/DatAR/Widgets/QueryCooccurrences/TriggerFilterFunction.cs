using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerFilterFunction : MonoBehaviour
{
    public GameObject QueryCooccur;
    public GameObject QueryMentalIndirect;


    void OnTriggerEnter(Collider collider)
    {

        // activeGameObject01 = GameObject.FindWithTag("Sphere01");

        if (collider.gameObject.tag == "FilterFunction")
        {

            Debug.Log("change to query co-occurrences");

            QueryCooccur.SetActive(true);
            QueryMentalIndirect.SetActive(false);

        }
    }
}
