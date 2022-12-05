using System;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Misc;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using Newtonsoft.Json;
using TMPro;
using UniRx;
using UnityEngine;
//using Valve.VR.InteractionSystem;

// Inspired by https://sites.psu.edu/bdssblog/2017/04/06/basic-data-visualization-in-unity-scatterplot-creation/
namespace DatAR.Widgets.VisualisationBrainModel
{
    public class VisualisationBrainModel : MonoBehaviour, IQueryState
    {
        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }

        private readonly Dictionary<string, GameObject> _pointsPool = new Dictionary<string, GameObject>();

        [Range(0.0f, 0.5f)]
        public float pointScale = 0.02f;

        public bool showLabels = true;

        // The prefab for the data points that will be instantiated
        public GameObject pointPrefab;

        // Object which will contain instantiated prefabs in scene hierarchy
        public GameObject pointPool;

        [SerializeField] private DataflowInlet highlightDataReceiver;
<<<<<<< Updated upstream
=======
        //[SerializeField] private DataflowInletO highlightDataReceiverO;
        //[SerializeField] private DataflowInletOO highlightDataReceiverOO;
        

        [SerializeField] private DataflowOutlet dataSender;
>>>>>>> Stashed changes

        private ColorService _colorService;
        private SparqlService _sparqlService;

        private Tuple<float, Passable> _awaitingPassable;
        private float _lastRunTime = 0;

        public VisualisationBrainModel()
        {
            IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        }

        private void Awake()
        {
            var services = GameObject.Find("Services");
            _colorService = services.GetComponent<ColorService>();
            _sparqlService = services.GetComponent<SparqlService>();
        }

        private void Start()
        {
            highlightDataReceiver.data.Subscribe(UpdateHighlights);
            UpdatePlot(true);
            IsLoading.Subscribe((isRunning) =>
            {
                if (isRunning != QueryState.IsLoading) CheckStackForLatest();
            });
<<<<<<< Updated upstream
=======


            highlightDataReceiver.data.Subscribe(SendFirstData);
            //NewUpdate();

            //highlightDataReceiverO.dataO.Subscribe(UpdateHighlights);
            //highlightDataReceiverOO.dataOO.Subscribe(UpdateHighlights);
>>>>>>> Stashed changes
        }

        /**
         * This function ensures that the very latest passable input is displayed
         */
        private void CheckStackForLatest()
        {
            if (_awaitingPassable == null)
            {
                return;
            }

            if (_awaitingPassable.Item1 > _lastRunTime)
            {
                UpdateHighlights(_awaitingPassable.Item2);
<<<<<<< Updated upstream
            }
        }
=======
                

                //highlightDataReceiverO.dataO.Subscribe(UpdateHighlights);
                //highlightDataReceiverOO.dataOO.Subscribe(UpdateHighlights);
            }
        }
        //private void NewUpdate()
        //{
        //    print("HelloUpdateN");
        //    if (highlightDataReceiverO.dataO !=null && highlightDataReceiverOO.dataOO!=null)
        //    {
        //        isMath = true;
        //        highlightDataReceiverO.dataO.Subscribe(UpdateHighlights);
        //        highlightDataReceiverOO.dataOO.Subscribe(UpdateHighlights);
        //    }
        //    return;
        //}
>>>>>>> Stashed changes

        /**
         * TODO: Stop execution if new request comes in while running (which replaces it)
         */
        private async void UpdateHighlights(Passable rawPassable)
        {
            if (IsLoading.Value == QueryState.IsLoading)
            {
                // place in stack
                _awaitingPassable = new Tuple<float, Passable>(Time.time, rawPassable);
                return;
            }
            IsLoading.OnNext(QueryState.IsLoading);
            _lastRunTime = Time.time;

            // Check if correct type
            if (!(rawPassable is Passable<CooccurrenceListPassable>))
            {
                if (rawPassable.GetType().ToString() == "DatAR.DataModels.Passables.Passable")
                {
                    Debug.Log("3D Plot listening to data stream");
                    IsLoading.OnNext(QueryState.IsEmpty);
                }
                else
                {
                    Debug.LogWarning($"3D Plot received incompatible data type: {rawPassable?.GetType()}");
                    ErrorMessage = $"3D Plot received incompatible data type: {rawPassable?.GetType()}";
                    IsLoading.OnNext(QueryState.HasError);
                }
                return;
            }

            var passable = (Passable<CooccurrenceListPassable>) rawPassable;
        
            if (passable.data.Resources.Count < 1)
            {
                ErrorMessage = "Data flow does not contain any items";
                IsLoading.OnNext(QueryState.HasError);
                return;
            }
            // Debug.Log($"3D PLOT OBJECT: Received {passable.data.Resources.Count} items. Objects: {JsonConvert.SerializeObject(passable.data)}"); // DEBUG

            List<DynamicResource> inFilterItems = new List<DynamicResource>(), outFilterItems = new List<DynamicResource>();
            try
            {
                var outFilterItemsToMatch = passable.data.Resources
                    .FindAll(r => r.FilterSelectionState == FilterSelectionStateType.OutRange)
                    .Select(r => r.ClassItem.Id).ToList();
                var inFilterItemsToMatch = passable.data.Resources
                    .FindAll(r => r.FilterSelectionState == FilterSelectionStateType.InRange)
                    .Select(r => r.ClassItem.Id).ToList();

                // Perform parallel query
                //var sbURL = "https://datar.local/ontology/";
                (inFilterItems, outFilterItems) = await UniTask.WhenAll(_sparqlService.GetCloseMatchingIds(inFilterItemsToMatch), _sparqlService.GetCloseMatchingIds(outFilterItemsToMatch));
            }
            catch (Exception e)
            {
                Debug.Log(e);
                ErrorMessage = e.Message;
                IsLoading.OnNext(QueryState.HasError);
                return;
            }
            IsLoading.OnNext(QueryState.HasLoaded);

            // Remove overlapping items from out-filter items
            outFilterItems = outFilterItems.Except(inFilterItems).ToList();

            _pointsPool.ForEach(point =>
            {
                var matchInFilter = inFilterItems.Find(item => item.Id == point.Key);
                if (matchInFilter != null)
                {
                    point.Value.GetComponent<Renderer>().material = _colorService.inFilterRangeColor;
                    point.Value.GetComponentInChildren<TMP_Text>().alpha = _colorService.inFilterRangeColor.color.a;
                    return;
                }
                
                var matchOutFilter = outFilterItems.Find(item => item.Id == point.Key);
                if (matchOutFilter != null)
                {
                    point.Value.GetComponent<Renderer>().material = _colorService.outFilterRangeColor;
                    point.Value.GetComponentInChildren<TMP_Text>().alpha = _colorService.outFilterRangeColor.color.a;
                    return;
                }
                
                // Else
                point.Value.GetComponent<Renderer>().material = _colorService.notFoundColor;
                point.Value.GetComponentInChildren<TMP_Text>().alpha = _colorService.notFoundColor.color.a;
            });
        }

        async void UpdatePlot(bool fixedAspectRatio = false)
        {
            var type = "datar:scalableBrainMesh"; // hard-coded for brain model

            IsLoading.OnNext(QueryState.IsLoading);
            List<CoordsResource> coords;
            try
            {
                coords = await _sparqlService.GetTopicModelCoordsOfType(type);
                if (coords.Count < 1)
                {
                    ErrorMessage = $"Failed to load brain model data - data is missing from endpoint.";
                    IsLoading.OnNext(QueryState.HasError);
                    return;
                }
            }
            catch (Exception e)
            {
                ErrorMessage = e.Message;
                IsLoading.OnNext(QueryState.HasError);
                return;
            }
            IsLoading.OnNext(QueryState.HasLoaded);

            // Get max values on each axis
            float xMax = coords.Select(resource => resource.CoordX).Max();
            float yMax = coords.Select(resource => resource.CoordY).Max();
            float zMax = coords.Select(resource => resource.CoordZ).Max();
            float trueMax = Math.Max(xMax, Math.Max(yMax, zMax));

            // Get min values of each axis
            float xMin = coords.Select(resource => resource.CoordX).Min();
            float yMin = coords.Select(resource => resource.CoordY).Min();
            float zMin = coords.Select(resource => resource.CoordZ).Min();
            float trueMin = Math.Min(xMin, Math.Min(yMin, zMin));
            
            coords.ForEach(resource =>
            {
                float x, y, z;
                if (!fixedAspectRatio)
                {
                    x = (Convert.ToSingle(resource.CoordX) - xMin)
                        / (xMax - xMin);

                    y = (Convert.ToSingle(resource.CoordY) - yMin)
                        / (yMax - yMin);

                    z = (Convert.ToSingle(resource.CoordZ) - zMin)
                        / (zMax - zMin);
                }
                else
                {
                    x = (Convert.ToSingle(resource.CoordX) - trueMin)
                        / (trueMax - trueMin);

                    y = (Convert.ToSingle(resource.CoordY) - trueMin)
                        / (trueMax - trueMin);

                    z = (Convert.ToSingle(resource.CoordZ) - trueMin)
                        / (trueMax - trueMin);
                }

                GameObject dataPoint = Instantiate(
                    pointPrefab,
                    pointPool.transform,
                    false);

                var resourceComponent = dataPoint.GetComponent<ResourceComponent>();
                resourceComponent.Resource = resource;

                if (!showLabels)
                {
                    resourceComponent.transform.GetChild(0).gameObject.SetActive(false);
                }

                dataPoint.transform.name = resourceComponent.Resource.Id;
                dataPoint.transform.localScale = new Vector3(pointScale, pointScale, pointScale);
                dataPoint.transform.localPosition = new Vector3(x, y, z);

                dataPoint.GetComponent<Renderer>().material = _colorService.notFoundColor;

                _pointsPool.Add(resourceComponent.Resource.Id, dataPoint);
            });
        }
    }
}
