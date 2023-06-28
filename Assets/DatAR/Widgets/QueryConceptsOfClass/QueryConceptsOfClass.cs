using System.Collections;
using System.Linq;
using System.Collections.Generic;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using UniRx;
using UnityEngine;
using UnityEngine.Serialization;
using System;

namespace DatAR.Widgets.QueryConceptsOfClass
{
    public class QueryConceptsOfClass : MonoBehaviour
    {
        private SparqlService _sparqlService;
        [SerializeField] private ResourceSphereManufacturer manufacturer;
        [SerializeField] private Receptacle receptacle;

        [SerializeField] private GameObject pool;

        private void Awake()
        {
            var services = GameObject.Find("Services");
            if (!services)
            {
                Debug.LogError("The `Services` Prefab was not found in the scene. "
                               + "This GameObject is required for this script to function.");
                gameObject.SetActive(false);
                return;
            }

            _sparqlService = services.GetComponent<SparqlService>();
        }

        private void Start()
        {
            receptacle.slottedResourceContainerHasChanged.Subscribe(currentBatchId =>
            {
                // We record batch id to ensure the enumerator can be stopped if it has changed.

                // Reset items in container
                for (int i = pool.transform.childCount - 1; i >= 0; --i)
                {
                    // Add wait period to avoid completely locking the process
                    // For large collections this still causes lower FPS.
                    // TODO: resolve performance issues with large amount of resources, e.g., by pooling / ECS.
                    Destroy(pool.transform.GetChild(i).gameObject, i * .01f);
                }

                if (receptacle.SlottedResourceContainer == null || receptacle.SlottedResourceContainer.Resource == null)
                {
                    return;
                }

                RetrieveAllOfClass(receptacle.SlottedResourceContainer.Resource, currentBatchId);
            });
        }

        async void RetrieveAllOfClass(IResource classItem, int currentBatchId)
        {
            if (currentBatchId != receptacle.slottedResourceContainerHasChanged.Value)
            {
                return;
            }

            try
            {
                // TODO: handle empty case, and add progress indicator
                var concepts = await _sparqlService.GetAllConceptsOfClass(classItem.Id);
                _ = StartCoroutine(SpawnConcept(concepts, currentBatchId));
            }
            catch (Exception e)
            {
                Debug.Log("Couldn't retrieve data from API. Retrieve local data instead.");

                // RETRIEVE ALL AVAILABLE DATA ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



                //  List<DynamicResource> backUp = new List<DynamicResource>();
                //


                //  string documentName = "brainregion-mentalprocess(15-7-22)";
                //  string typeName = "Triply Brain Region";
                //     string searchTerm = "\"brainregion\"";

                // List<DynamicResource> Disease = new List<DynamicResource>();
                //   List<Dictionary<string, object>> diseasedata = CSVReader.Read("brainregion-disease(29-4-22)");

                //  string documentName01 = "Diseases(25-4-22)";
                //     string typeName01 = "Triply Brain Disease";
                //      string searchTerm01 = "\"disease\"";

                /*      if (classItem.Id == "lbd:disease")
                      {
                          //documentName = "Diseases(25-4-22)";
                          // typeName = "Triply Brain Disease";
                          //searchTerm = "\"disease\"";

                          List<string> type01 = new List<string>();
                          //string typeName01 = "Triply Brain Disease";
                          type01.Add(typeName01);

                          for (var i = 0; i < diseasedata.Count; i++)
                          {
                              //if (LABEL_ID.ContainsKey(data[i]["\"brainregion\""].ToString()))
                              // {
                              DynamicResource resource = new DynamicResource(
                                  diseasedata[i]["\"disease\""].ToString(),
                                  type01);
                              Disease.Add(resource);
                              // }
                          }
                      }*/
                /*
                                List<Dictionary<string, object>> data = CSVReader.Read(documentName);
                                List<string> type = new List<string>();
                                type.Add(typeName);

                                for (var i = 0; i < data.Count; i++)
                                {
                                    DynamicResource resource = new DynamicResource(
                                        data[i][searchTerm].ToString(),
                                        type);
                                    backUp.Add(resource);
                                }

                */
                /*  List<Dictionary<string, object>> diseasedata = CSVReader.Read(documentName01);
                  List<string> type01 = new List<string>();
                  type01.Add(typeName01);

                  for (var i = 0; i < diseasedata.Count; i++)
                  {
                      DynamicResource resource = new DynamicResource(
                          diseasedata[i][searchTerm01].ToString(),
                          type01);
                      backUp.Add(resource);
                  }*/

                //    ConceptListPassable newFormat = new ConceptListPassable(backUp);

                //     _ = StartCoroutine(SpawnConcept(newFormat, currentBatchId));


                //   ConceptListPassable newFormat01 = new ConceptListPassable(Disease);

                //   _ = StartCoroutine(SpawnConcept(newFormat01, currentBatchId));




                /*
                List<Dictionary<string,object>> data = CSVReader.Read(documentName);
                List<string> type = new List<string>();
                type.Add(typeName);

                for(var i=0; i < data.Count; i++) {
                    DynamicResource resource = new DynamicResource(
                        data[i][searchTerm].ToString(),
                        type);
                    backUp.Add(resource);
                }*/


                //       ConceptListPassable newFormat = new ConceptListPassable(backUp);

                //        _ = StartCoroutine(SpawnConcept(newFormat, currentBatchId));



                // RETRIEVE ALL AVAILABLE DATA ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                // RETRIEVE DATA AVAILABLE IN SBA BRAIN MODEL /////////////////////////////////////////////////////////////////////////////////////////////////////
                // Retrieve all IDs and labels available in Triply
                // <UMLS ID, Disease Label>


                Dictionary<string, string> UMLS2TRIPLY = new Dictionary<string, string>();
                TextAsset datass = Resources.Load("Triply_BrainRegion_ID") as TextAsset;
                string[] triplyIDs = datass.text.Split(new string[] { "\r\n" }, StringSplitOptions.None);
                IEnumerable<string> cleanTriplyIDs = triplyIDs.Distinct();
                foreach (var id in cleanTriplyIDs) // TO DO: Handle duplicate entries and escape commas
                {
                    string[] entry = id.Split('\t');
                    UMLS2TRIPLY.Add(entry[0], entry[1]);
                    // type.Add(entry[1]); // Add UMLS ID to this list
                }

                // Retrieve UMLS IDs which can be found in the SBA Brain model
                List<Dictionary<string, object>> sba_data = CSVReader.Read("SBA2UMLS(12-6-22)");
                List<string> availableUMLSids = new List<string>();

                // TO DO: Handle duplicate entries and escape commas
                foreach (Dictionary<string, object> item in sba_data)
                {
                    try
                    {
                        availableUMLSids.Add(item["UMLS ID (Boyu)"].ToString());
                    }
                    catch (Exception ex)
                    {

                        Debug.Log("map concepts");
                        // For some reason, numerous entries are not read correctly from CSV... 
                        string[] itemString = item["Order"].ToString().Split(',');
                        // Reads random tab in ID? Maybe this is what breaks the above. Dirty fix
                        if (itemString[7].Contains("\t"))
                            itemString[7] = itemString[7].Split('\t')[0];

                        availableUMLSids.Add(itemString[7]);
                    }
                }

                // Get brain regions that show up in the brain model
                availableUMLSids = availableUMLSids.Distinct().ToList();

                // Reverse dictionary from UMLS2TRIPLY 
                Dictionary<string, string> LABEL_ID = new Dictionary<string, string>();

                foreach (string id in availableUMLSids)
                    LABEL_ID.Add(UMLS2TRIPLY[id], id);


                /* string classType = "Brain Region";
                 string conceptType = "Brain Disease";
                 string conceptTypeMental = "Mental Process";

                 string matchTerm = "\"disease\"";
                 string matchTermMental = "\"mentalprocess\"";
                 string searchTerm = "\"brainregion\"";
                */

                /*  if (className == "lbd:region")
                  {
                      classType = "Brain Disease";
                      conceptType = "Brain Region";
                      conceptTypeMental = "Mental Process";
                      matchTerm = "\"brainregion\"";
                      searchTerm = "\"disease\"";
                      matchTermMental = "\"mentalprocess\"";


                  }
                */

                List<DynamicResource> backUp = new List<DynamicResource>();
                List<Dictionary<string, object>> data = CSVReader.Read("brainregion-mental-braindisease(15-7-22)");
                List<Dictionary<string, object>> data01 = CSVReader.Read("brainregion-disease-gene(28-7-22)");
                List<Dictionary<string, object>> data02 = CSVReader.Read("brainregion-disease-protein(28-7-22)");


                // List<Dictionary<string, object>> mentaldata = CSVReader.Read("brainregion-disease-mentalprocess(14-7-22)");

                // List<DynamicResource> newConcept = new List<DynamicResource>();
                // List<Dictionary<string, object>> mentaldata = CSVReader.Read("brainregion-disease-mentalprocess(14-7-22)");

                // Get either all brain regions or brain diseases 
                if (classItem.Id == "lbd:disease")
                {
                    List<string> type = new List<string>();
                    string typeName = "Triply Brain Disease";
                    type.Add(typeName);

                    for (var i = 0; i < data.Count; i++)
                    {
                        //if (LABEL_ID.ContainsKey(data[i]["\"brainregion\""].ToString()))
                        // {
                        DynamicResource resource = new DynamicResource(
                            data[i]["\"disease\""].ToString(),
                            type);
                        backUp.Add(resource);
                        // }
                    }
                }
                //  else
                //  {
                /* for (var i = 0; i < data.Count; i++)
                 {

                    // if (LABEL_ID.ContainsKey(data[i]["\"brainregion\""].ToString()))
                     //{
                         List<string> type = new List<string>();
                         string typeName = "Triply Brain Region";
                         type.Add(typeName);

                        //type.Add(LABEL_ID[data[i]["\"mentalprocess\""].ToString()]); // Add ID for future use

                         DynamicResource resource = new DynamicResource(
                             data[i]["\"brainregion\""].ToString(),
                             type);
                     backUp.Add(resource);
                    // }


                 } */

                /*  for (var i = 0; i < data.Count; i++)
                  {

                      // if (LABEL_ID.ContainsKey(data[i]["\"brainregion\""].ToString()))
                      //{
                      List<string> type = new List<string>();
                      string typeName = "Mental Process";
                      type.Add(typeName);

                      //type.Add(LABEL_ID[data[i]["\"mentalprocess\""].ToString()]); // Add ID for future use

                      DynamicResource resource = new DynamicResource(
                          data[i]["\"mentalprocess\""].ToString(),
                          type);
                      backUp.Add(resource);
                      // }


                  }

*/


                //   }

                if (classItem.Id == "lbd:region")
                {
                    List<string> type = new List<string>();
                    string typeName = "Triply Brain Region";
                    type.Add(typeName);

                    for (var i = 0; i < data.Count; i++)
                    {
                        if (LABEL_ID.ContainsKey(data[i]["\"brainregion\""].ToString()))
                        {
                            DynamicResource resource = new DynamicResource(
                                data[i]["\"brainregion\""].ToString(),
                                type);
                            backUp.Add(resource);
                        }
                    }
                }



                if (classItem.Id == "lbd:mental")
                {
                    List<string> type = new List<string>();
                    string typeName = "Mental";
                    type.Add(typeName);
                    //type.Add(LABEL_ID[data[i]["\"mentalprocess\""].ToString()]);

                    for (var i = 0; i < data.Count; i++)
                    {

                        // if (LABEL_ID.ContainsKey(data[i]["\"mentalprocess\""].ToString()))
                        //  {
                        DynamicResource resource = new DynamicResource(
                            data[i]["\"mental\""].ToString(),
                            type);
                        backUp.Add(resource);
                        // }
                    }
                }

                if (classItem.Id == "lbd:gene")
                {
                    List<string> type = new List<string>();
                    string typeName = "Gene";
                    type.Add(typeName);
                    //type.Add(LABEL_ID[data[i]["\"mentalprocess\""].ToString()]);

                    for (var i = 0; i < data01.Count; i++)
                    {

                        // if (LABEL_ID.ContainsKey(data[i]["\"mentalprocess\""].ToString()))
                        //  {
                        DynamicResource resource = new DynamicResource(
                            data01[i]["\"gene\""].ToString(),
                            type);
                        backUp.Add(resource);
                        // }
                    }
                }

                if (classItem.Id == "lbd:protein")
                {
                    List<string> type = new List<string>();
                    string typeName = "Protein";
                    type.Add(typeName);
                    //type.Add(LABEL_ID[data[i]["\"mentalprocess\""].ToString()]);

                    for (var i = 0; i < data02.Count; i++)
                    {

                        // if (LABEL_ID.ContainsKey(data[i]["\"mentalprocess\""].ToString()))
                        //  {
                        DynamicResource resource = new DynamicResource(
                            data02[i]["\"protein\""].ToString(),
                            type);
                        backUp.Add(resource);
                        // }
                    }
                }


                /*

                if (classItem.Id == "lbd:mentalprocess")
                {
                  List<string> type = new List<string>();
                  string typeName = "mental process";
                  type.Add(typeName);

                    for (var i = 0; i < mentaldata.Count; i++)
                    {
                        Debug.Log("00");

                        if (LABEL_ID.ContainsKey(data[i]["\"brainregion_01\""].ToString()))
                        {
                            Debug.Log("01");
                            DynamicResource resource = new DynamicResource(
                                mentaldata[i]["\"mentalprocess\""].ToString(),
                                type);
                            newConcept.Add(resource);

                            Debug.Log("02");
                        }
                    }
                }

                */


                backUp = backUp.Distinct().ToList();
                backUp = backUp.OrderBy(o => o.Label).ToList();

                ConceptListPassable newFormat = new ConceptListPassable(backUp);

                // newConcept = newConcept.Distinct().ToList();
                // newConcept = newConcept.OrderBy(o => o.Label).ToList();

                // ConceptListPassable newFormat_01 = new ConceptListPassable(newConcept);

                Debug.Log("03");


                _ = StartCoroutine(SpawnConcept(newFormat, currentBatchId));

                // _ = StartCoroutine(SpawnConcept(newFormat_01, currentBatchId));

            }
        }



        // TODO: move to ResourceSphereManufacturer class
        private IEnumerator SpawnConcept(ConceptListPassable concepts, int currentBatchId)
        {
            if (currentBatchId != receptacle.slottedResourceContainerHasChanged.Value)
            {
                yield break;
            }

            var offsetLocation = new Vector3(0, 0, 0);
            foreach (var concept in concepts.Resources)
            {
                if (currentBatchId != receptacle.slottedResourceContainerHasChanged.Value)
                {
                    yield break;
                }

                manufacturer.Spawn(concept, offsetLocation);
                offsetLocation.y -= manufacturer.pointScale * 1.25f;
                if (offsetLocation.y < -5)
                {
                    offsetLocation.y = 0;
                    offsetLocation.x -= manufacturer.pointScale * 4f;
                }
                yield return new WaitForEndOfFrame();
            }
        }
    }
}