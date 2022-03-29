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
}
