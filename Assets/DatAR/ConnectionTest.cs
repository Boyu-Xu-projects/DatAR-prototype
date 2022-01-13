using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectionTest : MonoBehaviour
{
    [SerializeField] private GameObject brainmodelWidget;
    [SerializeField] private GameObject coocurrenceWidget;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    private Vector3 inletWidgetAbsolutePosition;
    private Vector3 outletWidgetAbsolutePositionOld;
    void Update()
    {
        if (brainmodelWidget && coocurrenceWidget)
        {
            if (Input.GetKeyDown(KeyCode.P))
            {
                Debug.Log("Key Pressed");
                inletWidgetAbsolutePosition = brainmodelWidget.gameObject.transform.Find("DataflowInlet").transform.position;
                outletWidgetAbsolutePositionOld = coocurrenceWidget.gameObject.transform.Find("DataflowOutlet").transform.position;

                coocurrenceWidget.gameObject.transform.Find("DataflowOutlet").transform.position = inletWidgetAbsolutePosition;
                Invoke("ReturnConnection", 0.01f);
            }
        }
    }

    void ReturnConnection()
    {
        coocurrenceWidget.gameObject.transform.Find("DataflowOutlet").transform.position = outletWidgetAbsolutePositionOld;
    }
}
