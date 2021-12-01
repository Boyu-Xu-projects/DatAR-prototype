using DatAR.DataModels.Resources;
using System.Linq;
using UnityEngine;

public class TopicManufacturer : MonoBehaviour
{
    [SerializeField] private GameObject topicPrefab;
    public Transform defaultSpawnLocation;
    
    [SerializeField] [Range(0.0f, 1f)]
    public float pointScale = 0.25f;

    // Start is called before the first frame update
    void Awake()
    {
        if (defaultSpawnLocation == null)
        {
            defaultSpawnLocation = transform;
        }
    }

    public GameObject Spawn(IDynamicResource resource, Vector3 location = default, Transform parent = null)
    {
        if (parent == null)
        {
            parent = defaultSpawnLocation;
        }
        
        // Instantiate as gameobject variable so that it can be manipulated within loop
        GameObject topic = Instantiate(
            topicPrefab,
            parent);
            
        var resourceComponent = topic.GetComponent<ResourceComponent>();
        resourceComponent.Resource = resource;

        topic.transform.name = resourceComponent.Resource.Id;
        topic.transform.localPosition = location;
        topic.transform.localScale = new Vector3(pointScale, pointScale, pointScale);

        return topic;
    }
}
