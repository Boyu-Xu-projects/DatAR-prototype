using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public void SwipePieLeftThumb()
    {
        SceneManager.LoadScene(0);
    }

    public void SwipePieRightThumb()
    {
        SceneManager.LoadScene(1);
    }

    public void SwipePieRightSwipe()
    {
        SceneManager.LoadScene(2);
    }

    public void SwipePieLeftSwipe()
    {
        SceneManager.LoadScene(3);
    }

    public void WidgetPalletLeftTouch()
    {
        SceneManager.LoadScene(4);
    }

    public void WidgetPalletRightTouch()
    {
        SceneManager.LoadScene(5);
    }

    public void WidgetPalletLeftGaze()
    {
        SceneManager.LoadScene(6);
    }

    public void WidgetPalletRightGaze()
    {
        SceneManager.LoadScene(7);
    }

    public void PinchAndGrab()
    {
        SceneManager.LoadScene(8);
    }
}
