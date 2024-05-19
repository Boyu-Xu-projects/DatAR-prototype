using System;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine.Networking;
using System.Collections;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class GeneIndirectExtractor : MonoBehaviour
    {
        [System.Serializable]
        public class BrainRegionPassable : Passable
        {
            public List<string> BrainRegions { get; set; }

            public BrainRegionPassable(List<string> brainRegions)
            {
                BrainRegions = brainRegions;
            }
        }

        [System.Serializable]
        public class GeneDiseaseResponse
        {
            public string gene;
            public string disease;
            public string count; // Since count is a string in the JSON, it's declared as a string here
        }

        [System.Serializable]
        public class GeneDiseaseResponseWrapper
        {
            public GeneDiseaseResponse[] array;
        }

        [System.Serializable]
        public class BrainRegionEntry
        {
            public string gene;
            public string brainRegion;
            public string count;
        }

        [System.Serializable]
        public class BrainRegionResponseWrapper
        {
            public BrainRegionEntry[] array;
        }

        [System.Serializable]
        public class GeneBrainRegionResponse
        {
            public string gene;
            public string brainRegion;
            public string count; // Since count is a string in the JSON, it's declared as a string here
        }

        [System.Serializable]
        public class GeneBrainRegionResponseWrapper
        {
            public GeneBrainRegionResponse[] array;
        }

        [System.Serializable]
        public class DiseaseEntry
        {
            public string gene;
            public string disease;
            public string count;
        }

        [System.Serializable]
        public class DiseaseResponseWrapper
        {
            public DiseaseEntry[] array;
        }

        //public behaviorsubject<querystate> isloading { get; }
        //public string errormessage { get; private set; }

        [SerializeField] private DataflowOutlet dataSender;

        private GameObject _services;
        [SerializeField] private Receptacle classReceptacle;

        [SerializeField] private Receptacle conceptReceptacle;
        [SerializeField] private Receptacle geneReceptacle;

        //private QueryCooccurrences()
        //{
        //    IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        //}

        private void Awake()
        {
            //_services = GameObject.Find("Services");

            conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));
            classReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));
            geneReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));



        }

        public void RetrieveCooccurrences()
        {
            //IsLoading.OnNext(QueryState.IsEmpty);
            if (conceptReceptacle.SlottedResourceContainer == null
                  || classReceptacle.SlottedResourceContainer == null
                  || geneReceptacle.SlottedResourceContainer == null)
            {
                UnityEngine.Debug.LogWarning("One or more receptacles are empty.");
                return;
            }

            //UnityEngine.Debug.Log("Class: " + classReceptacle.SlottedResourceContainer.Resource.Id);
            //UnityEngine.Debug.Log("Concept: " + conceptReceptacle.SlottedResourceContainer.Resource.Id);
            //UnityEngine.Debug.Log("Gene: " + geneReceptacle.SlottedResourceContainer.Resource.Id);

            //IsLoading.OnNext(QueryState.IsLoading);

            StartCoroutine(GetDataFromEndpoint());

        }

        IEnumerator GetDataFromEndpoint()
        {

            if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:region")
            {
                string geneId = geneReceptacle.SlottedResourceContainer.Resource.Id;
                string diseaseId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                //string url = $"https://api.krr.triply.cc/queries/BrainScienceKG/Indirect-relations-based-on-a-specific-G/2/run?gene={geneId}&disease={diseaseId}";
                string geneDiseaseUrl = "https://api.krr.triply.cc/queries/BrainScienceKG/Indirect-relations-based-on-a-specific-G/2/run?gene=Heterozygote&disease=Functional+disorder";
                UnityWebRequest request = UnityWebRequest.Get(geneDiseaseUrl);
                request.SetRequestHeader("Accept", "application/json");

                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
                {
                    UnityEngine.Debug.LogError("Error: " + request.error);
                }
                else
                {
                    //UnityEngine.Debug.Log("Received: " + request.downloadHandler.text);
                    GeneDiseaseResponseWrapper responseWrapper = JsonUtility.FromJson<GeneDiseaseResponseWrapper>($"{{\"array\":{request.downloadHandler.text}}}");
                    if (responseWrapper.array != null && responseWrapper.array.Length > 0)
                    {
                        string geneDiseaseCount = responseWrapper.array[0].count;
                        //UnityEngine.Debug.Log("Count: " + geneDiseaseCount);
                        //string geneBrainregionsUrl = "https://api.krr.triply.cc/queries/BrainScienceKG/Brain-Regions---Specific-Diseases---Coun/3/run?gene={geneId}";
                        string geneBrainregionsUrl = "https://api.krr.triply.cc/queries/BrainScienceKG/Brain-Regions---Specific-Diseases---Coun/3/run?gene=Heterozygote";

                        UnityWebRequest requestBrainRegions = UnityWebRequest.Get(geneBrainregionsUrl);
                        requestBrainRegions.SetRequestHeader("Accept", "application/json");

                        yield return requestBrainRegions.SendWebRequest();

                        if (requestBrainRegions.result == UnityWebRequest.Result.ConnectionError || requestBrainRegions.result == UnityWebRequest.Result.ProtocolError)
                        {
                            UnityEngine.Debug.LogError("Error: " + requestBrainRegions.error);
                        }
                        else
                        {
                            //UnityEngine.Debug.Log("Received: " + requestBrainRegions.downloadHandler.text);
                            BrainRegionResponseWrapper brainRegionsWrapper = JsonUtility.FromJson<BrainRegionResponseWrapper>($"{{\"array\":{requestBrainRegions.downloadHandler.text}}}");
                            List<CooccurrenceResource> cooccurrences = new List<CooccurrenceResource>();
                            foreach (var entry in brainRegionsWrapper.array)
                            {
                                CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                    new List<string> { "Brain Region" }, // Assuming "Brain Region" is the class type
                                    Convert.ToDouble(entry.count),
                                    new DynamicResource(entry.brainRegion, new List<string> { "Brain Region" }),
                                    0.0, // Placeholder for other metrics, if needed
                                    0.0, // Placeholder for other metrics, if needed
                                    DatAR.DataModels.Misc.FilterSelectionStateType.IndirectGeneRange
                                );
                                cooccurrences.Add(cooccurrence);
                            }

                            List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();
                            string dataSourceBD = "brainregion-disease(29-4-22)";
                            string concept = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                            string className = classReceptacle.SlottedResourceContainer.Resource.Id;
                            string conceptBD = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                            string classNameBD = classReceptacle.SlottedResourceContainer.Resource.Id;

                            List<string> conceptTypes = new List<string>();
                            List<string> classTypes = new List<string>();
                            string classTypeBD = "Brain Region";
                            string conceptTypeBD = "Brain Disease";
                            string matchTermBD = "\"disease\"";
                            string searchTermBD = "\"brainregion\"";

                            if (className == "lbd:region")
                            {
                                classTypeBD = "Brain Disease";
                                conceptTypeBD = "Brain Region";
                                matchTermBD = "\"brainregion\"";
                                searchTermBD = "\"disease\"";
                            }

                            List<Dictionary<string, object>> dataBD = CSVReader.Read(dataSourceBD);

                            List<string> conceptTypesBD = new List<string> { conceptTypeBD };
                            List<string> classTypesBD = new List<string> { classTypeBD };

                            for (var i = 0; i < dataBD.Count; i++)
                            {
                                if (concept == dataBD[i][searchTermBD].ToString())
                                {
                                    DynamicResource resource = new DynamicResource(dataBD[i][matchTermBD].ToString(), classTypesBD);
                                    CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                        classTypesBD,
                                        Convert.ToDouble(dataBD[i]["\"count\""]),
                                        resource,
                                        0.0, // No local data
                                        0.0, // No local data
                                        DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                                    );
                                    cooccurrence.Label = dataBD[i][matchTermBD].ToString();
                                    backUp.Add(cooccurrence);
                                }
                            }

                            cooccurrences.AddRange(backUp);

                            var conceptResource = new DynamicResource(geneId, new List<string> { "Gene" });
                            var classResource = new DynamicResource(diseaseId, new List<string> { "Disease" });
                            CooccurrenceListPassable newFormat = new CooccurrenceListPassable(conceptResource, classResource, cooccurrences);
                            var passable = new Passable<CooccurrenceListPassable>();
                            passable.data = newFormat;

                            dataSender.Send(passable);
                        }
                    }
                    else
                    {
                        UnityEngine.Debug.Log("No data found in the JSON response.");
                    }
                }
            } else if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:disease")
            {
                string geneId = geneReceptacle.SlottedResourceContainer.Resource.Id;
                string brainRegionId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string BrainRegionGeneUrl = "https://api.krr.triply.cc/queries/BrainScienceKG/Brain-region---Specific-Gene---Count/1/run?brainRegion=Cerebral+cortex&gene=Heterozygote";

                UnityWebRequest request = UnityWebRequest.Get(BrainRegionGeneUrl);
                request.SetRequestHeader("Accept", "application/json");

                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
                {
                    UnityEngine.Debug.LogError("Error: " + request.error);
                }
                else
                {
                    GeneBrainRegionResponseWrapper responseWrapper = JsonUtility.FromJson<GeneBrainRegionResponseWrapper>($"{{\"array\":{request.downloadHandler.text}}}");

                    if (responseWrapper.array != null && responseWrapper.array.Length > 0)
                    {
                        string geneBrainRegionCount = responseWrapper.array[0].count;
                        //UnityEngine.Debug.Log("Count: " + geneBrainRegionCount);
                        string geneDiseasesUrl = "https://api.krr.triply.cc/queries/BrainScienceKG/Diseases---Gene-Count/run?gene=Heterozygote";

                        UnityWebRequest requestDiseases = UnityWebRequest.Get(geneDiseasesUrl);
                        requestDiseases.SetRequestHeader("Accept", "application/json");

                        yield return requestDiseases.SendWebRequest();

                        if (requestDiseases.result == UnityWebRequest.Result.ConnectionError || requestDiseases.result == UnityWebRequest.Result.ProtocolError)
                        {
                            UnityEngine.Debug.LogError("Error: " + requestDiseases.error);
                        }
                        else
                        {
                            //UnityEngine.Debug.Log("Received: " + requestDiseases.downloadHandler.text);
                            DiseaseResponseWrapper diseasesWrapper = JsonUtility.FromJson<DiseaseResponseWrapper>($"{{\"array\":{requestDiseases.downloadHandler.text}}}");
                            List<CooccurrenceResource> cooccurrences = new List<CooccurrenceResource>();

                            foreach (var entry in diseasesWrapper.array)
                            {
                                CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                    new List<string> { "Disease" }, // Assuming "Brain Region" is the class type
                                    Convert.ToDouble(entry.count),
                                    new DynamicResource(entry.disease, new List<string> { "Disease" }),
                                    0.0, // Placeholder for other metrics, if needed
                                    0.0, // Placeholder for other metrics, if needed
                                    DatAR.DataModels.Misc.FilterSelectionStateType.IndirectGeneRange
                                );
                                cooccurrences.Add(cooccurrence);
                            }

                            List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();
                            string dataSourceBD = "brainregion-disease(29-4-22)";
                            string concept = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                            string className = classReceptacle.SlottedResourceContainer.Resource.Id;
                            string conceptBD = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                            string classNameBD = classReceptacle.SlottedResourceContainer.Resource.Id;

                            List<string> conceptTypes = new List<string>();
                            List<string> classTypes = new List<string>();
                            string classTypeBD = "Brain Region";
                            string conceptTypeBD = "Brain Disease";
                            string matchTermBD = "\"disease\"";
                            string searchTermBD = "\"brainregion\"";

                            if (className == "lbd:region")
                            {
                                classTypeBD = "Brain Disease";
                                conceptTypeBD = "Brain Region";
                                matchTermBD = "\"brainregion\"";
                                searchTermBD = "\"disease\"";
                            }

                            List<Dictionary<string, object>> dataBD = CSVReader.Read(dataSourceBD);

                            List<string> conceptTypesBD = new List<string> { conceptTypeBD };
                            List<string> classTypesBD = new List<string> { classTypeBD };

                            for (var i = 0; i < dataBD.Count; i++)
                            {
                                if (concept == dataBD[i][searchTermBD].ToString())
                                {
                                    DynamicResource resource = new DynamicResource(dataBD[i][matchTermBD].ToString(), classTypesBD);
                                    CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                        classTypesBD,
                                        Convert.ToDouble(dataBD[i]["\"count\""]),
                                        resource,
                                        0.0, // No local data
                                        0.0, // No local data
                                        DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                                    );
                                    cooccurrence.Label = dataBD[i][matchTermBD].ToString();
                                    backUp.Add(cooccurrence);
                                }
                            }

                            cooccurrences.AddRange(backUp);

                            var conceptResource = new DynamicResource(geneId, new List<string> { "Gene" });
                            var classResource = new DynamicResource(brainRegionId, new List<string> { "Brain Region" });
                            CooccurrenceListPassable newFormat = new CooccurrenceListPassable(conceptResource, classResource, cooccurrences);
                            var passable = new Passable<CooccurrenceListPassable>();
                            passable.data = newFormat;

                            dataSender.Send(passable);
                        }
                    }

                }
            }

        }
    }
}