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

     


/// <summary>
/// / Tashkhis toggle entekhab shode /////
/// </summary>
        

        
        
 
        

        void IntersectionValueChangedOccour(Toggle tgvalue)
        {
            if (tgvalue.isOn)
            {
                
                var both = dataReceiver.Intersect(dataReceiverR);
               // if (both.Count() < 1)
                //{
               // ErrorMessage = $"No Common topics found";
                //IsLoading.OnNext(QueryState.HasError);
               // }
                dataSender.Send(both);
                dataSenderR.Send(both);
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
}


