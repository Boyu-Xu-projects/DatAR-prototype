using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class ConceptRelatedGenes : MonoBehaviour
    {
        [System.Serializable]
        public class SPARQLResponse
        {
            public Head head;
            public Results results;
        }

        [System.Serializable]
        public class Head
        {
            public string[] vars;
        }

        [System.Serializable]
        public class Results
        {
            public Binding[] bindings;
        }

        [System.Serializable]
        public class Binding
        {
            public ValueField gene;
            public ValueField disease;
            public ValueField count;
        }

        [System.Serializable]
        public class ValueField
        {
            public string type;
            public string value;
        }

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
        [SerializeField] private TMP_Text noRelatedGenesText;

        private List<DynamicResource> backUp = new List<DynamicResource>();

        private void Awake()
        {
            conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));
            classReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences(), e => UnityEngine.Debug.LogError(e));
        }

        public void RetrieveCooccurrences()
        {
            if (conceptReceptacle.SlottedResourceContainer == null || classReceptacle.SlottedResourceContainer == null)
            {
                UnityEngine.Debug.LogWarning("One or more receptacles are empty.");
                return;
            }

            StartCoroutine(GetDataFromEndpoint());
        }

        IEnumerator GetDataFromEndpoint()
        {
            string sparqlEndpoint = "https://kgbs-sparql.project.cwi.nl/repositories/KnowledgeGraph-BrainScience";

            if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:disease")
            {
                string brainRegionId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string brainRegion = conceptReceptacle.SlottedResourceContainer.Resource.Label;
                brainRegion = brainRegion.Replace("'", "\\'");
                string sparqlQuery = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
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

                yield return SendSparqlRequest(sparqlEndpoint, sparqlQuery);
            }
            else if (classReceptacle.SlottedResourceContainer.Resource.Id == "lbd:region")
            {
                string diseaseId = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string disease = conceptReceptacle.SlottedResourceContainer.Resource.Label;
                disease = disease.Replace("'", "\\'");
                string sparqlQuery = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
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
    FILTER(REGEX(?disease, '{disease}', 'i'))
    ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?disease
ORDER BY DESC(?count)
LIMIT 10000";

                yield return SendSparqlRequest(sparqlEndpoint, sparqlQuery);
            }
        }

        IEnumerator SendSparqlRequest(string endpoint, string query)
        {
            WWWForm form = new WWWForm();
            form.AddField("query", query);

            UnityWebRequest request = UnityWebRequest.Post(endpoint, form);

            // Set headers
            request.SetRequestHeader("Accept", "application/sparql-results+json");
            request.SetRequestHeader("Authorization", "Basic YWRtaW46MlBlQWFEYUVhREtGaEFM");

            UnityEngine.Debug.Log("Sending SPARQL request...");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                UnityEngine.Debug.LogError("Error: " + request.error);
            }
            else
            {
                string jsonResponse = request.downloadHandler.text;
                UnityEngine.Debug.Log("Response: " + jsonResponse);
                ProcessResponse(jsonResponse);
            }
        }

        void ProcessResponse(string jsonResponse)
        {
            UnityEngine.Debug.Log("Raw JSON Response: " + jsonResponse);
           try
            {
                // Parse the JSON manually to handle the exact structure
                var parsedData = JsonUtility.FromJson<SPARQLResponse>(jsonResponse);

                if (parsedData.results == null || parsedData.results.bindings == null || parsedData.results.bindings.Length == 0)
                {
                    UnityEngine.Debug.LogWarning("No genes found in the response.");
                    manufacturer.Clear();
                    noRelatedGenesText.text = "No related genes.";
                    return;
                }

                // Clear backup and populate with new data
                List<string> type = new List<string> { "Gene" };
                backUp.Clear();

                foreach (var binding in parsedData.results.bindings)
                {
                    string gene = binding.gene.value;
                    DynamicResource resource = new DynamicResource(gene, type);
                    backUp.Add(resource);
                }

                // Handle display of related genes
                noRelatedGenesText.text = ""; // Clear any previous error messages
                DisplayGenes();
            }
            catch (Exception ex)
            {
                UnityEngine.Debug.LogError("Failed to parse JSON response: " + ex.Message);
            }
        }

        void DisplayGenes()
        {
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
