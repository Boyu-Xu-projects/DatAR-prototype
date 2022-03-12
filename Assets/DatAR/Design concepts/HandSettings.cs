using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandSettings : MonoBehaviour
{
    #region SINGLETON PATTERN
    private static HandSettings _instance;
    public static HandSettings Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<HandSettings>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("HandSettings");
                    _instance = container.AddComponent<HandSettings>();
                }
            }

            return _instance;
        }
    }
    #endregion

    public Handedness dominantHand = Handedness.Right;
    public Handedness nonDominantHand = Handedness.Left;
}
