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
    private const float swipeThreshold = 0.2f;
    public static bool isPalmUp = false;

    public static bool IsGrabbing(Handedness trackedHand)
    {
        return HandPoseUtils.MiddleFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.RingFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.PinkyFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.ThumbFingerCurl(trackedHand) > GrabThreshold &&
               HandPoseUtils.IndexFingerCurl(trackedHand) > GrabThreshold;
    }

    //public static bool isThumbsUp(Handedness trackedHand)
    //{
    //    return !IsGrabbing(trackedHand) &&
    //        HandPoseUtils.MiddleFingerCurl(trackedHand) > thumbUpThreshold &&
    //           HandPoseUtils.RingFingerCurl(trackedHand) > thumbUpThreshold &&
    //           HandPoseUtils.PinkyFingerCurl(trackedHand) > thumbUpThreshold &&
    //           HandPoseUtils.IndexFingerCurl(trackedHand) > thumbUpThreshold &&
    //           HandPoseUtils.ThumbFingerCurl(trackedHand) < thumbUpThreshold;
    //}

    public static bool isSwipe(Handedness trackedHand)
    {
        return !IsGrabbing(trackedHand) && /*!isThumbsUp(trackedHand) &&*/
            HandPoseUtils.ThumbFingerCurl(trackedHand) > swipeThreshold &&
            HandPoseUtils.IndexFingerCurl(trackedHand) < swipeThreshold &&
            HandPoseUtils.MiddleFingerCurl(trackedHand) < swipeThreshold &&
            HandPoseUtils.RingFingerCurl(trackedHand) > swipeThreshold &&
            HandPoseUtils.PinkyFingerCurl(trackedHand) > swipeThreshold;
    }
}

public class SwitchGesture : MonoBehaviour, IMixedRealityGestureHandler
{
    public GameObject SwipePie;
    public MixedRealityInputAction selectAction;

    private bool gestureInstantiated = false;
    private bool thumbGestureInnit = false;
    //private bool isPalmUp = false;
    private bool swipeInnit = false;

    private bool stopWatchActive = false;
    private float currentTime = 0;
    private Vector3 startLocation;
    private Vector3 endLocation;
    private bool fistGestureCompleted = false;
    private bool timerStarted = false;
    private Coroutine storedCoroutine = null;

    private MixedRealityPose pose;

    private void Start()
    {
        currentTime = 0;
        SwipePie.SetActive(false);
    }

    public void PalmShowing()
    {
        GestureUtils.isPalmUp = true;
    }

    public void PalmNotShowing()
    {
        GestureUtils.isPalmUp = false;
    }

    private void Update()
    {
        //if (GestureUtils.isThumbsUp(HandSettings.Instance.nonDominantHand))
        //{
        //    if (!thumbGestureInnit)
        //    {
        //        if (isPalmUp)
        //        {
        //            DynamicIcons.Instance.SwipeMenu(true);
        //        }
        //        else
        //        {
        //            DynamicIcons.Instance.SwipeMenu(false);
        //        }
        //        thumbGestureInnit = true;
        //    }
        //}
        //else if (!GestureUtils.isThumbsUp(HandSettings.Instance.nonDominantHand))
        //{
        //    if (thumbGestureInnit)
        //    {
        //        thumbGestureInnit = false;
        //    }
        //}

        //===========================================================================================
        if (GestureUtils.IsGrabbing(HandSettings.Instance.nonDominantHand))
        {
            if (!gestureInstantiated)
            {
                if (!timerStarted)
                {
                    storedCoroutine = StartCoroutine(HoldFist());
                    timerStarted = true;
                }
                gestureInstantiated = true;
            }
        }
        else if(!GestureUtils.IsGrabbing(HandSettings.Instance.nonDominantHand))
        {
            if (gestureInstantiated)
            {
                gestureInstantiated = false;
                if (timerStarted)
                {
                    StopCoroutine(storedCoroutine);
                    fistGestureCompleted = false;
                    timerStarted = false;
                }
                
            }
        }

        //check for 0.2 seconds to hold it
        if (fistGestureCompleted)
        {
            if (SwipePie.activeSelf)
            {
                SwipePie.SetActive(false);
            }
            else if (!SwipePie.activeSelf)
            {
                SwipePie.SetActive(true);
                StartCoroutine(WaitToUse());
            }
            fistGestureCompleted = false;
        }
        //===========================================================================================
        if (stopWatchActive)
        {
            currentTime = currentTime + Time.deltaTime;
        }

        if (GestureUtils.isSwipe(HandSettings.Instance.nonDominantHand))
        {
            if (!swipeInnit)
            {
                stopWatchActive = true;
                if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, HandSettings.Instance.nonDominantHand, out pose))
                {
                    startLocation = pose.Position;
                }
                swipeInnit = true;
            }
        }
        else if (!GestureUtils.isSwipe(HandSettings.Instance.nonDominantHand))
        {
            if (swipeInnit)
            {
                stopWatchActive = false;
                if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, HandSettings.Instance.nonDominantHand, out pose))
                {
                    endLocation = pose.Position;
                }
                TimeSpan time = TimeSpan.FromSeconds(currentTime);
                //Debug.Log("Time:" + time.Milliseconds);
                //Debug.Log("start: " + startLocation);
                //Debug.Log("end:" + endLocation);

                //Calculate velocity
                //TODO: improve this
                float swipeDifference = endLocation.y - startLocation.y;
                double velocity = swipeDifference / time.Milliseconds;
                Debug.Log(velocity);


                if (velocity > 0)
                {
                    if (velocity > 0.0001)
                    {
                        Debug.Log("Swipe up");
                        DynamicIcons.Instance.SwipeMenu(true);
                    }
                }
                else if(velocity < 0)
                {
                    if (velocity < -0.0001)
                    {
                        Debug.Log("Swipe down");
                        DynamicIcons.Instance.SwipeMenu(false);
                    }
                }
                //if (velocity < 0.0004 || velocity > -0.0004)
                //{
                //    //Is y axis difference positive?(up swipe) or negative(down swipe)
                //    if (swipeDifference > 0)
                //    {
                //        //swipe up
                //        DynamicIcons.Instance.SwipeMenu(true);
                //    }
                //    else
                //    {
                //        //swipe down
                //        DynamicIcons.Instance.SwipeMenu(false);
                //    }
                //}

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

    private IEnumerator WaitToUse()
    {
        SwipePieTap.Instance.CanInteract(false);
        Debug.Log("Can't use yet");
        yield return new WaitForSeconds(0.7f);
        Debug.Log("Can use");
        SwipePieTap.Instance.CanInteract(true);
    }

    private IEnumerator HoldFist()
    {
        Debug.Log("Start");
        yield return new WaitForSeconds(.60f);
        fistGestureCompleted = true;
        timerStarted = false;
        Debug.Log("End");
    }

    public void OnGestureStarted(InputEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnGestureUpdated(InputEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnGestureCompleted(InputEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnGestureCanceled(InputEventData eventData)
    {
        throw new NotImplementedException();
    }
}
