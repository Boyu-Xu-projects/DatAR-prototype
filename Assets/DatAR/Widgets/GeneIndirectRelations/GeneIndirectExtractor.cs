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
        //public behaviorsubject<querystate> isloading { get; }
        //public string errormessage { get; private set; }

        //[SerializeField] private DataflowOutlet dataSender;
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

            UnityEngine.Debug.Log("Class: " + classReceptacle.SlottedResourceContainer.Resource.Id);
            UnityEngine.Debug.Log("Concept: " + conceptReceptacle.SlottedResourceContainer.Resource.Id);
            UnityEngine.Debug.Log("Gene: " + geneReceptacle.SlottedResourceContainer.Resource.Id);

            //IsLoading.OnNext(QueryState.IsLoading);

            StartCoroutine(GetDataFromEndpoint());

        }

        IEnumerator GetDataFromEndpoint()
        {
            string url = "https://api.krr.triply.cc/queries/BrainScienceKG/Brain-Regions---Specific-Diseases---Coun/1/run";
            UnityWebRequest request = UnityWebRequest.Get(url);
            request.SetRequestHeader("Accept", "application/json");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                UnityEngine.Debug.LogError("Error: " + request.error);
            }
            else
            {
                UnityEngine.Debug.Log("Received: " + request.downloadHandler.text);
            }
        }
    }
}