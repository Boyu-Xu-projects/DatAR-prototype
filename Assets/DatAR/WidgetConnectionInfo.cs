using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum OutletType
{
    Outlet,
    Inlet,
    OutletAndInlet,
    None
}

public enum WidgetName
{
    VisualisationBrainModel,
    VisualisationTopicModel,
    ManipulationMinMaxFilter,
    QueryCooccurrences,
    QueryConceptsOfClass,
    VisualisationInspectorDataflow,
    VisualisationInspectorResourceSphere,
    ExportConceptPair,
    VisualisationDiseaseRelations
}

public class WidgetConnectionInfo : MonoBehaviour
{
    [SerializeField] public int classSphereAmount;
    [SerializeField] public int topicSphereAmount;
    [SerializeField] public OutletType outletType;
    [SerializeField] public List<WidgetName> connectionWidgets;
    [SerializeField] public string topicOrDiseaseSocketName;
    [SerializeField] public string classOrRegionSocketName;
    [SerializeField] public string sentenceSocketName;
}
