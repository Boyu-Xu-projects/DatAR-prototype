using System;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using System.Collections.Generic;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class QueryCooccurrences_gene : MonoBehaviour, IQueryState
    {
        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }

        [SerializeField] private DataflowOutlet dataSender;
        private GameObject _services;

        [SerializeField] private Receptacle classReceptacle;
        [SerializeField] private Receptacle conceptReceptacle;
        [SerializeField] private Receptacle geneReceptacle;  // 新增基因接收器

        private QueryCooccurrences_gene()
        {
            IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        }

        private void Awake()
        {
            _services = GameObject.Find("Services");

            conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences());
            classReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences());
            geneReceptacle.slottedResourceContainerHasChanged.Subscribe(_ => RetrieveCooccurrences()); // 监听 geneReceptacle 变化
        }

        public async void RetrieveCooccurrences()
        {
            IsLoading.OnNext(QueryState.IsEmpty);
            if (conceptReceptacle.SlottedResourceContainer == null
                || conceptReceptacle.SlottedResourceContainer.Resource == null
                || classReceptacle.SlottedResourceContainer == null
                || classReceptacle.SlottedResourceContainer.Resource == null
                || geneReceptacle.SlottedResourceContainer == null
                || geneReceptacle.SlottedResourceContainer.Resource == null)
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
                Debug.Log("Couldn't retrieve data from API. Retrieve local data instead.");

                List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();

                // **第一组数据**：Gene ↔ Brain Region
                backUp.AddRange(LoadLocalData(geneReceptacle.SlottedResourceContainer.Resource.Id, classReceptacle.SlottedResourceContainer.Resource.Id, "Gene"));

                // **第二组数据**：Brain Disease ↔ Brain Region
                backUp.AddRange(LoadLocalData(conceptReceptacle.SlottedResourceContainer.Resource.Id, classReceptacle.SlottedResourceContainer.Resource.Id, "BrainDisease"));

                // 发送合并后的数据
                DynamicResource conceptResource = new DynamicResource(conceptReceptacle.SlottedResourceContainer.Resource.Id, new List<string> { "Concept" });
                DynamicResource classResource = new DynamicResource(classReceptacle.SlottedResourceContainer.Resource.Id, new List<string> { "Class" });
                CooccurrenceListPassable newFormat = new CooccurrenceListPassable(conceptResource, classResource, backUp);

                var passable = new Passable<CooccurrenceListPassable> { data = newFormat };
                dataSender.Send(passable);
            }
        }

        private List<CooccurrenceResource> LoadLocalData(string concept, string className, string dataType)
        {
            List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();

            // **选择数据源**
            string dataSourceBD = (dataType == "Gene") ? "gene-specific" : "brainregion-disease-0217";

            List<Dictionary<string, object>> dataBD = CSVReader.Read(dataSourceBD);

            string classTypeBD, conceptTypeBD;
            string matchTermBD, searchTermBD;
            DatAR.DataModels.Misc.FilterSelectionStateType filterState;
            bool isRed = false; // 新增标志

            if (dataType == "Gene")
            {
                classTypeBD = "Brain Region";
                conceptTypeBD = "Gene";
                matchTermBD = "\"gene\"";
                searchTermBD = "\"brainregion\"";
                filterState = DatAR.DataModels.Misc.FilterSelectionStateType.OutRange;

                if (className == "lbd:region")
                {
                    classTypeBD = "Gene";
                    conceptTypeBD = "Brain Region";
                    matchTermBD = "\"brainregion\"";
                    searchTermBD = "\"gene\"";
                }
            }
            else // Brain Disease
            {
                classTypeBD = "Brain Region";
                conceptTypeBD = "Brain Disease";
                matchTermBD = "\"disease\"";
                searchTermBD = "\"brainregion\"";
                filterState = DatAR.DataModels.Misc.FilterSelectionStateType.InRange;

                if (className == "lbd:region")
                {
                    classTypeBD = "Brain Disease";
                    conceptTypeBD = "Brain Region";
                    matchTermBD = "\"brainregion\"";
                    searchTermBD = "\"disease\"";
                }
            }

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
                        0.0,
                        0.0,
                        filterState
                    );

                    // 判断是否为相同的结果，如果相同，则设置渲染为红色
                    if (isRedCondition(cooccurrence, backUp))
                    {
                       // filterState = DatAR.DataModels.Misc.FilterSelectionStateType.InRange; // 标记为红色
                    }

                    cooccurrence.Label = dataBD[i][matchTermBD].ToString();
                   // filterState = DatAR.DataModels.Misc.FilterSelectionStateType.InRange; // 在资源中存储红色标志

                    backUp.Add(cooccurrence);
                }
            }

            return backUp;
        }

        // 判断两个资源是否相同（示例：比对标签是否一致）
        private bool isRedCondition(CooccurrenceResource cooccurrence, List<CooccurrenceResource> backupList)
        {
            foreach (var existingResource in backupList)
            {
                // 判断两个资源是否相同，比如比较标签
                if (existingResource.Label == cooccurrence.Label)
                {
                    return true; // 如果有相同的项，则返回 true
                }
            }
            return false; // 如果没有相同的项，则返回 false
        }

    }
}
