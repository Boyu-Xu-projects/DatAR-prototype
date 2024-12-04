using System;
using Microsoft.MixedReality.Toolkit.Utilities;
using Newtonsoft.Json;
using UniRx;
using UnityEngine;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using System.Text;
using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;

namespace DatAR.Widgets.ExportConceptPair
{
    public class ExportConceptPair : MonoBehaviour, IQueryState
    {
        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }
        
        [SerializeField] private Receptacle diseaseReceptacle;
        [SerializeField] private Receptacle regionReceptacle;

        private GameObject _services;
        [SerializeField] private GridObjectCollection grid;
        public TMPro.TextMeshPro sentencePrefab;

        //private MessageBrokerService _backendSender;

        public ExportConceptPair()
        {
            IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        }

        private void Awake()
        {
            _services = GameObject.Find("Services");
            //_backendSender = services.GetComponent<MessageBrokerService>();
        
            diseaseReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveSentences());
        
            regionReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveSentences());
        }

        public async void RetrieveSentences()
        {
            //IsLoading.OnNext(QueryState.IsEmpty);
            if (diseaseReceptacle.SlottedResourceContainer == null
                || diseaseReceptacle.SlottedResourceContainer.Resource == null
                || regionReceptacle.SlottedResourceContainer == null
                || regionReceptacle.SlottedResourceContainer.Resource == null)
            {
                return;
            }

            try
            {
                var sparqlService = _services.GetComponent<SparqlService>();
                var data = await sparqlService.GetCooccurrenceSentences(
                    regionReceptacle.SlottedResourceContainer.Resource.Id,
                    diseaseReceptacle.SlottedResourceContainer.Resource.Id);
                foreach(Transform child in grid.transform)
                {
                    Destroy(child.gameObject);
                }
                foreach(var sentence in data)
                {
                    var newSentenceObj = Instantiate(sentencePrefab, grid.transform);
                    newSentenceObj.text = sentence.Sentence;
                }
                grid.UpdateCollection();
            }
            catch (Exception e)
            {
                //ErrorMessage = e.Message;
                //Debug.LogError(e);
                //IsLoading.OnNext(QueryState.HasError);

                Debug.Log("Couldn't retrieve data from API. Retrieve local data instead.");

                StringBuilder dataPreview = new StringBuilder();

                //List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();

                //string dataSource = "Brain-Region---Brain-Disease (7)";
                string conceptdisease = diseaseReceptacle.SlottedResourceContainer.Resource.Id;
                string conceptregion = regionReceptacle.SlottedResourceContainer.Resource.Id;

                List<Dictionary<string, object>> data = CSVReader.Read("brainregion-disease-text");

                // Iterate through each entry in data.
                for (var i = 0; i < data.Count; i++)
                {
                    // Log for debugging purposes.
                    //Debug.Log("Iterating through data entry " + i);

                    // Check if both disease and brainregion fields match the desired values.
                    if (conceptdisease == data[i]["disease"].ToString() && conceptregion == data[i]["brainregion"].ToString())
                    {
                        // Log for debugging purposes.
                        Debug.Log("Found matching entry at index " + i);

                        // Destroy all child objects of the grid.
                        foreach (Transform child in grid.transform)
                        {
                            Destroy(child.gameObject);
                        }

                        // Append the sentence to dataPreview with formatting.
                        dataPreview.Append($"<b><color=blue>Date {data[i]["pubdate"].ToString()}:</color></b> <color=white>{data[i]["text"].ToString()}</color>\n");

                        // Instantiate a new object for the sentence and set its text.
                        var newSentenceObj = Instantiate(sentencePrefab, grid.transform);  // Assuming sentencePrefab is of type Text. Adjust if necessary.
                        newSentenceObj.text = dataPreview.ToString();
                    }
                }


                //for (var i = 0; i < data.Count; i++)
                //{
                //    Debug.Log("in for");
                //    if (conceptdisease == data[i]["disease"].ToString() && conceptregion == data[i]["brainregion"].ToString())
                //    {
                //        Debug.Log("in if");
                //            foreach (Transform child in grid.transform)
                //            {
                //                Destroy(child.gameObject);
                //            }

                //            dataPreview.Append($"<b><color=blue>Sentence{i + 1}: <b><color=white>{data[i]["text"].ToString() }</color></b>");

                //            dataPreview.Append("\n");

                //            var newSentenceObj = Instantiate(sentencePrefab, grid.transform);
                //            //dataText.text = dataPreview.ToString();
                //            newSentenceObj.text = dataPreview.ToString();
                //    }

                //}
                //else
                //{
                //    //var newSentenceObj = Instantiate(sentencePrefab, grid.transform);
                //    //dataText.text = dataPreview.ToString();
                //    newSentenceObj.text = "There is not any sentences";
                //}
            }
        }

        //async private void SendResources()
        //{
        //    if (diseaseReceptacle.SlottedResourceContainer == null
        //        || diseaseReceptacle.SlottedResourceContainer.Resource == null
        //        || regionReceptacle.SlottedResourceContainer == null
        //        || regionReceptacle.SlottedResourceContainer.Resource == null)
        //    {
        //        return;
        //    }

        //    var payloadDisease = JsonConvert.SerializeObject(
        //        diseaseReceptacle.SlottedResourceContainer.Resource,
        //        SparqlService.JsonSerializerSettings);
        //    var payloadRegion = JsonConvert.SerializeObject(
        //        regionReceptacle.SlottedResourceContainer.Resource,
        //        SparqlService.JsonSerializerSettings);

        //    var payloadCombined =
        //        "{ " + 
        //        "\"@type\": \"datar:ConceptPair\"" + "," + 
        //        "\"datar:firstConcept\": " + payloadRegion + "," +
        //        "\"datar:secondConcept\": " + payloadDisease +
        //        "}";

        //    IsLoading.OnNext(QueryState.IsLoading);
        //    try
        //    {
        //        _backendSender.Send(payloadCombined);
        //        await UniTask.Delay(TimeSpan.FromSeconds(1));
        //        IsLoading.OnNext(QueryState.HasLoaded);

        //    }
        //    catch (Exception e)
        //    {
        //        IsLoading.OnNext(QueryState.HasError);
        //    }
        //}
    }
}