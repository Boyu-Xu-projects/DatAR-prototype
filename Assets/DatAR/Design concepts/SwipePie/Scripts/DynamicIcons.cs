using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class DynamicIcons : MonoBehaviour
{
    #region SINGLETON PATTERN
    private static DynamicIcons _instance;
    public static DynamicIcons Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<DynamicIcons>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("DynamicIcons");
                    _instance = container.AddComponent<DynamicIcons>();
                }
            }

            return _instance;
        }
    }
    #endregion

    //Widget icons
    public List<Sprite> iconSprites = new List<Sprite>();

    public GameObject topMiddleIcon;
    public GameObject topLeftIcon;
    public GameObject topRightIcon;

    public GameObject middleMiddleIcon;
    public GameObject middleLeftIcon;
    public GameObject middleRightIcon;

    public GameObject bottomMiddleIcon;
    public GameObject bottomLeftIcon;
    public GameObject bottomRightIcon;

    private List<int> topRowIndex = new List<int>();
    List<List<Sprite>> buttonRows = new List<List<Sprite>>();
    void Start()
    {
        //init the row index numbers
        topRowIndex.Add(0);
        topRowIndex.Add(1);
        topRowIndex.Add(2);

        //split list into a 2d array with rows of 3 sprites
        //Round up to the nearest three to keep consistent rows
        decimal totalIcons = iconSprites.Count;
        decimal rowAmount = totalIcons / 3.0m;
        int totalRowAmount = -1;
        if (rowAmount % 1 != 0)
        {
            bool divisionByThree = false;
            bool removedUsedIcons = false;
            int roundDown = 0;
            do
            {
                if (!removedUsedIcons)
                {
                    roundDown = (int)Math.Floor(rowAmount);
                    totalRowAmount = (int)totalIcons - (roundDown * 3);
                    removedUsedIcons = true;
                }

                if (totalRowAmount % 3 == 0)
                {
                    divisionByThree = true;
                    totalRowAmount = roundDown + 1;
                }
                else
                {
                    totalRowAmount++;
                }
            } while (!divisionByThree);
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
            for (int x = 0; x < 3; x++)
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
            indexAddition += 2;
        }

        ShowButtonRowIcons();
    }

    public void SwipeMenu(bool isUp)
    {
        for (int i = 0; i < topRowIndex.Count; i++)
        {
            int newIndex = 0;
            if (isUp)
            {
                newIndex = topRowIndex[i] + 1;
                if (newIndex == buttonRows.Count)
                {
                    newIndex = 0;
                }
            }
            else
            {
                newIndex = topRowIndex[i] - 1;
                if (newIndex == -1)
                {
                    newIndex = buttonRows.Count - 1;
                }
            }
            
            topRowIndex[i] = newIndex;
        }

        ShowButtonRowIcons();
    }

    // Update is called once per frame
    void Update()
    {
        //TODO: after that can try to switch rows based on arrow keys
        if (Input.GetKeyDown(KeyCode.LeftBracket))
        {
            SwipeMenu(true);
        }

        if (Input.GetKeyDown(KeyCode.RightBracket))
        {
            SwipeMenu(false);
        }

        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                // Check if hit.transform is middle collision trigger box
                if (hit.transform.gameObject.tag.ToString() == "SwipePie_Middle" || hit.transform.gameObject.tag.ToString() == "SwipePie_Left"
                    || hit.transform.gameObject.tag.ToString() == "SwipePie_Right")
                {
                    //get the current icon
                    GameObject iconButton = hit.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject;
                    SpriteRenderer renderer = iconButton.GetComponent<SpriteRenderer>();
                    string iconName = renderer.sprite.name;
                    if (iconName != null)
                    {
                        SpawnConnection.Instance.ChosenWidget(iconName);
                    }
                }

                if (hit.transform.gameObject.tag.ToString() == "UpArrow")
                {
                    SwipeMenu(true);
                }
                else if(hit.transform.gameObject.tag.ToString() == "DownArrow")
                {
                    SwipeMenu(false);
                }
            }
        }
    }

    private void ShowButtonRowIcons()
    {
        SpriteRenderer renderer = null;
        for (int y = 0; y < topRowIndex.Count; y++)
        {
            //Find out if there are one, two or three not null sprites
            int spriteCount = 0;
            foreach (var item in buttonRows[topRowIndex[y]])
            {
                if (item != null)
                {
                    spriteCount++;
                }
            }

            string location = "";
            if (y == 0)
            {
                location = "top";
            }
            else if (y == 1)
            {
                location = "middle";
            }
            else
            {
                location = "bottom";
            }
            if (spriteCount == 1)
            {
                for (int z = 0; z < 3; z++)
                {
                    if (z == 0)
                    {
                        if (location == "top")
                        {
                            renderer = topMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    else if (z == 1)
                    {
                        if (location == "top")
                        {
                            renderer = topLeftIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleLeftIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomLeftIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    else
                    {
                        if (location == "top")
                        {
                            renderer = topRightIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleRightIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomRightIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    renderer.sprite = buttonRows[topRowIndex[y]][z];
                }
            }
            else if (spriteCount == 2)
            {
                for (int z = 0; z < 3; z++)
                {
                    if (z == 0)
                    {
                        if (location == "top")
                        {
                            renderer = topLeftIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleLeftIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomLeftIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    else if (z == 1)
                    {
                        if (location == "top")
                        {
                            renderer = topRightIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleRightIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomRightIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    else
                    {
                        if (location == "top")
                        {
                            renderer = topMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    renderer.sprite = buttonRows[topRowIndex[y]][z];
                }
            }
            else
            {
                for (int z = 0; z < 3; z++)
                {
                    if (z == 0)
                    {
                        if (location == "top")
                        {
                            renderer = topLeftIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleLeftIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomLeftIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    else if (z == 1)
                    {
                        if (location == "top")
                        {
                            renderer = topMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomMiddleIcon.GetComponent<SpriteRenderer>();
                        }
                    }
                    else
                    {
                        if (location == "top")
                        {
                            renderer = topRightIcon.GetComponent<SpriteRenderer>();
                        }
                        else if (location == "middle")
                        {
                            renderer = middleRightIcon.GetComponent<SpriteRenderer>();
                        }
                        else
                        {
                            renderer = bottomRightIcon.GetComponent<SpriteRenderer>();
                        }
                    }

                    renderer.sprite = buttonRows[topRowIndex[y]][z];
                }
            }
        }
    }
}
