using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DynamicPalletIcons : MonoBehaviour
{
    #region SINGLETON PATTERN
    private static DynamicPalletIcons _instance;
    public static DynamicPalletIcons Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<DynamicPalletIcons>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("DynamicPalletIcons");
                    _instance = container.AddComponent<DynamicPalletIcons>();
                }
            }

            return _instance;
        }
    }
    #endregion

    public List<Sprite> iconSprites = new List<Sprite>();

    public GameObject topLeftIcon;
    public GameObject topMiddleIcon;
    public GameObject topRightIcon;

    public GameObject middleLeftIcon;
    public GameObject middleMiddleIcon;
    public GameObject middleRightIcon;

    public GameObject bottomLeftIcon;
    public GameObject bottomMiddleIcon;
    public GameObject bottomRightIcon;

    private int rowIndex = 0;
    private List<List<Sprite>> buttonRows = new List<List<Sprite>>();
    int totalRowAmount = -1;

    private void Start()
    {
        //split list into a 2d array with 9 sprites per row
        //Round up to the nearest 9 to keep consistent rows
        decimal totalIcons = iconSprites.Count;
        decimal rowAmount = totalIcons / 9.0m;
        //Check if the rowamount is a integer
        if (rowAmount % 1 != 0)
        {
            bool divisionByNine = false;
            bool removedUsedIcons = false;
            int roundDown = 0;
            do
            {
                if (!removedUsedIcons)
                {
                    roundDown = (int)Math.Floor(rowAmount);
                    totalRowAmount = (int)totalIcons - (roundDown * 9);
                    removedUsedIcons = true;
                }

                if (totalRowAmount % 9 == 0)
                {
                    divisionByNine = true;
                    totalRowAmount = roundDown + 1;
                }
                else
                {
                    totalRowAmount++;
                }
            } while (!divisionByNine);
        }
        else
        {
            totalRowAmount = (int)rowAmount;
        }

        //Take all the sprites and divide them into rows that can be used later on
        //if there is no sprite available just keep it null
        int indexAddition = 0;
        for (int i = 0; i < totalRowAmount; i++)
        {
            List<Sprite> rowIcons = new List<Sprite>();
            for (int x = 0; x < 9; x++)
            {
                int index = i + x + indexAddition;
                if (index >= iconSprites.Count)
                {
                    rowIcons.Add(null);
                }
                else
                {
                    rowIcons.Add(iconSprites[index]);
                }
            }
            buttonRows.Add(rowIcons);
            indexAddition += 8;
        }

        UpdateIcons();
    }

    public void UpArrow()
    {
        rowIndex++;
        if (rowIndex == totalRowAmount)
        {
            rowIndex = 0;
        }
        UpdateIcons();
    }

    public void DownArrow()
    {
        rowIndex++;
        if (rowIndex == totalRowAmount)
        {
            rowIndex = 0;
        }
        UpdateIcons();
    }

    private void UpdateIcons()
    {
        SpriteRenderer renderer = null;
        for (int z = 0; z < 9; z++)
        {
            switch (z)
            {
                case 0:
                    renderer = topLeftIcon.GetComponent<SpriteRenderer>();
                    break;
                case 1:
                    renderer = topMiddleIcon.GetComponent<SpriteRenderer>();
                    break;
                case 2:
                    renderer = topRightIcon.GetComponent<SpriteRenderer>();
                    break;
                case 3:
                    renderer = middleLeftIcon.GetComponent<SpriteRenderer>();
                    break;
                case 4:
                    renderer = middleMiddleIcon.GetComponent<SpriteRenderer>();
                    break;
                case 5:
                    renderer = middleRightIcon.GetComponent<SpriteRenderer>();
                    break;
                case 6:
                    renderer = bottomLeftIcon.GetComponent<SpriteRenderer>();
                    break;
                case 7:
                    renderer = bottomMiddleIcon.GetComponent<SpriteRenderer>();
                    break;
                case 8:
                    renderer = bottomRightIcon.GetComponent<SpriteRenderer>();
                    break;
                default:
                    break;
            }

            renderer.sprite = buttonRows[rowIndex][z];
        }
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                // Check if hit.transform is middle collision trigger box
                if (hit.transform.gameObject.tag.ToString() == "PalletIcon")
                {
                    //get the current icon
                    GameObject iconButton = hit.transform.GetChild(0).gameObject;
                    SpriteRenderer renderer = iconButton.GetComponent<SpriteRenderer>();
                    string iconName = renderer.sprite.name;
                    if (iconName != null)
                    {
                        SpawnConnection.Instance.ChosenWidget(iconName);
                    }
                }
                else if(hit.transform.gameObject.tag.ToString() == "UpArrow")
                {
                    rowIndex++;
                    if (rowIndex == totalRowAmount)
                    {
                        rowIndex = 0;
                    }
                    UpdateIcons();
                }
                else if(hit.transform.gameObject.tag.ToString() == "DownArrow")
                {
                    rowIndex--;
                    if (rowIndex == -1)
                    {
                        rowIndex = totalRowAmount - 1;
                    }
                    UpdateIcons();
                }
            }
        }
    }
}
