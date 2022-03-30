using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FilterRangeFake : MonoBehaviour
{
    #region SINGLETON PATTERN
    private static FilterRangeFake _instance;
    public static FilterRangeFake Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<FilterRangeFake>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("FilterRangeFake");
                    _instance = container.AddComponent<FilterRangeFake>();
                }
            }

            return _instance;
        }
    }
    #endregion

    public Material inRange;
    public Material outOfRange;

    private List<GameObject> _brainTopicsInFilter = new List<GameObject>();
    private System.Random rnd = new System.Random();
    private bool firstSet = false;

    public void SetList(List<GameObject> brainTopicsInFilter)
    {
        _brainTopicsInFilter = brainTopicsInFilter;
    }

    public void SetFilter()
    {
        foreach (var item in _brainTopicsInFilter)
        {
            item.GetComponent<Renderer>().material = inRange;
        }

        int brainTopicAmount = _brainTopicsInFilter.Count;
        int randomHits = rnd.Next(brainTopicAmount);
        for (int i = 0; i < randomHits; i++)
        {
            int randomIndex = rnd.Next(brainTopicAmount);
            _brainTopicsInFilter[randomIndex].GetComponent<Renderer>().material = outOfRange;
        }
    }
}
