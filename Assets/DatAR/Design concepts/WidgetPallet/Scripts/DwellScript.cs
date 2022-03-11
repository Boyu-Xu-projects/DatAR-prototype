using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Dwell;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DwellScript : BaseDwellSample
{
    public Animator animator;
    public GameObject slidePlane;
    private GameObject currentIcon;
    public override void DwellStarted(IMixedRealityPointer pointer)
    {
        base.DwellStarted(pointer);
        Debug.Log("started!");
        if (animator != null)
        {
            animator.enabled = true;
            animator.Play("SlideAnimation", 0, 0);
        }
        currentIcon = CoreServices.InputSystem.GazeProvider.GazeTarget.gameObject;
    }

    public override void DwellCanceled(IMixedRealityPointer pointer)
    {
        base.DwellCanceled(pointer);
        Debug.Log("Stopped!");
        if (animator != null)
        {
            animator.SetTrigger("AbortTrigger");
            animator.enabled = false;
            slidePlane.transform.localScale = new Vector3(0, 0.002f, 0.0001f);
        }
        currentIcon = null;
    }

    public override void DwellCompleted(IMixedRealityPointer pointer)
    {
        base.DwellCompleted(pointer);
        Debug.Log("Hey doe iets");
        if (animator != null)
        {
            animator.enabled = false;
            slidePlane.transform.localScale = new Vector3(0, 0.002f, 0.0001f);
        }

        if (currentIcon != null)
        {
            GameObject child = currentIcon.transform.GetChild(0).gameObject;
            SpriteRenderer renderer = child.GetComponent<SpriteRenderer>();
            string iconName = renderer.sprite.name;
            if (iconName != null)
            {
                SpawnConnection.Instance.ChosenWidget(iconName);
            }
        }
    }
}
