using System;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine.Networking;
using System.Collections;
using UnityEngine.UI;
using TMPro;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class ConceptRelatedGenes : MonoBehaviour
    {
        [Serializable]
        public class GeneBrainRegionResponse
        {
            public string gene;
            public string brainRegion;
            public int count;
        }

        [System.Serializable]
        public class GeneBrainRegionResponseWrapper
        {
            public GeneBrainRegionResponse[] array;
        }

        [Serializable]
        public class GeneDiseaseResponse
        {
            public string gene;
            public string disease;
            public int count;
        }

        [System.Serializable]
        public class GeneDiseaseResponseWrapper
        {
            public GeneDiseaseResponse[] array;
        }

        [SerializeField] private Receptacle classReceptacle;
        [SerializeField] private Receptacle conceptReceptacle;
        [SerializeField] private ResourceSphereManufacturer manufacturer;
        [SerializeField] private GameObject pool;
        [SerializeField] private TMP_Text noRelatedGenesText;

        private List<string> genesList = new List<string>();
        private List<DynamicResource> backUp = new List<DynamicResource>();

        private void Awake()
        {
            conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));
            classReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));

        }

        public void RetrieveCooccurrences()
        {
            //IsLoading.OnNext(QueryState.IsEmpty);
            if (conceptReceptacle.SlottedResourceContainer == null || classReceptacle.SlottedResourceContainer == null)
            {
                UnityEngine.Debug.LogWarning("One or more receptacles are empty.");
                return;
            }

            StartCoroutine(GetDataFromEndpoint());
        }

        IEnumerator GetDataFromEndpoint()
        {

            

            if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:disease")
            {
                
                string brainRegionId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string genesRelatedBrainRegionURL = $"https://api.krr.triply.cc/queries/BrainScienceKG/Genes-Related-with-BrainRegion/run?brainRegion={brainRegionId}";
                UnityWebRequest request = UnityWebRequest.Get(genesRelatedBrainRegionURL);
                request.SetRequestHeader("Accept", "application/json");

                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
                {
                    UnityEngine.Debug.LogError("Error: " + request.error);
                }
                else
                {
                    GeneBrainRegionResponseWrapper responseWrapper = JsonUtility.FromJson<GeneBrainRegionResponseWrapper>($"{{\"array\":{request.downloadHandler.text}}}");
                    List<string> type = new List<string> { "Gene" };
                    backUp.Clear();
                    foreach (var geneInfo in responseWrapper.array)
                    {
                        DynamicResource resource = new DynamicResource(geneInfo.gene, type);
                        backUp.Add(resource);
                    }
                    if (backUp.Count == 0)
                    {
                        manufacturer.Clear();
                        noRelatedGenesText.text = $"No related genes.";
                    }
                    else
                    {
                        noRelatedGenesText.text = ""; // Clear the text if there are related genes

                        manufacturer.Clear();
                        var offsetLocation = new Vector3(-1, -2, 0);
                        float pointScale = manufacturer.pointScale * 1.25f; // Adjust the scaling factor
                        float resetDepth = -5f; // Adjust depth limit if needed
                        float columnSpacing = manufacturer.pointScale * 4f; // Adjust column spacing

                        foreach (var resource in backUp)
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
            
            if(classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:region")
            {
                
                string diseaseId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string genesRelatedDiseaseURL = $"https://api.krr.triply.cc/queries/BrainScienceKG/Genes-Related-with-Disease/1/run?disease={diseaseId}";
                UnityWebRequest request = UnityWebRequest.Get(genesRelatedDiseaseURL);
                request.SetRequestHeader("Accept", "application/json");

                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
                {
                    UnityEngine.Debug.LogError("Error: " + request.error);
                }
                else
                {
                    GeneDiseaseResponseWrapper responseWrapper = JsonUtility.FromJson<GeneDiseaseResponseWrapper>($"{{\"array\":{request.downloadHandler.text}}}");

                    List<string> type = new List<string> { "Gene" };
                    backUp.Clear();
                    foreach (var geneInfo in responseWrapper.array)
                    {
                        UnityEngine.Debug.Log(geneInfo);
                        DynamicResource resource = new DynamicResource(geneInfo.gene, type);
                        backUp.Add(resource);
                    }
                    if (backUp.Count == 0)
                    {
                        manufacturer.Clear();
                        noRelatedGenesText.text = $"No related genes.";
                    }
                    else
                    {
                        noRelatedGenesText.text = ""; // Clear the text if there are related genes


                        manufacturer.Clear();
                        var offsetLocation = new Vector3(-1, -2, 0);
                        float pointScale = manufacturer.pointScale * 1.25f; // Adjust the scaling factor
                        float resetDepth = -5f; // Adjust depth limit if needed
                        float columnSpacing = manufacturer.pointScale * 4f; // Adjust column spacing

                        foreach (var resource in backUp)
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
        }
    }
}
