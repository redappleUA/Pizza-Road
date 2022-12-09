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
        int i = Random.Range(0, houses.Count);
        Instantiate(houses[i], spawnPos.position, houses[i].transform.rotation);
    }
}
