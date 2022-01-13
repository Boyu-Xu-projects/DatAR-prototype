using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class SpawningTest : MonoBehaviour
{
    enum WidgetInput
    {
        noSphere,
        oneClass,
        topicAndClass,
        twoTopic
    }

    [Header("Pools")]
    [SerializeField] private GameObject spherePool;
    [SerializeField] private GameObject widgetPool;

    [Header("Widgets")]
    [SerializeField] private GameObject brainModelWidget;
    [SerializeField] private GameObject coocurrenceWidget;
    [SerializeField] private GameObject conceptsOfClassWidget;
    [SerializeField] private GameObject sentenceExtractorWidget;

    private List<GameObject> listOfChildren;
    void Start()
    {
        //foreach (Transform child in widgetPool.transform)
        //{
        //    print("Foreach loop: " + child);
        //}
        listOfChildren = new List<GameObject>();
    }


    void Update()
    {
        GameObject spawnedWidget = null;
        //spawn first widget
        if (Input.GetKeyDown(KeyCode.G))
        {
            spawnedWidget = Instantiate(brainModelWidget, GameObject.Find("StandaloneWidgetPool").transform);
        }

        //spawn second widget only if sockets are filled
        if (Input.GetKeyDown(KeyCode.F))
        {
            //Instantiate the widget
            //spawnedWidget = Instantiate(coocurrenceWidget, GameObject.Find("StandaloneWidgetPool").transform);
            spawnedWidget = Instantiate(conceptsOfClassWidget, GameObject.Find("StandaloneWidgetPool").transform);
            spawnedWidget.transform.position = new Vector3(0, 0, 0.5f);

            //See if widget has no spheres, one class sphere, topic and class sphere or two topic spheres
            int count = widgetPool.transform.childCount - 1;
            GameObject createdWidget = widgetPool.transform.GetChild(count).gameObject;

            listOfChildren.Clear();
            GetChildRecursive(createdWidget);

            int classSphereCount = 0;
            int topicSphereCount = 0;
            GameObject topicObject = null;
            GameObject classObject = null;
            foreach (GameObject child in listOfChildren)
            {
                if (child.name == "Receptacle::Concept")
                {
                    topicSphereCount++;
                    topicObject = child;
                }
                else if (child.name == "Receptacle::Class")
                {
                    classSphereCount++;
                    classObject = child;
                }
            }

            //Add the most recent spheres to the instantiated gameobject
            //always get the one most recent class sphere and two most recent dataspheres
            int children = spherePool.transform.childCount;
            GameObject recentClassSphere = null;
            List<GameObject> recentTopicSpheres = new List<GameObject>();
            for (int i = children; i > 0; --i)
            {
                GameObject child = spherePool.transform.GetChild(i - 1).gameObject;
                if (child.name.Contains("datar"))
                {
                    if (recentTopicSpheres.Count < 2)
                    {
                        recentTopicSpheres.Add(child);
                    }
                }
                else if (child.name.Contains("ResourceSphere"))
                {
                    if (!recentClassSphere)
                    {
                        recentClassSphere = child;
                    }
                }
            }

            int enumNumber = 0;
            if (classSphereCount == 0 && topicSphereCount == 0)
            {
                enumNumber = (int)WidgetInput.noSphere;
            }
            else if (classSphereCount == 1 && topicSphereCount == 0)
            {
                enumNumber = (int)WidgetInput.oneClass;
                recentClassSphere.transform.SetParent(classObject.transform.Find("Socket").gameObject.transform);
                recentClassSphere.transform.localPosition = new Vector3(0, 0, 0);
            }
            else if (classSphereCount == 1 && topicSphereCount == 1)
            {
                enumNumber = (int)WidgetInput.topicAndClass;

                recentClassSphere.transform.SetParent(classObject.transform.Find("Socket").gameObject.transform);
                recentClassSphere.transform.localPosition = new Vector3(0, 0, 0);

                recentTopicSpheres[0].transform.SetParent(topicObject.transform.Find("Socket").gameObject.transform);
                recentTopicSpheres[0].transform.localPosition = new Vector3(0, 0, 0);
            }
            else if (classSphereCount == 0 && topicSphereCount == 2)
            {
                enumNumber = (int)WidgetInput.twoTopic;
            }
            //print((WidgetInput)enumNumber);
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
