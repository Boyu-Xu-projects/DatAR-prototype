using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPoint : MonoBehaviour
{
    public Camera camToUse;
    public Transform CubeToTransform;
    void Update()
    {
        Ray ray = camToUse.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            Debug.Log(hit.point);
            CubeToTransform.transform.position = new Vector3(hit.point.x, hit.point.y, CubeToTransform.transform.position.z);
        }
    }
}
