using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipePieTap : MonoBehaviour
{
    #region SINGLETON PATTERN
    private static SwipePieTap _instance;
    public static SwipePieTap Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<SwipePieTap>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("SwipePieTap");
                    _instance = container.AddComponent<SwipePieTap>();
                }
            }

            return _instance;
        }
    }
    #endregion

    public Material defaultMaterial;
    public Material selectMaterial;
    private bool buttonTouched = false;
    private bool canInteract = true;

    private void OnTriggerEnter(Collider other)
    {
        if (canInteract)
        {
            if (other.gameObject.tag == "FingerSphere")
            {
                this.GetComponent<Renderer>().material = selectMaterial;
                this.transform.GetComponent<Renderer>().material = selectMaterial;

                if (this.transform.gameObject.tag.ToString() == "SwipePie_Left" || this.transform.gameObject.tag.ToString() == "SwipePie_Middle" ||
                    this.transform.gameObject.tag.ToString() == "SwipePie_Right")
                {
                    GameObject iconButton = this.transform.GetChild(0).transform.GetChild(0).gameObject;
                    SpriteRenderer renderer = iconButton.GetComponent<SpriteRenderer>();
                    string iconName = renderer.sprite.name;
                    if (iconName != null)
                    {
                        SpawnConnection.Instance.ChosenWidget(iconName);
                    }
                }
                else if (this.transform.gameObject.tag.ToString() == "UpArrow")
                {
                    DynamicIcons.Instance.SwipeMenu(true);
                }
                else if (this.transform.gameObject.tag.ToString() == "DownArrow")
                {
                    DynamicIcons.Instance.SwipeMenu(false);
                }
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "FingerSphere")
        {
            this.GetComponent<Renderer>().material = defaultMaterial;
        }
    }

    public void CanInteract(bool canInteract)
    {
        this.canInteract = canInteract;
    }

    //public TouchEvent OnTouchCompleted;
    //public TouchEvent OnTouchStarted;
    //public TouchEvent OnTouchUpdated;
    //private bool buttonTouched = false;

    //public Material defaultMaterial;
    //public Material selectMaterial;

    //void IMixedRealityTouchHandler.OnTouchCompleted(HandTrackingInputEventData eventData)
    //{
    //    this.transform.GetComponent<Renderer>().material = defaultMaterial;
    //}

    //void IMixedRealityTouchHandler.OnTouchStarted(HandTrackingInputEventData eventData)
    //{
    //    if (!buttonTouched)
    //    {
    //        this.transform.GetComponent<Renderer>().material = selectMaterial;

    //        if (this.transform.gameObject.tag.ToString() == "SwipePie_Left" || this.transform.gameObject.tag.ToString() == "SwipePie_Middle" ||
    //            this.transform.gameObject.tag.ToString() == "SwipePie_Right")
    //        {
    //            GameObject iconButton = this.transform.GetChild(0).transform.GetChild(0).gameObject;
    //            SpriteRenderer renderer = iconButton.GetComponent<SpriteRenderer>();
    //            string iconName = renderer.sprite.name;
    //            if (iconName != null)
    //            {
    //                SpawnConnection.Instance.ChosenWidget(iconName);
    //            }
    //        }
    //        else if (this.transform.gameObject.tag.ToString() == "UpArrow")
    //        {
    //            DynamicIcons.Instance.SwipeMenu(true);
    //        }
    //        else if (this.transform.gameObject.tag.ToString() == "DownArrow")
    //        {
    //            DynamicIcons.Instance.SwipeMenu(false);
    //        }


    //        buttonTouched = true;
    //        StartCoroutine(DisableButton());
    //    }
    //}

    //void IMixedRealityTouchHandler.OnTouchUpdated(HandTrackingInputEventData eventData)
    //{

    //}

    //private IEnumerator DisableButton()
    //{
    //    yield return new WaitForSeconds(0.75f);
    //    buttonTouched = false;
    //}
}
