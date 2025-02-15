using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Networking;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class IndirectQueryHelper
    {
        private const string BaseURL = "https://unity:unity@kgbs-sparql.project.cwi.nl/repositories/KnowledgeGraph-BrainScience";

        public string GetGenesRelatedWithBrainRegionURL(string brainRegionLabel)
        {
            // ! for Boyu to check: disease = brainRegion???
            var query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
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
    FILTER(?disease = '{{brainRegion}}')
    ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?disease
ORDER BY DESC(?count)
LIMIT 10000";
            var escapedQuery = UnityWebRequest.EscapeURL(query);
            return $"{BaseURL}?query={escapedQuery}";
        }


        public string GetGenesRelatedWithDiseaseURL(string diseaseLabel)
        {
            var query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
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
    FILTER(?disease = '{diseaseLabel}')
    ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?disease
ORDER BY DESC(?count)
LIMIT 10000";
            var escapedQuery = UnityWebRequest.EscapeURL(query);
            return $"{BaseURL}?query={escapedQuery}";
        }
        

        public string GetBindingsFromResponse(string responseJson)
        {
            
            var parsedJson = JObject.Parse(responseJson);
            var bindings = parsedJson["results"]?["bindings"]?.ToString();
            return bindings;
        }
        
        public string GetIndirectRelationsBasedOnASpecificGeneURL(string geneId, string diseaseLabel)
        {
            var query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
PREFIX sct: <http://wasp.cs.vu.nl/sct/sct#>
PREFIX drugbank: <https://www.drugbank.ca/drugs/>
PREFIX ztonekg: <http://www.ztonebv.nl/KG#>
PREFIX pubmed: <http://www.ncbi.nlm.nih.gov/pubmed/>
PREFIX rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#>
PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
PREFIX umls: <http://linkedlifedata.com/resource/umls/id/>
SELECT ?gene ?disease  (COUNT(DISTINCT ?text) AS ?count) WHERE {{
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
  FILTER(?id2 != '{geneId}')
  ?id2 sct:hasTUI sct:T047;
    sct:hasEnglishLabel ?disease.
  FILTER(?disease = '{diseaseLabel}')
  ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?disease
ORDER BY DESC (?count)
LIMIT 10000";
            var escapedQuery = UnityWebRequest.EscapeURL(query);
            return $"{BaseURL}?query={escapedQuery}";
        }
        
        public string GetBrainRegionSpecificDiseasesURL(string geneId)
        {
            var query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
PREFIX sct: <http://wasp.cs.vu.nl/sct/sct#>
PREFIX drugbank: <https://www.drugbank.ca/drugs/>
PREFIX ztonekg: <http://www.ztonebv.nl/KG#>
PREFIX pubmed: <http://www.ncbi.nlm.nih.gov/pubmed/>
PREFIX rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#>
PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
PREFIX umls: <http://linkedlifedata.com/resource/umls/id/>
SELECT ?gene ?geneID (COUNT(DISTINCT ?text) AS ?count) WHERE {{
  ?id1 sct:hasTUI sct:T023.
  ?t1s1 ztonekg:SenseURL ?id1.
  ?id1 sct:hasEnglishLabel ?brainregion.
  ?t1 ztonekg:hasSense ?t1s1.
  ?s7 ztonekg:hasSenses ?t1.
  ?s ztonekg:hasTerm ?s7.
  ?s1 ztonekg:hasAnnotation ?s;
    ztonekg:hasSource 'Abstract';
    ztonekg:hasAnnotation ?sb.
  ?sb ztonekg:hasTerm ?s7b.
  ?s7b ztonekg:hasSenses ?t1b.
  ?t1b ztonekg:hasSense ?t1s1b.
  ?t1s1b ztonekg:SenseURL ?geneID.
  FILTER(?geneID != '{geneId}')
  ?geneID sct:hasTUI sct:T028;
    sct:hasEnglishLabel ?gene.
  ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?geneID
ORDER BY DESC (?count)
LIMIT 100";
            var escapedQuery = UnityWebRequest.EscapeURL(query);
            return $"{BaseURL}?query={escapedQuery}";
        }
        
        // todo geneId is not used?? I guess there will be problem here
        public string GetBrainRegionSpecificGeneURL(string brainRegionId, string geneId)
        {
            var query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
PREFIX sct: <http://wasp.cs.vu.nl/sct/sct#>
PREFIX drugbank: <https://www.drugbank.ca/drugs/>
PREFIX ztonekg: <http://www.ztonebv.nl/KG#>
PREFIX pubmed: <http://www.ncbi.nlm.nih.gov/pubmed/>
PREFIX rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#>
PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
PREFIX umls: <http://linkedlifedata.com/resource/umls/id/>
SELECT ?gene ?brainregion (COUNT(DISTINCT ?text) AS ?count) WHERE {{
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
  ?t1s1b ztonekg:SenseURL ?brainregionID.
  FILTER(?brainregionID != '{brainRegionId}')
  ?brainregionID sct:hasTUI sct:T023;
    sct:hasEnglishLabel ?brainregion.
  ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?brainregion
ORDER BY DESC (?count)
LIMIT 100";
            var escapedQuery = UnityWebRequest.EscapeURL(query);
            return $"{BaseURL}?query={escapedQuery}";
        }
        
        public string GetDiseasesGeneCountURL(string geneId)
        {
            var query = $@"PREFIX snomed: <http://www.ihtsdo.org/SCT_>
PREFIX sct: <http://wasp.cs.vu.nl/sct/sct#>
PREFIX drugbank: <https://www.drugbank.ca/drugs/>
PREFIX ztonekg: <http://www.ztonebv.nl/KG#>
PREFIX pubmed: <http://www.ncbi.nlm.nih.gov/pubmed/>
PREFIX rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#>
PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
PREFIX umls: <http://linkedlifedata.com/resource/umls/id/>
SELECT ?gene ?geneID (COUNT(DISTINCT ?text) AS ?count) WHERE {{
  ?id1 sct:hasTUI sct:T047.
  ?t1s1 ztonekg:SenseURL ?id1.
  ?id1 sct:hasEnglishLabel ?disease.
  ?t1 ztonekg:hasSense ?t1s1.
  ?s7 ztonekg:hasSenses ?t1.
  ?s ztonekg:hasTerm ?s7.
  ?s1 ztonekg:hasAnnotation ?s;
    ztonekg:hasSource 'Abstract';
    ztonekg:hasAnnotation ?sb.
  ?sb ztonekg:hasTerm ?s7b.
  ?s7b ztonekg:hasSenses ?t1b.
  ?t1b ztonekg:hasSense ?t1s1b.
  ?t1s1b ztonekg:SenseURL ?geneID.
  FILTER(?geneID != '{geneId}')
  ?geneID sct:hasTUI sct:T028;
    sct:hasEnglishLabel ?gene.
  ?s1 ztonekg:hasText ?text.
}}
GROUP BY ?gene ?geneID
LIMIT 100";
            var escapedQuery = UnityWebRequest.EscapeURL(query);
            return $"{BaseURL}?query={escapedQuery}";
        }
    }
}