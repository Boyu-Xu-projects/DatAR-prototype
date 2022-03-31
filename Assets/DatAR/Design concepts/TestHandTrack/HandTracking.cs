using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
public class HandTracking : MonoBehaviour
{
    public GameObject spherePrefab;
    public bool isItPallet = false;

    private GameObject thumbObject;
    private GameObject indexObject;
    private GameObject middleObject;
    private GameObject ringObject;
    private GameObject pinkyObject;

    private MixedRealityPose pose;
    void Start()
    {
        thumbObject = Instantiate(spherePrefab, this.transform);
        indexObject = Instantiate(spherePrefab, this.transform);
        middleObject = Instantiate(spherePrefab, this.transform);
        ringObject = Instantiate(spherePrefab, this.transform);
        pinkyObject = Instantiate(spherePrefab, this.transform);

        thumbObject.GetComponent<Renderer>().enabled = false;
        indexObject.GetComponent<Renderer>().enabled = false;
        middleObject.GetComponent<Renderer>().enabled = false;
        ringObject.GetComponent<Renderer>().enabled = false;
        pinkyObject.GetComponent<Renderer>().enabled = false;
    }

    void Update()
    {
        if (isItPallet)
        {
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, HandSettings.Instance.dominantHand, out pose))
            {
                indexObject.GetComponent<Renderer>().enabled = true;
                indexObject.transform.position = pose.Position;
            }
        }
        else
        {
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, HandSettings.Instance.dominantHand, out pose))
            {
                thumbObject.GetComponent<Renderer>().enabled = true;
                thumbObject.transform.position = pose.Position;
            }

            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, HandSettings.Instance.dominantHand, out pose))
            {
                indexObject.GetComponent<Renderer>().enabled = true;
                indexObject.transform.position = pose.Position;
            }

            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleTip, HandSettings.Instance.dominantHand, out pose))
            {
                middleObject.GetComponent<Renderer>().enabled = true;
                middleObject.transform.position = pose.Position;
            }

            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.RingTip, HandSettings.Instance.dominantHand, out pose))
            {
                ringObject.GetComponent<Renderer>().enabled = true;
                ringObject.transform.position = pose.Position;
            }

            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyTip, HandSettings.Instance.dominantHand, out pose))
            {
                pinkyObject.GetComponent<Renderer>().enabled = true;
                pinkyObject.transform.position = pose.Position;
            }
        }
    }
}
