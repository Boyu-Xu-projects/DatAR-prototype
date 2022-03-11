using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Dwell;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GazeBehaviour : BaseDwellSample
{
    private Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();    
    }

    public override void DwellIntended(IMixedRealityPointer pointer)
    {
        base.DwellIntended(pointer);
        Debug.Log("Hey start iets");
        if (animator != null)
        {
            animator.SetTrigger("StartTrigger");
        }
    }
    public override void DwellCompleted(IMixedRealityPointer pointer)
    {
        base.DwellCompleted(pointer);
        Debug.Log("Hey doe iets");
    }
}
