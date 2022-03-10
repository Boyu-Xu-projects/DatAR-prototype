using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using System;

public static class GestureUtils
{
    private const float PinchThreshold = 0.7f;
    private const float GrabThreshold = 0.2f;
    private const float thumbUpThreshold = 0.2f;
    private const float swipeThreshold = 0.4f;

    public static bool IsGrabbing(Handedness trackedHand)
    {
        return HandPoseUtils.MiddleFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.RingFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.PinkyFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.ThumbFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.IndexFingerCurl(trackedHand) > GrabThreshold;
    }

    public static bool isThumbsUp(Handedness trackedHand)
    {
        return !IsGrabbing(trackedHand) &&
            HandPoseUtils.MiddleFingerCurl(trackedHand) > thumbUpThreshold &&
               HandPoseUtils.RingFingerCurl(trackedHand) > thumbUpThreshold &&
               HandPoseUtils.PinkyFingerCurl(trackedHand) > thumbUpThreshold &&
               HandPoseUtils.IndexFingerCurl(trackedHand) > thumbUpThreshold &&
               HandPoseUtils.ThumbFingerCurl(trackedHand) < thumbUpThreshold;
    }

    public static bool isSwipe(Handedness trackedHand)
    {
        return !IsGrabbing(trackedHand) && !isThumbsUp(trackedHand) &&
            HandPoseUtils.ThumbFingerCurl(trackedHand) < swipeThreshold &&
            HandPoseUtils.IndexFingerCurl(trackedHand) < swipeThreshold &&
            HandPoseUtils.MiddleFingerCurl(trackedHand) > swipeThreshold &&
            HandPoseUtils.RingFingerCurl(trackedHand) > swipeThreshold &&
            HandPoseUtils.PinkyFingerCurl(trackedHand) > swipeThreshold;
    }
}

public class SwitchGesture : MonoBehaviour
{
    public GameObject SwipePie;
    private bool gestureInstantiated = false;
    private bool thumbGestureInnit = false;
    private bool isPalmUp = false;
    private bool swipeInnit = false;

    private bool stopWatchActive = false;
    private float currentTime = 0;
    private Vector3 startLocation;
    private Vector3 endLocation;

    private MixedRealityPose pose;

    private void Start()
    {
        currentTime = 0;
    }

    public void PalmShowing()
    {
        isPalmUp = true;
    }

    public void PalmNotShowing()
    {
        isPalmUp = false;
    }

    private void Update()
    {
        if (GestureUtils.isThumbsUp(Handedness.Left))
        {
            if (!thumbGestureInnit)
            {
                if (isPalmUp)
                {
                    DynamicIcons.Instance.SwipeMenu(true);
                }
                else
                {
                    DynamicIcons.Instance.SwipeMenu(false);
                }
                thumbGestureInnit = true;
            }
        }
        else if(!GestureUtils.isThumbsUp(Handedness.Left))
        {
            if (thumbGestureInnit)
            {
                thumbGestureInnit = false;
            }
        }

        //===========================================================================================
        if (GestureUtils.IsGrabbing(Handedness.Left))
        {
            if (!gestureInstantiated)
            {
                if (SwipePie.activeSelf)
                {
                    SwipePie.SetActive(false);
                }
                else if(!SwipePie.activeSelf)
                {
                    SwipePie.SetActive(true);
                }
                gestureInstantiated = true;
            }
        }
        else if(!GestureUtils.IsGrabbing(Handedness.Left))
        {
            if (gestureInstantiated)
            {
                gestureInstantiated = false;
            }
        }
        //===========================================================================================
        if (stopWatchActive)
        {
            currentTime = currentTime + Time.deltaTime;
        }

        if (GestureUtils.isSwipe(Handedness.Left))
        {
            if (!swipeInnit)
            {
                stopWatchActive = true;
                if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out pose))
                {
                    startLocation = pose.Position;
                }
                swipeInnit = true;
            }
        }
        else if (!GestureUtils.isSwipe(Handedness.Left))
        {
            if (swipeInnit)
            {
                stopWatchActive = false;
                if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out pose))
                {
                    endLocation = pose.Position;
                }
                TimeSpan time = TimeSpan.FromSeconds(currentTime);
                //Debug.Log("Time:" + time.Milliseconds);
                //Debug.Log("start: " + startLocation);
                //Debug.Log("end:" + endLocation);

                //Calculate velocity
                float swipeDifference = endLocation.y - startLocation.y;
                double velocity = swipeDifference / time.Milliseconds;
                Debug.Log(velocity);
                if (velocity < 0.0004)
                {
                    //Is y axis difference positive?(up swipe) or negative(down swipe)
                    if (swipeDifference > 0)
                    {
                        //swipe up
                        DynamicIcons.Instance.SwipeMenu(true);
                    }
                    else
                    {
                        //swipe down
                        DynamicIcons.Instance.SwipeMenu(false);
                    }
                }

                swipeInnit = false;
            }
        }
        //=============================================================================================
        //Debug.Log("thumb: " + HandPoseUtils.ThumbFingerCurl(Handedness.Left));
        //Debug.Log("index: " + HandPoseUtils.IndexFingerCurl(Handedness.Left));
        //Debug.Log("middle: " + HandPoseUtils.MiddleFingerCurl(Handedness.Left));
        //Debug.Log("ring: " + HandPoseUtils.RingFingerCurl(Handedness.Left));
        //Debug.Log("pinky: " + HandPoseUtils.PinkyFingerCurl(Handedness.Left));
    }
    public void StartStopWatch()
    {
        stopWatchActive = true;
    }
    public void StopStopWatch()
    {
        stopWatchActive = false;
    }

    
}
