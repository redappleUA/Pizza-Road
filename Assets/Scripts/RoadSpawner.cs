using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class RoadSpawner : MonoBehaviour
{
    private Vector3 currentPosition = new(0, 0, 0);
    [SerializeField] List<GameObject> roads = new();
    private const float roadLength = 12;
    private int lastValue;

    [SerializeField] GameObject player;

    void Start()
    {
        Instantiate(roads[0], currentPosition, Quaternion.identity);
        currentPosition.x += roadLength;

        Instantiate(player, new Vector3(0, 2.4f, 0), Quaternion.identity);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            Instantiate(roads[UniqueRandom(0, roads.Count)], currentPosition, Quaternion.identity);
            currentPosition.x += roadLength;
        }   
    }

    int UniqueRandom(int min, int max)
    {
        int val = Random.Range(min, max);
        while (lastValue == val)
        {
            val = Random.Range(min, max);
        }
        lastValue = val;
        return val;
    }
}
