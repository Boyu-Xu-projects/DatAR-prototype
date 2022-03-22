using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;

public class FollowPoint : MonoBehaviour
{
    public GameObject cubeFollowPoint;
    public float offset = 208.07f;
    private MixedRealityPose pose;

    private void Start()
    {
        
    }

    void Update()
    {
        cubeFollowPoint.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, HandSettings.Instance.dominantHand, out pose))
        {
            cubeFollowPoint.GetComponent<Renderer>().enabled = true;
            cubeFollowPoint.transform.position = pose.Position;
            //cubeFollowPoint.transform.rotation = Quaternion.Euler(0, pose.Rotation.eulerAngles.y + offset, 0);
        }
    }
}
