using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapInput : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                // Check if hit.transform is middle collision trigger box
                if (hit.transform.gameObject.tag.ToString() == "SwipePie_Middle")
                {
                    //get the current icon
                    //spawn the correct widget
                }
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
       
    }
}
