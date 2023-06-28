using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndirectRelationFunction : MonoBehaviour
{
    public GameObject MentalIndirectFunction;
    public GameObject GeneIndirectFunction;
    public GameObject ProteinIndirectFunction;

    public GameObject interface_text;
    public GameObject GeneBall;
    public GameObject ProteinBall;
    public GameObject MentalBall;
    

    //public GameObject previous;
    //public GameObject GeneClass;
    // public GameObject ProteinClass;


    void OnTriggerEnter(Collider collider)
    {

        // activeGameObject01 = GameObject.FindWithTag("Sphere01");

        if (collider.gameObject.tag == "MentalBridge")
        {

            Debug.Log("print indirect-mental");

            MentalIndirectFunction.SetActive(true);
            interface_text.SetActive(false);
            
            GeneBall.SetActive(false);
            ProteinBall.SetActive(false);
            // previous.SetActive(false);
            //   GeneClass.SetActive(true);
            //  ProteinClass.SetActive(true);
        }

        if (collider.gameObject.tag == "GeneBridge")
        {

            Debug.Log("print indirect-gene");

            
            GeneIndirectFunction.SetActive(true);
            interface_text.SetActive(false);

            MentalBall.SetActive(false);
            ProteinBall.SetActive(false);
            // previous.SetActive(false);
            //   GeneClass.SetActive(true);
            //  ProteinClass.SetActive(true);
        }


        if (collider.gameObject.tag == "ProteinBridge")
        {

            Debug.Log("print indirect-protein");


            ProteinIndirectFunction.SetActive(true);
            interface_text.SetActive(false);

            MentalBall.SetActive(false);
            GeneBall.SetActive(false);
            // previous.SetActive(false);
            //   GeneClass.SetActive(true);
            //  ProteinClass.SetActive(true);
        }



    }

    /*  void OnTriggerExit(Collider collider)
      {
          MentalClass.SetActive(false);
          previous.SetActive(true);
      }

      */
}
