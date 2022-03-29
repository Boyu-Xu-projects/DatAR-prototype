using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneSwitchingGesture : MonoBehaviour
{
    public GameObject sceneButtons = null;
    private Coroutine storedCoroutine = null;
    void Start()
    {
        sceneButtons.SetActive(false);
    }

    private bool thumbGestureInnit = false;
    void Update()
    {
        if (GestureUtils.isThumbsUp(Handedness.Right))
        {
            if (!thumbGestureInnit)
            {
                Debug.Log("Show thumb");
                storedCoroutine = StartCoroutine(HoldThumbUp());
                thumbGestureInnit = true;
            }
        }
        else if (!GestureUtils.isThumbsUp(Handedness.Right))
        {
            if (thumbGestureInnit)
            {
                thumbGestureInnit = false;
                StopCoroutine(storedCoroutine);
            }
        }
    }

    private IEnumerator HoldThumbUp()
    {
        yield return new WaitForSeconds(2f);
        sceneButtons.SetActive(true);
    }
}
