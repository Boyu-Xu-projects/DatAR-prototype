using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Node : MonoBehaviour
{
  GameObject epf;

  List<GameObject> edges = new List<GameObject>();
  List<SpringJoint> joints = new List<SpringJoint>();  

  void Update(){    
    int i = 0;
    foreach (GameObject edge in edges){
      edge.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
      SpringJoint sj = joints[i];
      GameObject target = sj.connectedBody.gameObject;
      edge.transform.LookAt(target.transform);
      Vector3 ls = edge.transform.localScale;
      ls.z = Vector3.Distance(transform.position, target.transform.position);
      edge.transform.localScale = ls;
      edge.transform.position = new Vector3((transform.position.x+target.transform.position.x)/2,
              (transform.position.y+target.transform.position.y)/2,
              (transform.position.z+target.transform.position.z)/2);
      i++;
    }
  }

  public void SetEdgePrefab(GameObject epf){
    this.epf = epf;
  }

  public void AddEdge(Node n){
    SpringJoint sj = gameObject.AddComponent<SpringJoint> ();  
    sj.autoConfigureConnectedAnchor = false;
    sj.anchor = new Vector3(0,0.5f,0);
    sj.connectedAnchor = new Vector3(0,0,0);    
    sj.enableCollision = true;
    sj.connectedBody = n.GetComponent<Rigidbody>();
    //GameObject edge = Instantiate(this.epf, new Vector3(transform.position.x, transform.position.y, transform.position.z), Quaternion.identity);
    //edges.Add(edge);
    joints.Add(sj);
  }

  public void SetClass(string brainClass)
  {
    switch (brainClass)
    {
      case "lbd:region":
        GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_BrainRegion");
        break;
      case "lbd:transmitter":
        GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Neurotransmitter");
        break;
      case "lbd:function":
        GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_CognitiveFunction");
        break;
      case "lbd:protein":
        GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Protein");
        break;
      case "lbd:neuron":
        GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Neuron");
        break;
      case "lbd:gene":
        GetComponent<Renderer>().material = Resources.Load<Material>("BrainClasses/Concept_Gene");
        break;
    }
  }
}
