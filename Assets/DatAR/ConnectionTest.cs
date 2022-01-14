using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectionTest : MonoBehaviour
{
    [SerializeField] private GameObject brainmodelWidget;
    [SerializeField] private GameObject coocurrenceWidget;

    // Update is called once per frame
    private Vector3 inletWidgetAbsolutePosition;
    private Vector3 outletWidgetAbsolutePositionOld;
    void Update()
    {
        if (brainmodelWidget && coocurrenceWidget)
        {
            if (Input.GetKeyDown(KeyCode.P))
            {
                print("Key Pressed");

                //Get the dataflowinlet gameobject
                DataflowInlet dataflowinlet = brainmodelWidget.transform.Find("DataflowInlet").gameObject.GetComponent<DataflowInlet>();
                //Get the dataflowoutlet gameobject
                DataflowOutlet dataflowoutlet = coocurrenceWidget.transform.Find("DataflowOutlet").gameObject.GetComponent<DataflowOutlet>();

                //Add outlet to input game object and start connection
                dataflowinlet.SetInputGameObject(dataflowoutlet);
            }
        }
    }
}
