using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HololensTouch : MonoBehaviour, IMixedRealityTouchHandler
{
    public TouchEvent OnTouchCompleted;
    public TouchEvent OnTouchStarted;
    public TouchEvent OnTouchUpdated;
    private bool buttonTouched = false;

    public Material defaultMaterial;
    public Material selectMaterial;

    void IMixedRealityTouchHandler.OnTouchCompleted(HandTrackingInputEventData eventData)
    {
        Debug.Log(this.transform.gameObject.name.ToString() + " is available");
        this.GetComponent<Renderer>().material = defaultMaterial;
    }

    void IMixedRealityTouchHandler.OnTouchStarted(HandTrackingInputEventData eventData)
    {
        if (!buttonTouched)
        {
            Debug.Log(this.transform.gameObject.name.ToString() + " is touched");
            this.GetComponent<Renderer>().material = selectMaterial;

            if (this.transform.gameObject.tag.ToString() == "PalletIcon")
            {
                GameObject iconButton = this.transform.GetChild(0).gameObject;
                SpriteRenderer renderer = iconButton.GetComponent<SpriteRenderer>();
                string iconName = renderer.sprite.name;
                if (iconName != null)
                {
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
            buttonTouched = true;
            StartCoroutine(DisableButton());
        }
    }

    void IMixedRealityTouchHandler.OnTouchUpdated(HandTrackingInputEventData eventData)
    {

    }

    private IEnumerator DisableButton()
    {
        yield return new WaitForSeconds(0.75f);
        buttonTouched = false;
        Debug.Log(this.transform.gameObject.name.ToString() + " timer is done");
    }
}
