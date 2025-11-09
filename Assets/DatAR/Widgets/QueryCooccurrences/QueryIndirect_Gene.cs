using System;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using System.Collections.Generic;

namespace DatAR.Widgets.QueryCooccurrences
{
    public class QueryIndirect_Gene : MonoBehaviour, IQueryState
    {
        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }

        [SerializeField] private DataflowOutlet dataSender;
        private GameObject _services;
        [SerializeField] private Receptacle classReceptacle;

        [SerializeField] private Receptacle conceptReceptacle;

        private QueryIndirect_Gene()
        {
            IsLoading = new BehaviorSubject<QueryState>(QueryState.IsEmpty);
        }

        private void Awake()
        {
            _services = GameObject.Find("Services");

            conceptReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrences());

            classReceptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId => RetrieveCooccurrences());
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
                // Old error handling
                // if(conceptReceptacle.SlottedResourceContainer.Resource.Id == "")

                // ErrorMessage = e.Message;
                // Debug.LogError(e);
                // IsLoading.OnNext(QueryState.HasError);

                Debug.Log("Couldn't retrieve data from API. Retrieve local data instead.");



                /*
                string dataSource = "brainregion-mental-braindisease(15-7-22)";
                string concept = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string className = classReceptacle.SlottedResourceContainer.Resource.Id;

           

                string classType = "Brain Region";
                string conceptType = "Brain Disease";
               // string classType = "Mental";

                string matchTerm = "\"disease\"";
                string searchTerm = "\"brainregion\"";
              //  string searchTerm = "\"mental\"";


                if (className == "lbd:region") {
                    classType = "Brain Disease";
                    conceptType = "Brain Region";
                   // conceptTypenew = "Mental";
                    matchTerm = "\"brainregion\"";
                    searchTerm = "\"disease\"";
                  //  matchTermnew = "\"mental\"";


                }

                */
                List<CooccurrenceResource> backUp = new List<CooccurrenceResource>();

               // string dataSource = "disease-mentalCooccurrences(15-7-22)";

                string dataSourceBD = "brainregion-disease-all";

                //string dataSourceBD_indirect = "mental-BR-BD(6-9-22)-00";

               // string dataSourceBD_indirect = "Gene-BD-BR(7-9-22)-00";
                
                string dataSourceBD_indirect = "Gene-BD-BR(7-9-22)-00";

              //  string dataSourceBM = "brainregion-mentalCooccurrences(15-7-22)";

              //  string dataSourceBG = "brainregion-geneCooccurrences(28-7-22)";

              //  string dataSourceDG = "disease-geneCooccurrences(28-7-22)";

              //  string dataSourceBP = "brainregion-proteinCooccurrences(28-7-22)";

             //   string dataSourceDP = "disease-proteinCooccurrences(28-7-22)";



                string concept = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string className = classReceptacle.SlottedResourceContainer.Resource.Id;

                string conceptBD = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string classNameBD = classReceptacle.SlottedResourceContainer.Resource.Id;

                string conceptBD_indirect = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                string classNameBD_indirect = classReceptacle.SlottedResourceContainer.Resource.Id;

                //  string conceptBM = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                //   string classNameBM = classReceptacle.SlottedResourceContainer.Resource.Id;

                //   string conceptBG = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                //   string classNameBG = classReceptacle.SlottedResourceContainer.Resource.Id;

                //   string conceptDG = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                //   string classNameDG = classReceptacle.SlottedResourceContainer.Resource.Id;

                //   string conceptBP = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                //   string classNameBP = classReceptacle.SlottedResourceContainer.Resource.Id;

                //   string conceptDP = conceptReceptacle.SlottedResourceContainer.Resource.Id;
                //   string classNameDP = classReceptacle.SlottedResourceContainer.Resource.Id;

                List<string> conceptTypes = new List<string>();
               // conceptTypes.Add(conceptType);

                List<string> classTypes = new List<string>();
               // classTypes.Add(classType);


                /*
                                string classType = "Brain Disease";
                                string conceptType = "Mental";
                                // string classType = "Mental";

                                string matchTerm = "\"mental\"";
                                string searchTerm = "\"disease\"";
                                //  string searchTerm = "\"mental\"";

                                if (className == "lbd:disease")
                                {
                                    classType = "Mental";
                                    conceptType = "Brain Disease";
                                    // conceptTypenew = "Mental";
                                    matchTerm = "\"disease\"";
                                    searchTerm = "\"mental\"";
                                    //  matchTermnew = "\"mental\"";

                                }

                                List<Dictionary<string, object>> data = CSVReader.Read(dataSource);

                                List<string> conceptTypes = new List<string>();
                                conceptTypes.Add(conceptType);

                                List<string> classTypes = new List<string>();
                                classTypes.Add(classType);

                                for (var i = 0; i < data.Count; i++)
                                {
                                    if (concept == data[i][searchTerm].ToString())
                                    {
                                        DynamicResource resource = new DynamicResource(
                                            data[i][matchTerm].ToString(),
                                            classTypes);

                                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                                            classTypes,
                                            Convert.ToDouble(data[i]["\"count\""]),
                                            resource,
                                            0.0, // No local data
                                            0.0, // No local data
                                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                                            );

                                        cooccurrence.Label = data[i][matchTerm].ToString();

                                        backUp.Add(cooccurrence);
                                    }
                                }

                */
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

                List<string> conceptTypesBD = new List<string>();
                conceptTypesBD.Add(conceptTypeBD);

                List<string> classTypesBD = new List<string>();
                classTypesBD.Add(classTypeBD);

                for (var i = 0; i < dataBD.Count; i++)
                {
                    if (concept == dataBD[i][searchTermBD].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataBD[i][matchTermBD].ToString(),
                            classTypesBD);

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


                string classTypeBD_indirect = "Brain Region";
                string conceptTypeBD_indirect = "Brain Disease";

                string matchTermBD_indirect = "\"disease\"";
                string searchTermBD_indirect = "\"brainregion\"";

                if (className == "lbd:region")
                {
                    classTypeBD_indirect = "Brain Disease";
                    conceptTypeBD_indirect = "Brain Region";

                    matchTermBD_indirect = "\"brainregion\"";
                    searchTermBD_indirect = "\"disease\"";

                }


                List<Dictionary<string, object>> dataBD_indirect = CSVReader.Read(dataSourceBD_indirect);

                List<string> conceptTypesBD_indirect = new List<string>();
                conceptTypesBD_indirect.Add(conceptTypeBD_indirect);

                List<string> classTypesBD_indirect = new List<string>();
                classTypesBD_indirect.Add(classTypeBD_indirect);

                for (var i = 0; i < dataBD_indirect.Count; i++)
                {
                    if (concept == dataBD_indirect[i][searchTermBD_indirect].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataBD_indirect[i][matchTermBD_indirect].ToString(),
                            classTypesBD_indirect);

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            classTypesBD_indirect,
                            Convert.ToDouble(dataBD_indirect[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.IndirectRange
                            );

                        cooccurrence.Label = dataBD_indirect[i][matchTermBD_indirect].ToString();

                        backUp.Add(cooccurrence);
                    }
                }










/*

                string classTypeBM = "Brain Region";
                string conceptTypeBM = "Mental";

                string matchTermBM = "\"mental\"";
                string searchTermBM = "\"brainregion\"";

                if (className == "lbd:region")
                {
                    classTypeBM = "Mental";
                    conceptTypeBM = "Brain Region";

                    matchTermBM = "\"brainregion\"";
                    searchTermBM = "\"mental\"";

                }


                List<Dictionary<string, object>> dataBM = CSVReader.Read(dataSourceBM);

                List<string> conceptTypesBM = new List<string>();
                conceptTypesBM.Add(conceptTypeBM);

                List<string> classTypesBM = new List<string>();
                classTypesBM.Add(classTypeBM);

                for (var i = 0; i < dataBM.Count; i++)
                {
                    if (concept == dataBM[i][searchTermBM].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataBM[i][matchTermBM].ToString(),
                            classTypesBM);

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            classTypesBM,
                            Convert.ToDouble(dataBM[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                            );

                        cooccurrence.Label = dataBM[i][matchTermBM].ToString();

                        backUp.Add(cooccurrence);
                    }
                }



                string classTypeBG = "Brain Region";
                string conceptTypeBG = "Gene";

                string matchTermBG = "\"gene\"";
                string searchTermBG = "\"brainregion\"";

                if (className == "lbd:region")
                {
                    classTypeBG = "Gene";
                    conceptTypeBG = "Brain Region";

                    matchTermBG = "\"brainregion\"";
                    searchTermBG = "\"gene\"";

                }


                List<Dictionary<string, object>> dataBG = CSVReader.Read(dataSourceBG);

                List<string> conceptTypesBG = new List<string>();
                conceptTypesBG.Add(conceptTypeBG);

                List<string> classTypesBG = new List<string>();
                classTypesBG.Add(classTypeBG);

                for (var i = 0; i < dataBG.Count; i++)
                {
                    if (concept == dataBG[i][searchTermBG].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataBG[i][matchTermBG].ToString(),
                            classTypesBG);

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            classTypesBG,
                            Convert.ToDouble(dataBG[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                            );

                        cooccurrence.Label = dataBG[i][matchTermBG].ToString();

                        backUp.Add(cooccurrence);
                    }
                }


                string classTypeDG = "Brain Disease";
                string conceptTypeDG = "Gene";

                string matchTermDG = "\"gene\"";
                string searchTermDG = "\"disease\"";

                if (className == "lbd:disease")
                {
                    classTypeDG = "Gene";
                    conceptTypeDG = "Brain Disease";

                    matchTermDG = "\"disease\"";
                    searchTermDG = "\"gene\"";

                }


                List<Dictionary<string, object>> dataDG = CSVReader.Read(dataSourceDG);

                List<string> conceptTypesDG = new List<string>();
                conceptTypesDG.Add(conceptTypeDG);

                List<string> classTypesDG = new List<string>();
                classTypesDG.Add(classTypeDG);

                for (var i = 0; i < dataDG.Count; i++)
                {
                    if (concept == dataDG[i][searchTermDG].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataDG[i][matchTermDG].ToString(),
                            classTypesDG);

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            classTypesDG,
                            Convert.ToDouble(dataDG[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                            );

                        cooccurrence.Label = dataDG[i][matchTermDG].ToString();

                        backUp.Add(cooccurrence);
                    }
                }





                string classTypeBP = "Brain Region";
                string conceptTypeBP = "Protein";

                string matchTermBP = "\"protein\"";
                string searchTermBP = "\"brainregion\"";

                if (className == "lbd:region")
                {
                    classTypeBP = "Protein";
                    conceptTypeBP = "Brain Region";

                    matchTermBP = "\"brainregion\"";
                    searchTermBP = "\"protein\"";

                }


                List<Dictionary<string, object>> dataBP = CSVReader.Read(dataSourceBP);

                List<string> conceptTypesBP = new List<string>();
                conceptTypesBP.Add(conceptTypeBP);

                List<string> classTypesBP = new List<string>();
                classTypesBP.Add(classTypeBP);

                for (var i = 0; i < dataBP.Count; i++)
                {
                    if (concept == dataBP[i][searchTermBP].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataBP[i][matchTermBP].ToString(),
                            classTypesBP);

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            classTypesBP,
                            Convert.ToDouble(dataBP[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                            );

                        cooccurrence.Label = dataBP[i][matchTermBP].ToString();

                        backUp.Add(cooccurrence);
                    }
                }


                string classTypeDP = "Brain Disease";
                string conceptTypeDP = "Protein";

                string matchTermDP = "\"protein\"";
                string searchTermDP = "\"disease\"";

                if (className == "lbd:disease")
                {
                    classTypeDP = "Protein";
                    conceptTypeDP = "Brain Disease";

                    matchTermDP = "\"disease\"";
                    searchTermDP = "\"protein\"";

                }


                List<Dictionary<string, object>> dataDP = CSVReader.Read(dataSourceDP);

                List<string> conceptTypesDP = new List<string>();
                conceptTypesDP.Add(conceptTypeDP);

                List<string> classTypesDP = new List<string>();
                classTypesDP.Add(classTypeDP);

                for (var i = 0; i < dataDP.Count; i++)
                {
                    if (concept == dataDP[i][searchTermDP].ToString())
                    {
                        DynamicResource resource = new DynamicResource(
                            dataDP[i][matchTermDP].ToString(),
                            classTypesDP);

                        CooccurrenceResource cooccurrence = new CooccurrenceResource(
                            classTypesDP,
                            Convert.ToDouble(dataDP[i]["\"count\""]),
                            resource,
                            0.0, // No local data
                            0.0, // No local data
                            DatAR.DataModels.Misc.FilterSelectionStateType.InRange
                            );

                        cooccurrence.Label = dataDP[i][matchTermDP].ToString();

                        backUp.Add(cooccurrence);
                    }
                }

*/

                DynamicResource conceptResource = new DynamicResource(conceptReceptacle.SlottedResourceContainer.Resource.Id, conceptTypes);
                DynamicResource classResource = new DynamicResource(classReceptacle.SlottedResourceContainer.Resource.Id, classTypes);
                CooccurrenceListPassable newFormat = new CooccurrenceListPassable(conceptResource, classResource, backUp);

                var passable = new Passable<CooccurrenceListPassable>();
                passable.data = newFormat;

                dataSender.Send(passable);







            }
        }
    }
}