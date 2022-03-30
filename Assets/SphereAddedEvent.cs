using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereAddedEvent : MonoBehaviour
{
    private int childAmount = 0;

    // Update is called once per frame
    void Update()
    {
        if (this.transform.childCount > childAmount)
        {
            SpawnConnection.Instance.AddSphereToWidget();
            childAmount = this.transform.childCount;
        }

        if (childAmount > this.transform.childCount)
        {
            childAmount = this.transform.childCount;
        }
    }
}
