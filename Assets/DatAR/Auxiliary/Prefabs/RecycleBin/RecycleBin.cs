using UnityEngine;

public class RecycleBin : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        //var interactable = other.gameObject.GetComponent<Interactable>();
        //if (interactable && interactable.attachedToHand != null)
        //{
        //    Debug.Log("destroying " + interactable.gameObject.name);
        //    interactable.attachedToHand.DetachObject(interactable.gameObject);
        //    Destroy(interactable.gameObject);
        //}
    }
}