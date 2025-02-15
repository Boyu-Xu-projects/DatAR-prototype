using System;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine.Networking;
using System.Collections;
using System.IO;

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
        
        [Serializable]
        public class LiteralField
        {
            public string type;
            public string value;
            public string datatype;
        }

        [System.Serializable]
        public class GeneDiseaseResponse
        {
            public LiteralField gene;
            public LiteralField disease;
            public LiteralField count;
        }

        [System.Serializable]
        public class GeneDiseaseResponseWrapper
        {
            public GeneDiseaseResponse[] array;
        }

        [System.Serializable]
        public class BrainRegionEntry
        {
            public LiteralField gene;
            public LiteralField brainRegion;
            public LiteralField count;
        }

        [System.Serializable]
        public class BrainRegionResponseWrapper
        {
            public BrainRegionEntry[] array;
        }

        [System.Serializable]
        public class GeneBrainRegionResponse
        {
            public LiteralField gene;
            public LiteralField brainRegion;
            public LiteralField count;
        }

        [System.Serializable]
        public class GeneBrainRegionResponseWrapper
        {
            public GeneBrainRegionResponse[] array;
        }

        [System.Serializable]
        public class DiseaseEntry
        {
            public LiteralField gene;
            public LiteralField disease;
            public LiteralField count;
        }

        [System.Serializable]
        public class DiseaseResponseWrapper
        {
            public DiseaseEntry[] array;
        }

        //public behaviorsubject<querystate> isloading { get; }
        //public string errormessage { get; private set; }

        private readonly IndirectQueryHelper _helper = new IndirectQueryHelper();
        
        [SerializeField] private DataflowOutlet dataSender;

        private GameObject _services;
        [SerializeField] private Receptacle classReceptacle;

        [SerializeField] private Receptacle conceptReceptacle;
        [SerializeField] private Receptacle geneReceptacle;
        [SerializeField] private Receptacle proteinReceptacle;

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
            proteinReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));


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

        private IEnumerator FetchDataLbdRegion(string geneId, string diseaseId, string geneDiseaseUrl, string geneBrainregionsUrl)
        {
            UnityWebRequest request = UnityWebRequest.Get(geneDiseaseUrl);
            request.SetRequestHeader("Accept", "application/json");
            
            // todo delete after cwi renew SSL certificate
            request.certificateHandler = new BypassCertificate();
            
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                UnityEngine.Debug.LogError("Error: " + request.error);
            }
            else
            {
                string bindings = _helper.GetBindingsFromResponse(request.downloadHandler.text);
                GeneDiseaseResponseWrapper responseWrapper = JsonUtility.FromJson<GeneDiseaseResponseWrapper>($"{{\"array\":{bindings}}}");
                
                string res = request.downloadHandler.text;
                string path = System.Environment.GetFolderPath(System.Environment.SpecialFolder.Desktop);
                string fileName1 = "MyTextFile1.txt";
                string filePath1 = Path.Combine(path, fileName1);
                File.WriteAllText(filePath1, res);

                
                if (responseWrapper.array != null && responseWrapper.array.Length > 0)
                {
                    string geneDiseaseCount = responseWrapper.array[0].count.value;

                    UnityWebRequest requestBrainRegions = UnityWebRequest.Get(geneBrainregionsUrl);
                    requestBrainRegions.SetRequestHeader("Accept", "application/json");
                    requestBrainRegions.certificateHandler = new BypassCertificate();


                    yield return requestBrainRegions.SendWebRequest();

                    if (requestBrainRegions.result == UnityWebRequest.Result.ConnectionError || requestBrainRegions.result == UnityWebRequest.Result.ProtocolError)
                    {
                        UnityEngine.Debug.LogError("Error: " + requestBrainRegions.error);
                    }
                    else
                    {
                        UnityEngine.Debug.Log("Received: " + requestBrainRegions.downloadHandler.text);
                        
                        string jsonResponse = requestBrainRegions.downloadHandler.text;
                        string desktopPath = System.Environment.GetFolderPath(System.Environment.SpecialFolder.Desktop);
                        string fileName = "MyTextFile.txt";
                        string filePath = Path.Combine(desktopPath, fileName);
                        File.WriteAllText(filePath, jsonResponse);
                        
                        string brainRegionsBindings = _helper.GetBindingsFromResponse(requestBrainRegions.downloadHandler.text);
                        BrainRegionResponseWrapper brainRegionsWrapper = JsonUtility.FromJson<BrainRegionResponseWrapper>($"{{\"array\":{brainRegionsBindings}}}");
                        List<CooccurrenceResource> cooccurrences = new List<CooccurrenceResource>();

                        // Add indirect gene range cooccurrences
                        foreach (var entry in brainRegionsWrapper.array)
                        {
                            CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                new List<string> { "Brain Region" },
                                Convert.ToDouble(entry.count.value),
                                new DynamicResource(entry.brainRegion.value, new List<string> { "Brain Region" }),
                                0.0, // Placeholder for other metrics, if needed
                                0.0, // Placeholder for other metrics, if needed
                                DatAR.DataModels.Misc.FilterSelectionStateType.IndirectGeneRange
                            );
                            cooccurrences.Add(cooccurrence);
                        }

                        // Add backup cooccurrences
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
        }

        private IEnumerator FetchDataLbdDisease(string geneId, string brainRegionId, string BrainRegionGeneUrl, string geneDiseasesUrl)
        {

            UnityWebRequest request = UnityWebRequest.Get(BrainRegionGeneUrl);
            request.SetRequestHeader("Accept", "application/json");

            // todo delete after cwi renew SSL certificate
            request.certificateHandler = new BypassCertificate();
            
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                UnityEngine.Debug.LogError("Error: " + request.error);
            }
            else
            {
                string bindings = _helper.GetBindingsFromResponse(request.downloadHandler.text);
                GeneDiseaseResponseWrapper responseWrapper = JsonUtility.FromJson<GeneDiseaseResponseWrapper>($"{{\"array\":{bindings}}}");

                if (responseWrapper.array != null && responseWrapper.array.Length > 0)
                {
                    string geneBrainRegionCount = responseWrapper.array[0].count.value;
                    //UnityEngine.Debug.Log("Count: " + geneBrainRegionCount);


                    UnityWebRequest requestDiseases = UnityWebRequest.Get(geneDiseasesUrl);
                    requestDiseases.SetRequestHeader("Accept", "application/json");
                    requestDiseases.certificateHandler = new BypassCertificate();

                    yield return requestDiseases.SendWebRequest();

                    if (requestDiseases.result == UnityWebRequest.Result.ConnectionError || requestDiseases.result == UnityWebRequest.Result.ProtocolError)
                    {
                        UnityEngine.Debug.LogError("Error: " + requestDiseases.error);
                    }
                    else
                    {
                        string diseasesBindings = _helper.GetBindingsFromResponse(requestDiseases.downloadHandler.text);
                        DiseaseResponseWrapper diseasesWrapper = JsonUtility.FromJson<DiseaseResponseWrapper>($"{{\"array\":{diseasesBindings}}}");
                        List<CooccurrenceResource> cooccurrences = new List<CooccurrenceResource>();

                        foreach (var entry in diseasesWrapper.array)
                        {
                            CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                new List<string> { "Disease" }, // Assuming "Brain Region" is the class type
                                Convert.ToDouble(entry.count.value),
                                new DynamicResource(entry.disease.value, new List<string> { "Disease" }),
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


        IEnumerator GetDataFromEndpoint()
        {

            if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:region")
            {
                string geneId = geneReceptacle.SlottedResourceContainer.Resource.Id;
                
                string diseaseId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string diseaseLabel = conceptReceptacle.SlottedResourceContainer.Resource.Label;
                diseaseLabel = diseaseLabel.Replace("'", "\\'");
                
                // changed to label - differ from original diseaseId setup
                string geneDiseaseUrl = _helper.GetIndirectRelationsBasedOnASpecificGeneURL(geneId, diseaseLabel);
                string geneBrainregionsUrl = _helper.GetBrainRegionSpecificDiseasesURL(geneId);

               if (geneReceptacle.SlottedResourceContainer.Resource.Id != null)
                {
                    yield return StartCoroutine(FetchDataLbdRegion(geneId, diseaseId, geneDiseaseUrl, geneBrainregionsUrl));
                    yield break;
                }
            } else if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:disease")
            {
                string geneId = geneReceptacle.SlottedResourceContainer.Resource.Id;
                string brainRegionId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string BrainRegionGeneUrl = _helper.GetBrainRegionSpecificGeneURL(brainRegionId, geneId);
                string geneDiseasesUrl = _helper.GetDiseasesGeneCountURL(geneId);

                if (geneReceptacle.SlottedResourceContainer.Resource.Id != null)
                {
                    yield return StartCoroutine(FetchDataLbdDisease(geneId, brainRegionId, BrainRegionGeneUrl, geneDiseasesUrl));
                    yield break;
                }
            }
            yield break;

        }
    }
}