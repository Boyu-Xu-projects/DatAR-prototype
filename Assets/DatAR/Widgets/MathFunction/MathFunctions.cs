using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using TMPro;
using UniRx;
using UnityEngine.Serialization;
using Cysharp.Threading.Tasks;
using DatAR.Auxiliary.SharedScripts;
using DatAR.DataModels.Misc;
using DatAR.DataModels.Passables;
using DatAR.DataModels.Resources;
using Newtonsoft.Json;

namespace DatAR.Widgets.MathFunctions
{ 
    public class MathFunctions : MonoBehaviour, IQueryState
    {
        public BehaviorSubject<QueryState> IsLoading { get; }
        public string ErrorMessage { get; private set; }

        public DataflowInletL dataReceiver;
        public DataflowOutletL dataSender;
        public DataflowInletR dataReceiverR;
        public DataflowOutletR dataSenderR;

        //private Tuple<float, Passable> _awaitingPassable;

        public Toggle _SelectedToggle0; //intersection
        public Toggle _SelectedToggle1; //union
        public Toggle _SelectedToggle2; //difference


        
        // Start is called before the first frame update
        private void Start()
        {
            //var ItemsRight = passable.dataR.Resources.ToList();
            //var ItemsLeft = passable.dataL.Resources.ToList();


            

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
            
        public void Init()
        {
            //List<CooccurrenceListPassable> CoList1 = dataReceiver.dataL.ToList();
           // List<CooccurrenceListPassable> CoList2 = dataReceiverR.dataR.ToList();
        }

        void IntersectionValueChangedOccour(Toggle tgvalue)
        {
            if (tgvalue.isOn)
            {

                List<Passable> CoList1 = dataReceiver.dataL as List<Passable>;
                List<Passable> CoList2 = dataReceiverR.dataR as List<Passable>;
                IEnumerable<Passable> intersectionResult = CoList1.AsQueryable().Intersect(CoList2);
                // if (both.Count() < 1)
                //{
                // ErrorMessage = $"No Common topics found";
                //IsLoading.OnNext(QueryState.HasError);
                // }
               // both = new Passable<CooccurrenceListPassable>
               // dataSender.Send(both);
                //dataSenderR.Send(both);
            }
        }
        void UnionValueChangedOccour(Toggle tgvalue)
        {
            if (tgvalue.isOn) 
            {
                List<Passable> CoList1 = dataReceiver.dataL as List<Passable>;
                List<Passable> CoList2 = dataReceiverR.dataR as List<Passable>;
                IEnumerable<Passable> UnionResult = CoList1.AsQueryable().Union(CoList2);
            }
        }
        void DifferenceValueChangedOccour(Toggle tgvalue)
        {
            if (tgvalue.isOn) 
            {
                List<Passable> CoList1 = dataReceiver.dataL as List<Passable>;
                List<Passable> CoList2 = dataReceiverR.dataR as List<Passable>;
                IEnumerable<Passable> DifferenceResult1 = CoList1.Except(CoList2);
                IEnumerable<Passable> DifferenceResult2 = CoList2.Except(CoList1);
            }
        }
    }
}


