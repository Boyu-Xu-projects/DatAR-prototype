using System;
using System.Collections.Generic;
using DatAR.DataModels.Passables;
using TMPro;
using UniRx;
using UnityEngine;
using UnityEngine.Serialization;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class QueryCooccurrences : MonoBehaviour, IQueryState
    {
        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }
        
        [SerializeField] private DataflowOutlet dataSender;
        private GameObject _services;
        [SerializeField] private Receptacle classReceptacle;

        [SerializeField] private Receptacle conceptReceptacle;

        private QueryCooccurrences()
        {
            IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        }

        private void Awake()
        {
            _services = GameObject.Find("Services");

            //conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrences());

            //classReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrences());

            conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrencesFake());

            classReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrencesFake());
        }

        public async void RetrieveCooccurrencesFake()
        {
            if (conceptReceptacle.SlottedResourceContainer == null
                || conceptReceptacle.SlottedResourceContainer.Resource == null
                || classReceptacle.SlottedResourceContainer == null
                || classReceptacle.SlottedResourceContainer.Resource == null)
            {
                return;
            }

            dataSender.Send(null);
        }

        public async void RetrieveCooccurrences()
        {
            IsLoading.OnNext(QueryState.IsEmpty);
            if (conceptReceptacle.SlottedResourceContainer == null
                || conceptReceptacle.SlottedResourceContainer.Resource == null
                || classReceptacle.SlottedResourceContainer == null
                || classReceptacle.SlottedResourceContainer.Resource == null)
            {
                return;
            }

            IsLoading.OnNext(QueryState.IsLoading);

            try
            {
                var sparqlService = _services.GetComponent<SparqlService>();
                var passable = new Passable<CooccurrenceListPassable>
                {
                    data = await sparqlService.GetCooccurrenceStatementsWithConcept(
                        conceptReceptacle.SlottedResourceContainer.Resource.Id,
                        classReceptacle.SlottedResourceContainer.Resource.Id)
                };
                if (passable.data.Resources.Count < 1)
                {
                    ErrorMessage = $"No co-occurrences found between {conceptReceptacle.SlottedResourceContainer.Resource.Label} and items of type {classReceptacle.SlottedResourceContainer.Resource.Label}";
                    IsLoading.OnNext(QueryState.HasError);
                    return;
                }
                
                dataSender.Send(passable);
                IsLoading.OnNext(QueryState.HasLoaded);
            }
            catch (Exception e)
            {
                ErrorMessage = e.Message;
                Debug.LogError(e);
                IsLoading.OnNext(QueryState.HasError);
            }
        }
    }
}