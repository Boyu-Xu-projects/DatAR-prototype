using System.Collections;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using UnityEngine.Serialization;

namespace DatAR.Widgets.QueryConceptsOfClass
{
    public class QueryConceptsOfClass : MonoBehaviour
    {
        private SparqlService _sparqlService;
        [SerializeField] private ResourceSphereManufacturer manufacturer;
        [SerializeField] private Receptacle receptacle;

        [SerializeField] private GameObject pool;

        private void Awake()
        {
            var services = GameObject.Find("Services");
            if (!services)
            {
                Debug.LogError("The `Services` Prefab was not found in the scene. "
                               + "This GameObject is required for this script to function.");
                gameObject.SetActive(false);
                return;
            }
        
            _sparqlService = services.GetComponent<SparqlService>();
        }

        private void Start()
        {
            receptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId =>
            {
                // We record batch id to ensure the enumerator can be stopped if it has changed.

                // Reset items in container
                for (int i = pool.transform.childCount - 1; i >= 0; --i) {
                    // Add wait period to avoid completely locking the process
                    // For large collections this still causes lower FPS.
                    // TODO: resolve performance issues with large amount of resources, e.g., by pooling / ECS.
                    Destroy(pool.transform.GetChild(i).gameObject, i * .01f);
                }
            
                if (receptacle.SlottedResourceContainer == null || receptacle.SlottedResourceContainer.Resource == null)
                {
                    return;
                }

                RetrieveAllOfClass(receptacle.SlottedResourceContainer.Resource, currentBatchId);
            });
        }

        async void RetrieveAllOfClass(IResource classItem, int currentBatchId)
        {
            if (currentBatchId != receptacle.slottedResourceContainerHasChanged.Value)
            {
                return;
            }
        
            // TODO: handle empty case, and add progress indicator
            var concepts = await _sparqlService.GetAllConceptsOfClass(classItem.Id);

            _ = StartCoroutine(SpawnConcept(concepts, currentBatchId));
        }

        // TODO: move to ResourceSphereManufacturer class
        private IEnumerator SpawnConcept(ConceptListPassable concepts, int currentBatchId)
        {
            if (currentBatchId != receptacle.slottedResourceContainerHasChanged.Value)
            {
                yield break;
            }

            var offsetLocation = new Vector3(0, 0, 0);
            foreach (var concept in concepts.Resources)
            {
                if (currentBatchId != receptacle.slottedResourceContainerHasChanged.Value)
                {
                    yield break;
                }

                manufacturer.Spawn(concept, offsetLocation);
                offsetLocation.y -= manufacturer.pointScale * 1.25f;
                if (offsetLocation.y < -5)
                {
                    offsetLocation.y = 0;
                    offsetLocation.x -= manufacturer.pointScale * 4f;
                }
                yield return new WaitForEndOfFrame();
            }
        }
    }
}