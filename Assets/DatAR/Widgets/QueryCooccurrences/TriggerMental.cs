using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerMental : MonoBehaviour
{
    public GameObject QueryMentalIndirect;
    public GameObject QueryGeneIndirect;
    public GameObject QueryProteinIndirect;
    public GameObject QueryPrevious;

   // public GameObject QueryCooccur;
    //public GameObject QueryMentalIndirect;

    void OnTriggerEnter(Collider collider)
    {

        // activeGameObject01 = GameObject.FindWithTag("Sphere01");

        if (collider.gameObject.tag == "MentalIndirectFunction")
        {

            Debug.Log("print indirect-mental-00");

            QueryMentalIndirect.SetActive(true);
            QueryPrevious.SetActive(false);
           
        }


        if (collider.gameObject.tag == "GeneIndirectFunction")
        {

            Debug.Log("print indirect-gene-00");

            QueryGeneIndirect.SetActive(true);
            QueryPrevious.SetActive(false);

        }



        if (collider.gameObject.tag == "ProteinIndirectFunction")
        {

            Debug.Log("print indirect-protein-00");

            QueryProteinIndirect.SetActive(true);
            QueryPrevious.SetActive(false);

        }
        /*
        if (collider.gameObject.tag == "FilterFunction")
        {

            Debug.Log("change to query co-occurrences");

            QueryCooccur.SetActive(true);
            QueryMentalIndirect.SetActive(false);

        }
        */
    }
}
