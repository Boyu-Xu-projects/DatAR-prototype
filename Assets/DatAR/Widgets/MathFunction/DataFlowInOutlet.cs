using System;
using Cysharp.Threading.Tasks;
using DatAR.DataModels.Passables;
using UniRx;
using UnityEngine;
using UnityEngine.Serialization;

public class DataflowInOulet : MonoBehaviour
{
    private IDisposable _dataSubscription;
    public readonly BehaviorSubject<Passable> data;
    [SerializeField] private DataflowOutlet inputGameObject;

    [SerializeField] private MeshRenderer inlet;
    private Color _originalColor;

    [SerializeField] private LineRenderer dataLinkPrefab;
    private LineRenderer _dataLink;

    private TriggerPassthroughComponent _linkTrigger;

    public readonly BehaviorSubject<Passable> dataP;

    public MeshRenderer outlet;
    //private Color _originalColor;

    public DataflowOutlet()
    {
        // Instantiate with an empty _data object
        data = new BehaviorSubject<Passable>(
            new Passable());
    }


    public void Send(Passable newData)
    {
        PulseIndicator();
        data.OnNext(newData);
    }

 
    public DataflowInlet()
    {
        // Instantiate with an empty _data object
        dataP = new BehaviorSubject<Passable>(
            new Passable());
    }

    void Start()
    {
        if (outlet)
        {
            _originalColor = outlet.material.color;
            var tag = outlet.gameObject.AddComponent<MyControllerComponent>();
            tag.myController = gameObject;
        }
        if (inlet)
        {
            _originalColor = inlet.material.color;

            // Currently the inlet is necessarily the trigger object.
            StartTriggerListenerOn(inlet.gameObject);
        }

        StartDataListener();
    }

    private void StartDataListener()
    {
        if (inputGameObject)
        {
            _dataSubscription?.Dispose();

            // Pass on any events from the linked game object
            _dataSubscription = inputGameObject.GetComponent<DataflowOutlet>()
                .data
                .Sample(TimeSpan.FromMilliseconds(200)) // Don't take in more updates once per time unit
                .Subscribe(incomingData =>
                {
                    PulseIndicator();
                    dataP.OnNext(incomingData);
                    DrawLink();
                });
        }
    }

    private void StartTriggerListenerOn(GameObject linkTrigger)
    {
        _linkTrigger = linkTrigger.AddComponent<TriggerPassthroughComponent>();

        _linkTrigger.collideTrigger.Subscribe((other) =>
        {
            var dataSender = other.GetComponent<MyControllerComponent>()?
                .myController?.GetComponent<DataflowOutlet>();
            if (!dataSender)
            {
                return;
            }

            SetInputGameObject(dataSender);
        });
    }

    private async void PulseIndicator()
    {
        if (inlet)
        {
            inlet.material.color = Color.green;
            await UniTask.Delay(TimeSpan.FromSeconds(.5));
            inlet.material.color = _originalColor;
        }
        if (outlet)
        {
            outlet.material.color = Color.cyan;
            await UniTask.Delay(TimeSpan.FromSeconds(.5));
            outlet.material.color = _originalColor;
        }
    }

    public void SetInputGameObject(DataflowOutlet incomingGameObject)
    {
        if (incomingGameObject == inputGameObject)
        {
            return;
        }

        inputGameObject = incomingGameObject;
        StartDataListener();
    }

    private void OnDestroy()
    {
        _dataSubscription?.Dispose();
    }

    private void DrawLink()
    {
        if (_dataLink)
        {
            Destroy(_dataLink.gameObject);
        }
        _dataLink = Instantiate(dataLinkPrefab);
        UpdateLinkPosition();
    }

    private void LateUpdate()
    {
        UpdateLinkPosition();
    }

    private void UpdateLinkPosition()
    {
        if (!inputGameObject && _dataLink)
        {
            Destroy(_dataLink.gameObject);
            return;
        }

        if (_dataLink)
        {
            _dataLink.SetPosition(0, inputGameObject.outlet.transform.position);
            _dataLink.SetPosition(1, inlet.transform.position);
        }
    }
}
