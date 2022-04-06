using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Node : MonoBehaviour
{
    GameObject epf;

    List<GameObject> edges = new List<GameObject>();
    List<SpringJoint> joints = new List<SpringJoint>(); 

    List<Node> connectedNodes = new List<Node>();
    List<Node> unconnectedNodes = new List<Node>(); 

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

  // TODO: Tune the parameters
  // 1. Collider radius
  // 2. Stop radius
  // 3. Force
    private void FixedUpdate()
    {
    /*
    // The last parameter is the mask. 6 is the layer for all nodes
    Collider[] colliders = Physics.OverlapSphere(transform.position, 0.05f, 1 << 6);
    foreach (var collider in colliders)
    {
        Rigidbody body = collider.GetComponent<Rigidbody>();
        if (body == null) 
            continue;

        Vector3 direction = transform.position - body.position;

        float distance = direction.magnitude;

        direction = direction.normalized;

        float stopRadius = 0.01f;
        if (distance < stopRadius) 
            continue;

        float force = 1;
        float forceRate = (force / distance);

        // -1 = Repulsion, 0 = Nothing, 1 = Attraction
        body.AddForce(direction * (forceRate / body.mass) * -1);
    }
    */

    // Attract connected nodes
    foreach (Node connectedNode in connectedNodes)
    {
        Rigidbody body = connectedNode.GetComponent<Rigidbody>();
        if (body == null) 
            continue;

        Vector3 direction = transform.position - body.position;

        float distance = direction.magnitude;

        direction = direction.normalized;

        float stopRadius = 0.01f;
        if (distance < stopRadius) 
            continue;

        float force = 0.1f;
        float forceRate = (force / distance);

        // -1 = Repulsion, 0 = Nothing, 1 = Attraction
        body.AddForce(direction * (forceRate / body.mass) * 1);
    }

    // Repel unconnected nodes
    foreach (Node unconnectedNode in unconnectedNodes)
    {
        Rigidbody body = GetComponent<Collider>().GetComponent<Rigidbody>();
        if (body == null) 
            continue;

        Vector3 direction = transform.position - body.position;

        float distance = direction.magnitude;

        direction = direction.normalized;

        float stopRadius = 0.01f;
        if (distance < stopRadius) 
            continue;

        float force = 0.1f;
        float forceRate = (force / distance);

        // -1 = Repulsion, 0 = Nothing, 1 = Attraction
        body.AddForce(direction * (forceRate / body.mass) * -1);
    }
  }

    public void SetEdgePrefab(GameObject epf){
        this.epf = epf;
    }

    public void AddEdge(Node n, GameObject goEdges){
        SpringJoint sj = gameObject.AddComponent<SpringJoint> ();  
        sj.autoConfigureConnectedAnchor = false;
        sj.anchor = new Vector3(0,0.5f,0);
        sj.connectedAnchor = new Vector3(0,0,0);    
        sj.enableCollision = true;
        sj.connectedBody = n.GetComponent<Rigidbody>();
        GameObject edge = Instantiate(this.epf, new Vector3(transform.position.x, transform.position.y, transform.position.z), Quaternion.identity);
        edge.name = $"{@n.name}2{@transform.name}";
        edge.transform.SetParent(goEdges.transform, false);
        edges.Add(edge);
        joints.Add(sj);

        connectedNodes.Add(n);
    }

    public void AddConnectedNode(Node n)
    {
        connectedNodes.Add(n);
    }

    public void SetUnconnectedNodes(List<Node> listOfNodes)
    {
        foreach(var node in listOfNodes)
        {
            if(!connectedNodes.Contains(node))
                unconnectedNodes.Add(node);
        }
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
