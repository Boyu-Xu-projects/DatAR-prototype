using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pallettracking : MonoBehaviour
{
    public GameObject cubeFollowPoint;
    private MixedRealityPose pose;

    // Update is called once per frame
    void Update()
    {
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, HandSettings.Instance.nonDominantHand, out pose))
        {
            cubeFollowPoint.transform.position = pose.Position;
        }
    }
}
