using System;
using TMPro;
using UniRx;
using UnityEngine;

public class QueryStatusIndicator : MonoBehaviour
{
    [SerializeField] private GameObject statusSource;
    [SerializeField] private MeshRenderer queryStatusIndicator;
    [SerializeField] private TMP_Text errorMessageDisplay;
    [SerializeField] private GameObject loadingAnimation;

    private IQueryState _statusSource;

    void Start()
    {
        // Check if statusSource is valid
        _statusSource = statusSource.GetComponent<IQueryState>();
        if (_statusSource == null)
        {
            Debug.LogError("Received invalid status source");
            return;
        }

        if (_statusSource.IsLoading == null)
        {
            Debug.LogError("IsLoading is not initialized.");
            return;
        }

        if (queryStatusIndicator == null || errorMessageDisplay == null || loadingAnimation == null)
        {
            Debug.LogError("Missing references in QueryStatusIndicator.");
            return;
        }

        var material = queryStatusIndicator.material;

        // Subscribe to IsLoading observable
        _statusSource.IsLoading.DistinctUntilChanged().Sample(TimeSpan.FromMilliseconds(500)).Subscribe(queryState =>
        {
            if (errorMessageDisplay)
            {
                errorMessageDisplay.text = _statusSource.ErrorMessage;
                errorMessageDisplay.gameObject.SetActive(false);
            }

            // Set defaults
            loadingAnimation.SetActive(false);
            errorMessageDisplay?.gameObject.SetActive(false);

            switch (queryState)
            {
                case QueryState.IsEmpty:
                    material.color = Color.white;
                    break;
                case QueryState.IsLoading:
                    loadingAnimation.SetActive(true);
                    material.color = Color.magenta;
                    break;
                case QueryState.HasLoaded:
                    material.color = Color.green;
                    break;
                case QueryState.HasError:
                    material.color = Color.red;
                    errorMessageDisplay?.gameObject.SetActive(true);
                    break;
            }
        },
        error => Debug.LogError($"Error in IsLoading subscription: {error.Message}"),
        () => Debug.Log("IsLoading subscription completed.")
        );
    }
}
