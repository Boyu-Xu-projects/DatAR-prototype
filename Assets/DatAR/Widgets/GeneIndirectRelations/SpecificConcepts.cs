using System;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using System.Collections.Generic;
using System.IO;

namespace DatAR.Widgets.QueryCooccurrences
{

    public class SpecificConcepts : MonoBehaviour, IQueryState
    {
        [SerializeField] private Receptacle classReceptacle;
        [SerializeField] private Receptacle conceptReceptacle;
        [SerializeField] private ResourceSphereManufacturer manufacturer;
        [SerializeField] private GameObject pool;
        private readonly IndirectQueryHelper _helper = new IndirectQueryHelper();
        private List<string> genesList = new List<string>();
        private List<DynamicResource> backUp = new List<DynamicResource>();

        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }

        [SerializeField] private DataflowOutlet dataSender;
        private GameObject _services;

        private SpecificConcepts ()
        {
            IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        }

        private void Awake()
        {
            // Ensure that the necessary components are assigned in the Unity Inspector.
            if (conceptReceptacle == null || classReceptacle == null || manufacturer == null)
            {
                Debug.LogError("Required components are not assigned in the inspector.");
                return;
            }

            _services = GameObject.Find("Services");

            if (conceptReceptacle != null && conceptReceptacle.slottedResourceContainerHasChanged != null)
            {
                conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrences());
            }

            if (classReceptacle != null && classReceptacle.slottedResourceContainerHasChanged != null)
            {
                classReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrences());
            }
        }

        public async void RetrieveCooccurrences()
        {
            IsLoading.OnNext(QueryState.IsEmpty);

            // Null checks for resources to ensure they are properly initialized.
            if (conceptReceptacle.SlottedResourceContainer == null
                || conceptReceptacle.SlottedResourceContainer.Resource == null
                || classReceptacle.SlottedResourceContainer == null
                || classReceptacle.SlottedResourceContainer.Resource == null)
            {
                Debug.LogError("Resource containers or resources are null.");
                return;
            }

            IsLoading.OnNext(QueryState.IsLoading);

            try
            {
                List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();

                string dataSourceBD = "gene-disease-0219";
                string concept = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string className = classReceptacle.SlottedResourceContainer.Resource.Id;

                string conceptTypeBD = "Gene";
                string classTypeBD = "Disease";
                string matchTermBD = "\"gene\"";
                string searchTermBD = "\"disease\"";

                if (className == "lbd:disease")
                {
                    classTypeBD = "Gene";
                    conceptTypeBD = "Disease";
                    matchTermBD = "\"disease\"";
                    searchTermBD = "\"gene\"";
                }

                // Read local CSV data
                List<Dictionary<string, object>> dataBD = null;
                try
                {
                    dataBD = CSVReader.Read(dataSourceBD);
                    if (dataBD == null || dataBD.Count == 0)
                    {
                        Debug.LogError("No data found in the CSV file.");
                        return;
                    }
                }
                catch (Exception ex)
                {
                    Debug.LogError($"Error reading CSV file: {ex.Message}");
                    return;
                }

                for (var i = 0; i < dataBD.Count; i++)
                {
                    if (concept == dataBD[i][searchTermBD]?.ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataBD[i][matchTermBD]?.ToString(),
                            new List<string> { classTypeBD });

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            new List<string> { classTypeBD },
                            Convert.ToDouble(dataBD[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                        );

                        cooccurrence.Label = dataBD[i][matchTermBD]?.ToString();
                        backUp.Add(cooccurrence);
                    }
                }

                DynamicResource conceptResource = new DynamicResource(conceptReceptacle.SlottedResourceContainer.Resource.Id, new List<string> { conceptTypeBD });
                DynamicResource classResource = new DynamicResource(classReceptacle.SlottedResourceContainer.Resource.Id, new List<string> { classTypeBD });
                CooccurrenceListPassable newFormat = new CooccurrenceListPassable(conceptResource, classResource, backUp);

                var passable = new Passable<CooccurrenceListPassable>
                {
                    data = newFormat
                };

                if (dataSender != null)
                {
                    dataSender.Send(passable);
                }
                else
                {
                    Debug.LogError("Data sender is not initialized.");
                }

                // Generate spheres for the local data
                SpawnCooccurrenceSpheres(backUp);

                // StartCoroutine(SpawnCooccurrenceSpheres(backUp));
            }
            catch (Exception e)
            {
                UnityEngine.Debug.LogError($"Error retrieving co-occurrences: {e.Message}");
                IsLoading.OnNext(QueryState.HasError);
            }
        }

        private void SpawnCooccurrenceSpheres(List<CooccurrenceResource> resources)
        {
            if (resources == null || resources.Count == 0)
            {
                if (manufacturer != null)
                {
                    //  manufacturer.Clear();
                }
                Debug.Log("No related genes to spawn spheres.");
                return;
            }

            if (manufacturer == null)
            {
                Debug.LogError("Manufacturer is not initialized.");
                return;
            }

            manufacturer.Clear();
            var offsetLocation = new Vector3(-1, -2, 0);
            float pointScale = manufacturer.pointScale * 1.25f;
            float resetDepth = -5f;
            float columnSpacing = manufacturer.pointScale * 4f;

            foreach (var resource in resources)
            {
                manufacturer.Spawn(resource, offsetLocation);
                offsetLocation.y -= pointScale;
                if (offsetLocation.y < resetDepth)
                {
                    offsetLocation.y = 0;
                    offsetLocation.x -= columnSpacing;
                }
            }
        }
    }

}
