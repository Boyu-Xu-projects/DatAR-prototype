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

    public Material defaultMaterial;
    public Material selectedMaterial;

    AudioSource audio;


    private void Start()
    {
        audio = GetComponent<AudioSource>();
    }

    //private void Update()
    //{
    //    if (CoreServices.InputSystem.GazeProvider.GazeTarget == null)
    //    {
    //        Debug.Log(CoreServices.InputSystem.GazeProvider.GazeTarget.gameObject);
    //    }
    //}

    public override void DwellStarted(IMixedRealityPointer pointer)
    {
        //base.DwellStarted(pointer);
        Debug.Log("started!");
        this.transform.parent.gameObject.GetComponent<Renderer>().material = selectedMaterial;
        if (animator != null)
        {
            animator.enabled = true;
            animator.Play("SlideAnimation", 0, 0);
        }

        if (CoreServices.InputSystem.GazeProvider.GazeTarget != null)
        {
            currentIcon = CoreServices.InputSystem.GazeProvider.GazeTarget.gameObject;
        }
        else
        {
            currentIcon = null;
        }    
    }

    public override void DwellCanceled(IMixedRealityPointer pointer)
    {
        //base.DwellCanceled(pointer);
        Debug.Log("Stopped!");
        if (animator != null)
        {
            animator.SetTrigger("AbortTrigger");
            animator.enabled = false;
            slidePlane.transform.localScale = new Vector3(0, 0.002f, 0.0001f);
        }
        currentIcon = null;
        this.transform.parent.gameObject.GetComponent<Renderer>().material = defaultMaterial;
    }

    public override void DwellCompleted(IMixedRealityPointer pointer)
    {
        //base.DwellCompleted(pointer);
        Debug.Log("Hey doe iets");
        if (animator != null)
        {
            animator.enabled = false;
            slidePlane.transform.localScale = new Vector3(0, 0.002f, 0.0001f);
        }

        if (currentIcon != null && this.transform.gameObject.tag.ToString() == "PalletIcon")
        {
            GameObject child = currentIcon.transform.GetChild(0).gameObject;
            SpriteRenderer renderer = child.GetComponent<SpriteRenderer>();
            string iconName = renderer.sprite.name;

            if (iconName != null)
            {
                audio.Play();
                SpawnConnection.Instance.ChosenWidget(iconName);
            }
        }
        else if (this.transform.gameObject.tag.ToString() == "UpArrow")
        {
            DynamicPalletIcons.Instance.UpArrow();
        }
        else if (this.transform.gameObject.tag.ToString() == "DownArrow")
        {
            DynamicPalletIcons.Instance.DownArrow();
        }
        this.transform.parent.gameObject.GetComponent<Renderer>().material = defaultMaterial;
    }
}
