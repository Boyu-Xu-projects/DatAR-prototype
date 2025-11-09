using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UniRx;
using UnityEngine;

public class QueryDiseaseCoocurrences : MonoBehaviour, IQueryState
{
    private SparqlService _sparqlService;

    [SerializeField] private Receptacle disease1Receptacle;
    [SerializeField] private Receptacle disease2Receptacle;

    public TMPro.TextMeshPro disease1Text;
    public TMPro.TextMeshPro disease2Text;
    public BrainConceptManager BrainConcepts;
    public GameObject Buttons;

    public BehaviorSubject<QueryState> IsLoading { get; }

    public string ErrorMessage { get; private set; }

    private List<FormattedCooccurrence> Cooccurrences;
    private bool displayRatio = false;

    public string CurrentFilter { get; set; }

    public QueryDiseaseCoocurrences()
    {
        IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
    }

    private void Awake()
    {
        var services = GameObject.Find("Services");
        //_sparqlService = services.GetComponent<SparqlService>();

        disease1Receptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => GetDiseaseCooccurrences());

        disease2Receptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => GetDiseaseCooccurrences());
    }

    public void SetDisplayRatio(bool value)
    {
        if (value == displayRatio)
        {
            return;
        }

        displayRatio = value;

        if (CurrentFilter == null)
        {
            SelectOverview();
        }
        else
        {
            SelectFromClass(CurrentFilter);
        }
    }

    async private void GetDiseaseCooccurrences()
    {
        IsLoading.OnNext(QueryState.IsEmpty);
        if (disease1Receptacle.SlottedResourceContainer == null ||
            disease1Receptacle.SlottedResourceContainer.Resource == null ||
            disease2Receptacle.SlottedResourceContainer == null ||
            disease2Receptacle.SlottedResourceContainer.Resource == null)
        {
            return;
        }

        IsLoading.OnNext(QueryState.IsLoading);

        try
        {
            var disease1Id = disease1Receptacle.SlottedResourceContainer.Resource.Id;
            var disease2Id = disease2Receptacle.SlottedResourceContainer.Resource.Id;
            var disease1Label = disease1Receptacle.SlottedResourceContainer.Resource.Label;
            var disease2Label = disease2Receptacle.SlottedResourceContainer.Resource.Label;

            var cooccurrences = await _sparqlService.GetDiseaseRelations(disease1Id, disease2Id);

            if (cooccurrences.Count < 0)
            {
                ErrorMessage = $"No cooccurrences found for {disease1Id} and {disease2Id}";
                IsLoading.OnNext(QueryState.HasError);
                return;
            }

            IsLoading.OnNext(QueryState.HasLoaded);

            disease1Text.text = disease1Label;
            disease2Text.text = disease2Label;
            disease1Text.gameObject.SetActive(true);
            disease2Text.gameObject.SetActive(true);

            Buttons.SetActive(true);

            // Split concepts that belong to multiple classes into their seperate list items.
            var fixedCooccurrences = new List<DiseaseRelationResource>();
            foreach (var cooccurrence in cooccurrences)
            {
                if (cooccurrence.Concept.Types.Count > 1)
                {
                    var concepts = cooccurrence.Concept.SplitTypes();
                    foreach (var concept in concepts)
                    {
                        fixedCooccurrences.Add(new DiseaseRelationResource(
                            cooccurrence.Types,
                            cooccurrence.AppearTimes,
                            concept,
                            cooccurrence.Disease));
                    }
                }
                else
                {
                    fixedCooccurrences.Add(cooccurrence);
                }
            }

            // Only take co-occurrences with concepts form a valid type.
            fixedCooccurrences = fixedCooccurrences.Where(x => new string[] {
                "lbd:region",
                "lbd:transmitter",
                "lbd:gene",
                "lbd:function",
                "lbd:protein",
                "lbd:neuron"
            }.Contains(x.Concept.Types[0])).ToList();

            // Format the co-occurrence data based on concept, and calculate number of co-occurrences the diseases have with that concept.
            //TODO: Implement a sorting interface. Currently sorts based on total number of co-occurrences for each class.
            Cooccurrences = fixedCooccurrences.GroupBy(x => x.Concept, (key, value) => new FormattedCooccurrence(
                key.Label,
                key.Types[0],
                disease1Id,
                value.Where(x => x.Disease.Id == disease1Id).FirstOrDefault()?.AppearTimes ?? 0,
                disease2Id,
                value.Where(x => x.Disease.Id == disease2Id).FirstOrDefault()?.AppearTimes ?? 0
                ))
            .GroupBy(x => x.Class)
            .OrderByDescending(x => x.Sum(y => y.Disease1Cooccurences + y.Disease2Cooccurences))
            .SelectMany(x => x)
            .ToList();

            SelectOverview();
        }
        catch (Exception e)
        {
            Debug.Log("Couldn't retrieve data from API. Retrieve local data instead.");

            string disease1Id = disease1Receptacle.SlottedResourceContainer.Resource.Id;
            string disease2Id = disease2Receptacle.SlottedResourceContainer.Resource.Id;
            var disease1Label = disease1Receptacle.SlottedResourceContainer.Resource.Label;
            var disease2Label = disease2Receptacle.SlottedResourceContainer.Resource.Label;

            //string SourcedataMental = "MentalPBrainDiseaseCount";
            //string SourcedataGene = "GeneBrainDiseaseCount";
            //string SourcedataRegion = "RegionBrainDiseaseCount";
            //string SourcedataProtein = "ProteinBrainDiseaseCount";

            string SourcedataMental = "MentalPBrainDisease";
            string SourcedataGene = "GeneBrainDisease";
            string SourcedataRegion = "RegionBrainDisease";
            string SourcedataProtein = "ProteinBrainDisease";


            List<Dictionary<string, object>> dataMD = CSVReader.Read(SourcedataMental);
            List<Dictionary<string, object>> dataGD = CSVReader.Read(SourcedataGene);
            List<Dictionary<string, object>> dataRD = CSVReader.Read(SourcedataRegion);
            List<Dictionary<string, object>> dataPD = CSVReader.Read(SourcedataProtein);



            List<DiseaseRelationResource> diseaseRelations2 = CreateDiseaseRelationsFromCSV(dataGD, disease1Id, disease2Id);
            List<DiseaseRelationResource> diseaseRelations1 = CreateDiseaseRelationsFromCSV(dataMD, disease1Id, disease2Id);
            
            List<DiseaseRelationResource> diseaseRelations3 = CreateDiseaseRelationsFromCSV(dataRD, disease1Id, disease2Id);
            List<DiseaseRelationResource> diseaseRelations4 = CreateDiseaseRelationsFromCSV(dataPD, disease1Id, disease2Id);

            List<DiseaseRelationResource> combinedDiseaseRelations = diseaseRelations1.Concat(diseaseRelations2).Concat(diseaseRelations3).Concat(diseaseRelations4).ToList();

            if (combinedDiseaseRelations.Count < 0)
            {
                ErrorMessage = $"No cooccurrences found for {disease1Id} and {disease2Id}";
                IsLoading.OnNext(QueryState.HasError);
                return;
            }

            IsLoading.OnNext(QueryState.HasLoaded);

            disease1Text.text = disease1Label;
            disease2Text.text = disease2Label;
            disease1Text.gameObject.SetActive(true);
            disease2Text.gameObject.SetActive(true);

            // Group and process the disease relations similar to the original try block
            var fixedCooccurrences = combinedDiseaseRelations
                .Where(x => new string[] {
                    "Region",
                    "MentalP",
                    "Gene",
                    "Protein",
                    //"lbd:protein",
                    //"lbd:neuron"
                }.Contains(x.Concept.Types[0])).ToList();

            Cooccurrences = fixedCooccurrences.GroupBy(x => x.Concept, (key, value) => new FormattedCooccurrence(
                key.Label,
                key.Types[0],
                disease1Id,
                value.Where(x => x.Disease.Id == disease1Id).FirstOrDefault()?.AppearTimes ?? 0,
                disease2Id,
                value.Where(x => x.Disease.Id == disease2Id).FirstOrDefault()?.AppearTimes ?? 0
                ))
            .GroupBy(x => x.Class)
            .OrderByDescending(x => x.Sum(y => y.Disease1Cooccurences + y.Disease2Cooccurences))
            .SelectMany(x => x)
            .ToList();

            // Rest of the processing steps from the original try block
            SelectOverview();
        }
    }

    // Function to create disease relations from CSV data
    private List<DiseaseRelationResource> CreateDiseaseRelationsFromCSV(List<Dictionary<string, object>> data, string disease1Id, string disease2Id)
    {
        List<DiseaseRelationResource> diseaseRelations = new List<DiseaseRelationResource>();

        
        for (var i = 0; i < data.Count; i++)
        {
            

            if (disease1Id == data[i]["disease"].ToString() || disease2Id == data[i]["disease"].ToString())
            {
                Debug.Log("After");
                
                DynamicResource resource = new DynamicResource(
                    data[i]["concept"].ToString(),
                    ConvertCSVTypesToList(data[i]["conceptClass"].ToString()));

                DiseaseRelationResource relation = new DiseaseRelationResource(
                    resource.Types,
                    Convert.ToInt32(data[i]["appearTimes"]),
                    resource,
                    new DynamicResource(data[i]["disease"].ToString(), new List<string> { "disease" }));

                if (relation.Concept.Types.Count > 1)
                {
                    var concepts = relation.Concept.SplitTypes();
                    foreach (var concept in concepts)
                    {
                        diseaseRelations.Add(new DiseaseRelationResource(
                            concept.Types,
                            relation.AppearTimes,
                            concept,
                            relation.Disease));
                    }
                }
                else
                {
                    diseaseRelations.Add(relation);
                }
            }
        }

        return diseaseRelations;
    }

    // Function to convert CSV types to a list
    private List<string> ConvertCSVTypesToList(string csvTypes)
    {
        return new List<string>(csvTypes.Split(','));
    }

    private void SelectOverview()
    {
        BrainConcepts.GenerateConceptList(
                Cooccurrences
                    .GroupBy(x => x.Class)
                    .SelectMany(x => x.OrderByDescending(r => r.Disease1Cooccurences + r.Disease2Cooccurences).Take(3)) //TODO: 3 concepts per class in the overview is hardcoded, make configurable.
                    .ToList(),
                displayRatio,
                false
            );
    }

    // TODO: This code is messy... Clean up. Change into more logical if-statements,
    // separate out the concept list generation and the conditions, don't rely on checking button == null
    public void SelectFromClass(string brainClass, Interactable thisButton = null)
    {
        if(thisButton == null)
        {
            BrainConcepts.GenerateConceptList(
                Cooccurrences
                    .Where(x => x.Class == brainClass)
                    .OrderByDescending(x => x.Disease1Cooccurences + x.Disease2Cooccurences)
                    .Take(5)
                    .ToList(),
                displayRatio,
                true
            );

            CurrentFilter = brainClass;

            return;
        }

        if (thisButton.IsToggled)
        {
            BrainConcepts.GenerateConceptList(
                Cooccurrences
                    .Where(x => x.Class == brainClass)
                    .OrderByDescending(x => x.Disease1Cooccurences + x.Disease2Cooccurences)
                    .Take(5)
                    .ToList(),
                displayRatio,
                true
            );

            CurrentFilter = brainClass;

            thisButton.transform.parent.GetComponentsInChildren<Interactable>().ForEach(siblingButton =>
            {
                if (siblingButton != thisButton)
                {
                    siblingButton.IsToggled = false;
                }
            });
        }
        else
        {
            SelectOverview();
            CurrentFilter = null;
        }
    }
}

public class FormattedCooccurrence
{
    public string Concept { get; private set; }
    public string Class { get; private set; }
    public string Disease1Id { get; private set; }
    public string Disease2Id { get; private set; }
    public int Disease1Cooccurences { get; private set; }
    public int Disease2Cooccurences { get; private set; }
    public double Disease1Ratio { get; private set; }
    public double Disease2Ratio { get; private set; }

    public FormattedCooccurrence(string _Concept, string _Class, string _Disease1, int _Disease1Cooccurrences, string _Disease2, int _Disease2Cooccurrences)
    {
        Concept = _Concept;
        Class = _Class;
        Disease1Id = _Disease1;
        Disease2Id = _Disease2;
        Disease1Cooccurences = _Disease1Cooccurrences;
        Disease2Cooccurences = _Disease2Cooccurrences;

        Disease1Ratio = ((double)Disease1Cooccurences / (Disease1Cooccurences + Disease2Cooccurences)) * 100d;
        Disease2Ratio = ((double)Disease2Cooccurences / (Disease1Cooccurences + Disease2Cooccurences)) * 100d;
    }
}
