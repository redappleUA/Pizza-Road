using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HouseSpawner : MonoBehaviour
{
    [SerializeField] List<GameObject> houses = new();
    [SerializeField] Transform spawnPos;

    private void Start()
    {
        HouseSpawn();
    }
    void HouseSpawn()
    {
        Instantiate(houses[Random.Range(0, houses.Count)], spawnPos.position, Quaternion.Euler(0, 0, 0));
    }
}
