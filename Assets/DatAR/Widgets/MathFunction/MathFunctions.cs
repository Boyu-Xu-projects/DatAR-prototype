using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using DatAR.DataModels.Passables;
using TMPro;
using UniRx;
using UnityEngine.Serialization;


public class MathFunctions : MonoBehaviour
{
    public DataflowInletL dataReceiver;
    public DataflowOutletL dataSender;
    public DataflowInletR dataReceiverR;
    public DataflowOutletR dataSenderR;

    public Toggle _SelectedToggle0;
    public Toggle _SelectedToggle1;
    public Toggle _SelectedToggle2;


    // Start is called before the first frame update
    private void Start()
    {
        _SelectedToggle0.onValueChanged.AddListener(delegate {
            IntersectionValueChangedOccour(_SelectedToggle0);
        });
        _SelectedToggle1.onValueChanged.AddListener(delegate {
            UnionValueChangedOccour(_SelectedToggle1);
        });
        _SelectedToggle2.onValueChanged.AddListener(delegate {
            DifferenceValueChangedOccour(_SelectedToggle2);
        });

    }

    ////////////////////////////////// Copy from QueryCooccurences.cs file //////////////////////////////////
    
    try
    {
                var sparqlService = _services.GetComponent<SparqlService>();
                 var passable = new Passable<CooccurrenceListPassable>
    {
        data = await sparqlService.GetCooccurrenceStatementsWithConcept(
            conceptReceptacle.SlottedResourceContainer.Resource.Id,
            classReceptacle.SlottedResourceContainer.Resource.Id)
    };
                if (passable.data.Resources.Count< 1)
                {
                    ErrorMessage = $"No co-occurrences found between {conceptReceptacle.SlottedResourceContainer.Resource.Label} and items of type {classReceptacle.SlottedResourceContainer.Resource.Label}";
                    IsLoading.OnNext(QueryState.HasError);
                    return;
                }

        dataSender.Send(passable);
        IsLoading.OnNext(QueryState.HasLoaded);
    }
   


/// <summary>
/// //////////////////// Tashkhis toggle entekhab shode ///////////////////
/// </summary>

// Update is called once per frame
    void IntersectionValueChangedOccour(Toggle tgvalue)
{
    if (tgvalue.isOn)
    {

        IEnumerable both = list1.Intersect(list2);
        if (both.Count() == 2)
        {
            //do...
        }
    }
}
void UnionValueChangedOccour(Toggle tgvalue)
{
    if (tgvalue.isOn) { }
}
void DifferenceValueChangedOccour(Toggle tgvalue)
{
    if (tgvalue.isOn) { }
}
}


