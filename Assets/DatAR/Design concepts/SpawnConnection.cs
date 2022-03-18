using DatAR.Widgets.QueryCooccurrences;
using DatAR.Widgets.VisualisationBrainModel;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnConnection : MonoBehaviour
{
    [Header("Pools")]
    [SerializeField] private GameObject spherePool;
    [SerializeField] private GameObject widgetPool;

    [Header("Widgets")]
    [SerializeField] private GameObject brainModelWidget;
    [SerializeField] private GameObject coocurrenceWidget;
    [SerializeField] private GameObject topicModelWidget;
    [SerializeField] private GameObject minMaxWidget;
    [SerializeField] private GameObject classRetrieverWidget;
    [SerializeField] private GameObject dataFlowWidget;
    [SerializeField] private GameObject resourceSphereWidget;
    [SerializeField] private GameObject sentenceExtractorWidget;

    Dictionary<string, WidgetConnectionInfo> widgetInformationDict;
    private List<GameObject> listOfChildren;
    void Start()
    {
        listOfChildren = new List<GameObject>();
    }

    #region SINGLETON PATTERN
    private static SpawnConnection _instance;
    public static SpawnConnection Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<SpawnConnection>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("SpawnConnection");
                    _instance = container.AddComponent<SpawnConnection>();
                }
            }

            return _instance;
        }
    }
    #endregion

    // U = brain model
    // I = co-occurences
    // O = topic model
    // P = min max filter
    // J = class retriever
    // K = result viewer
    // L = resource sphere

    // N = sentence extractor
    // M = disease relations
    string widgetName = "";
    bool isPressed = false;

    void Update()
    {
        //GameObject currentWidget = null;
        //if (Input.GetKeyDown(KeyCode.U))
        //{
        //    currentWidget = brainModelWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.I))
        //{
        //    currentWidget = coocurrenceWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.O))
        //{
        //    currentWidget = topicModelWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.P))
        //{
        //    currentWidget = minMaxWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.J))
        //{
        //    currentWidget = classRetrieverWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.K))
        //{
        //    currentWidget = dataFlowWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.L))
        //{
        //    currentWidget = resourceSphereWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.N))
        //{
        //    currentWidget = resourceSphereWidget;
        //    isPressed = true;
        //}
        //else if (Input.GetKeyDown(KeyCode.M))
        //{
        //    currentWidget = sentenceExtractorWidget;
        //    isPressed = true;
        //}
    }

    public void ChosenWidget(string iconName)
    {
        GameObject currentWidget = null;
        switch (iconName)
        {
            case "Brain_IconSprite":
                currentWidget = brainModelWidget;
                break;
            case "Circles_IconSprite":
                currentWidget = classRetrieverWidget;
                break;
            case "Coocurrence_IconSprite":
                currentWidget = coocurrenceWidget;
                break;
            default:
                break;
        }
        WidgetConnection(currentWidget);
    }

    private void WidgetConnection(GameObject currentWidget)
    {
        WidgetConnectionInfo scriptInfo = currentWidget.GetComponent<WidgetConnectionInfo>();

        //Always try to grab one class sphere and two topic spheres
        //Check if there is enough available otherwise give error message
        int children = spherePool.transform.childCount;
        int classSphereCount = 0;
        int topicSphereCount = 0;
        for (int i = 0; i < children; ++i)
        {
            GameObject child = spherePool.transform.GetChild(i).gameObject;
            if (child.name.Contains("datar"))
            {
                topicSphereCount++;
            }
            else if (child.name.Contains("ResourceSphere"))
            {
                classSphereCount++;
            }
        }

        if (classSphereCount >= scriptInfo.classSphereAmount)
        {
            if (topicSphereCount >= scriptInfo.topicSphereAmount)
            {
                //spawn widget
                GameObject spawnedWidget = Instantiate(currentWidget, GameObject.Find("StandaloneWidgetPool").transform);
                spawnedWidget.transform.position = new Vector3(0f, 0, 0.6f);
                //==================================================================================================

                if ((scriptInfo.classSphereAmount != 0 && scriptInfo.topicSphereAmount != 0) || scriptInfo.classSphereAmount != 0 || scriptInfo.topicSphereAmount != 0)
                {
                    //Get the most recent class and topic sphere depending on the widget info
                    int childrenAmount = spherePool.transform.childCount;
                    int classCount = 0;
                    GameObject recentClassSphere = null;
                    List<GameObject> recentTopicSpheres = new List<GameObject>();
                    //Doing it in reverse gives the most recent object
                    for (int i = children; i > 0; --i)
                    {
                        if (classCount == scriptInfo.classSphereAmount && recentTopicSpheres.Count == scriptInfo.topicSphereAmount)
                        {
                            break;
                        }

                        GameObject child = spherePool.transform.GetChild(i - 1).gameObject;
                        if (child.name.Contains("datar"))
                        {
                            if (recentTopicSpheres.Count != scriptInfo.topicSphereAmount)
                            {
                                recentTopicSpheres.Add(child);
                            }
                        }
                        else if (child.name.Contains("ResourceSphere"))
                        {
                            if (!recentClassSphere)
                            {
                                recentClassSphere = child;
                                classCount++;
                            }
                        }
                    }
                    //==================================================================================================
                    //Get the objects where spheres need to be placed in
                    int count = widgetPool.transform.childCount - 1;
                    GameObject createdWidget = widgetPool.transform.GetChild(count).gameObject;
                    listOfChildren.Clear();
                    GetChildRecursive(createdWidget);
                    GameObject topicDiseaseObject = null;
                    GameObject classRegionObject = null;
                    GameObject sentenceObject = null;
                    foreach (GameObject child in listOfChildren)
                    {
                        if (child.name == scriptInfo.topicOrDiseaseSocketName)
                        {
                            topicDiseaseObject = child;
                        }
                        else if (child.name == scriptInfo.classOrRegionSocketName)
                        {
                            classRegionObject = child;
                        }
                        else if (child.name == scriptInfo.sentenceSocketName)
                        {
                            sentenceObject = child;
                        }
                    }
                    //add spheres to the socket
                    if (recentClassSphere)
                    {
                        recentClassSphere.transform.SetParent(classRegionObject.transform.Find("Socket").gameObject.transform);
                        recentClassSphere.transform.localPosition = new Vector3(0, 0, 0);
                    }

                    for (int x = 0; x < recentTopicSpheres.Count; x++)
                    {
                        if (x == 0)
                        {
                            recentTopicSpheres[x].transform.SetParent(topicDiseaseObject.transform.Find("Socket").gameObject.transform);
                            recentTopicSpheres[x].transform.localPosition = new Vector3(0, 0, 0);
                        }
                        else
                        {
                            recentTopicSpheres[x].transform.SetParent(sentenceObject.transform.Find("Socket").gameObject.transform);
                            recentTopicSpheres[x].transform.localPosition = new Vector3(0, 0, 0);
                        }
                    }
                }
                //====================================================================================================================
                //See if the newly loaded widget can be connected to any of the already loaded widgets
                bool connectionFound = false;
                bool connectedToInlet = false;
                bool connectedToOutlet = false;
                foreach (Transform connectWidget in widgetPool.transform)
                {
                    for (int y = 0; y < scriptInfo.connectionWidgets.Count; y++)
                    {
                        if (connectWidget.name.Contains(scriptInfo.connectionWidgets[y].ToString()))
                        {
                            DataflowInlet dataflowinlet = null;
                            DataflowOutlet dataflowoutlet = null;
                            if (scriptInfo.outletType == OutletType.Inlet)
                            {
                                dataflowinlet = spawnedWidget.transform.Find("DataflowInlet").gameObject.GetComponent<DataflowInlet>();
                                dataflowoutlet = connectWidget.transform.Find("DataflowOutlet").gameObject.GetComponent<DataflowOutlet>();
                            }
                            else if (scriptInfo.outletType == OutletType.Outlet)
                            {
                                dataflowinlet = connectWidget.transform.Find("DataflowInlet").gameObject.GetComponent<DataflowInlet>();
                                dataflowoutlet = spawnedWidget.transform.Find("DataflowOutlet").gameObject.GetComponent<DataflowOutlet>();
                            }
                            else if (scriptInfo.outletType == OutletType.OutletAndInlet)
                            {
                                //one inlet connectionWidget to outlet(coocurrence) and one outlet connection to connectionWidget inlet(brain model)
                                if (connectWidget.gameObject.GetComponent<WidgetConnectionInfo>().outletType == OutletType.Inlet && !connectedToInlet)
                                {
                                    dataflowinlet = connectWidget.transform.Find("DataflowInlet").gameObject.GetComponent<DataflowInlet>();
                                    dataflowoutlet = spawnedWidget.transform.Find("DataflowOutlet").gameObject.GetComponent<DataflowOutlet>();
                                    connectedToInlet = true;
                                }
                                else if (connectWidget.gameObject.GetComponent<WidgetConnectionInfo>().outletType == OutletType.Outlet && !connectedToOutlet)
                                {
                                    dataflowinlet = spawnedWidget.transform.Find("DataflowInlet").gameObject.GetComponent<DataflowInlet>();
                                    dataflowoutlet = connectWidget.transform.Find("DataflowOutlet").gameObject.GetComponent<DataflowOutlet>();
                                    connectedToOutlet = true;
                                }
                            }
                            dataflowinlet.SetInputGameObject(dataflowoutlet);
                        }
                        if (connectionFound || (connectedToInlet && connectedToOutlet))
                        {
                            break;
                        }
                    }
                    if (connectionFound || (connectedToInlet && connectedToOutlet))
                    {
                        break;
                    }
                }
            }
            else
            {
                print("This widget requires at least " + scriptInfo.topicSphereAmount + " topic sphere(s) be present");
            }
        }
        else
        {
            print("This widget requires at least " + scriptInfo.classSphereAmount + " class sphere be present");
        }
    }

    private void GetChildRecursive(GameObject obj)
    {
        if (null == obj)
        {
            return;
        }

        foreach (Transform child in obj.transform)
        {
            if (null == child)
            {
                continue;
            }

            //child.gameobject contains the current child you can do whatever you want like add it to an array
            listOfChildren.Add(child.gameObject);
            GetChildRecursive(child.gameObject);
        }
    }
}
