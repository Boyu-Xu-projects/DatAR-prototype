using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplanationTextSwitch : MonoBehaviour
{
    public GameObject titleSlide;
    public GameObject checkTaskSlide;
    public GameObject smallTaskSlide;
    public GameObject mediumTaskSlide;
    public GameObject largeTaskSlide;

    private int index = 0;
    private int amount = 4;

    private void Start()
    {
        titleSlide.SetActive(true);
        checkTaskSlide.SetActive(false);
        smallTaskSlide.SetActive(false);
        mediumTaskSlide.SetActive(false);
        largeTaskSlide.SetActive(false);
    }

    public void IncreaseSlide()
    {
        index++;
        if (index == amount)
        {
            index = 0;
        }
        ChangeSlide();
    }

    public void DecreaseSlide()
    {
        index--;
        if (index == -1)
        {
            index = amount - 1;
        }
        ChangeSlide();
    }

    private void ChangeSlide()
    {
        switch (index)
        {
            case 0:
                titleSlide.SetActive(true);
                checkTaskSlide.SetActive(false);
                smallTaskSlide.SetActive(false);
                largeTaskSlide.SetActive(false);
                break;
            case 1:
                titleSlide.SetActive(false);
                checkTaskSlide.SetActive(true);
                smallTaskSlide.SetActive(false);
                largeTaskSlide.SetActive(false);
                break;
            case 2:
                titleSlide.SetActive(false);
                checkTaskSlide.SetActive(false);
                smallTaskSlide.SetActive(true);
                largeTaskSlide.SetActive(false);
                break;
            case 3:
                titleSlide.SetActive(false);
                checkTaskSlide.SetActive(false);
                smallTaskSlide.SetActive(false);
                largeTaskSlide.SetActive(true);
                break;
            default:
                break;
        }

        //switch (index)
        //{
        //    case 0:
        //        titleSlide.SetActive(true);
        //        smallTaskSlide.SetActive(false);
        //        largeTaskSlide.SetActive(false);
        //        break;
        //    case 1:
        //        titleSlide.SetActive(false);
        //        smallTaskSlide.SetActive(true);
        //        largeTaskSlide.SetActive(false);
        //        break;
        //    case 2:
        //        titleSlide.SetActive(false);
        //        smallTaskSlide.SetActive(false);
        //        largeTaskSlide.SetActive(true);
        //        break;
        //    default:
        //        break;
        //}
    }
}
