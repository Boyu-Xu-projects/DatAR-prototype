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
using Newtonsoft.Json.Linq;
using UnityEngine.UI;
using TMPro;

namespace DatAR.Widgets.QueryCooccurrences
{
    // ! temporary code, insecure, delete when cwi server update SSL certificate
    public class BypassCertificate : CertificateHandler
    {
        protected override bool ValidateCertificate(byte[] certificateData)
        {
            return true;
        }
    }
    
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
        public class LiteralField
        {
            public string type;
            public string value;
            public string datatype;
        }

        [Serializable]
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
                string brainRegion = conceptReceptacle.SlottedResourceContainer.Resource.Label;
                brainRegion = brainRegion.Replace("'", "\\'");
                string query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
PREFIX sct: <http://wasp.cs.vu.nl/sct/sct#>
PREFIX drugbank: <https://www.drugbank.ca/drugs/>
PREFIX ztonekg: <http://www.ztonebv.nl/KG#>
PREFIX pubmed: <http://www.ncbi.nlm.nih.gov/pubmed/>
PREFIX rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#>
PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
PREFIX umls: <http://linkedlifedata.com/resource/umls/id/>
SELECT ?gene ?disease (COUNT(DISTINCT ?text) AS ?count)
WHERE {{
    ?id1 sct:hasTUI sct:T028.
    ?t1s1 ztonekg:SenseURL ?id1.
    ?id1 sct:hasEnglishLabel ?gene.
    ?t1 ztonekg:hasSense ?t1s1.
    ?s7 ztonekg:hasSenses ?t1.
    ?s ztonekg:hasTerm ?s7.
    ?s1 ztonekg:hasAnnotation ?s;
        ztonekg:hasSource 'Abstract';
        ztonekg:hasAnnotation ?sb.
    ?sb ztonekg:hasTerm ?s7b.
    ?s7b ztonekg:hasSenses ?t1b.
    ?t1b ztonekg:hasSense ?t1s1b.
    ?t1s1b ztonekg:SenseURL ?id2.
    FILTER(?id2 != umls:C0012634)
    ?id2 sct:hasTUI sct:T047;
        sct:hasEnglishLabel ?disease.
    FILTER(REGEX(?disease, '{brainRegion}', 'i'))
    ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?disease
ORDER BY DESC(?count)
LIMIT 10000";
                string escapedQuery = UnityWebRequest.EscapeURL(query);
                string genesRelatedBrainRegionURL = $"https://unity:unity@kgbs-sparql.project.cwi.nl/repositories/KnowledgeGraph-BrainScience?query={escapedQuery}";
                UnityWebRequest request = UnityWebRequest.Get(genesRelatedBrainRegionURL);
                request.SetRequestHeader("Accept", "application/json");
                request.certificateHandler = new BypassCertificate();

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
                string disease = conceptReceptacle.SlottedResourceContainer.Resource.Label;
                disease = disease.Replace("'", "\\'");
                string query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
PREFIX sct: <http://wasp.cs.vu.nl/sct/sct#>
PREFIX drugbank: <https://www.drugbank.ca/drugs/>
PREFIX ztonekg: <http://www.ztonebv.nl/KG#>
PREFIX pubmed: <http://www.ncbi.nlm.nih.gov/pubmed/>
PREFIX rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#>
PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
PREFIX umls: <http://linkedlifedata.com/resource/umls/id/>
SELECT ?gene ?disease (COUNT(DISTINCT ?text) AS ?count)
WHERE {{
    ?id1 sct:hasTUI sct:T028.
    ?t1s1 ztonekg:SenseURL ?id1.
    ?id1 sct:hasEnglishLabel ?gene.
    ?t1 ztonekg:hasSense ?t1s1.
    ?s7 ztonekg:hasSenses ?t1.
    ?s ztonekg:hasTerm ?s7.
    ?s1 ztonekg:hasAnnotation ?s;
        ztonekg:hasSource 'Abstract';
        ztonekg:hasAnnotation ?sb.
    ?sb ztonekg:hasTerm ?s7b.
    ?s7b ztonekg:hasSenses ?t1b.
    ?t1b ztonekg:hasSense ?t1s1b.
    ?t1s1b ztonekg:SenseURL ?id2.
    FILTER(?id2 != umls:C0012634)
    ?id2 sct:hasTUI sct:T047;
        sct:hasEnglishLabel ?disease.
    FILTER(?disease = '{disease}')
    ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?disease
ORDER BY DESC(?count)
LIMIT 10000";
                string escapedQuery = UnityWebRequest.EscapeURL(query);
                string genesRelatedDiseaseURL = $"https://unity:unity@kgbs-sparql.project.cwi.nl/repositories/KnowledgeGraph-BrainScience?query={escapedQuery}";
                UnityWebRequest request = UnityWebRequest.Get(genesRelatedDiseaseURL);
                request.SetRequestHeader("Accept", "application/json");
                request.certificateHandler = new BypassCertificate();

                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
                {
                    UnityEngine.Debug.LogError("Error: " + request.error);
                }
                else
                {
                    JObject parsedJson = JObject.Parse(request.downloadHandler.text);
                    string bindings = parsedJson["results"]["bindings"].ToString();
                    GeneDiseaseResponseWrapper responseWrapper = JsonUtility.FromJson<GeneDiseaseResponseWrapper>($"{{\"array\":{bindings}}}");

                    // string jsonResponse = request.downloadHandler.text;
                    // string desktopPath = System.Environment.GetFolderPath(System.Environment.SpecialFolder.Desktop);
                    // string fileName = "MyTextFile.txt";
                    // string filePath = Path.Combine(desktopPath, fileName);
                    // File.WriteAllText(filePath, jsonResponse);
                    
                    List<string> type = new List<string> { "Gene" };
                    backUp.Clear();
                    
                    foreach (var geneInfo in responseWrapper.array)
                    {
                        UnityEngine.Debug.Log(geneInfo);
                        DynamicResource resource = new DynamicResource(geneInfo.gene.value, type);
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
