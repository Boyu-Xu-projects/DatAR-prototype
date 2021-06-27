using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// This fix is necessary due since <see cref="Microsoft.MixedReality.Toolkit.Utilities.MeshOutline" /> does not respect dynamically assigned materials. 
/// The materials in the topic model spheres are dynamically assigned.
public class OutlineMaterialFix : MonoBehaviour
{
    private Material[] oldMaterials;

    public void StorePreviousMaterials()
    {
        oldMaterials = GetComponent<MeshRenderer>().materials;
    }

    public void RestorePreviousMaterials()
    {
        GetComponent<MeshRenderer>().materials = oldMaterials;
    }
}
