using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VehicleSpawner : MonoBehaviour
{
    [SerializeField] List<GameObject> vehicles = new();
    [SerializeField] Transform spawnPos;
    [SerializeField] float minSeparationTime;
    [SerializeField] float maxSeparationTime;

    private void Start()
    {
        StartCoroutine(SpawnVehicle());
    }

    private IEnumerator SpawnVehicle()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(minSeparationTime, maxSeparationTime));
            Instantiate(vehicles[Random.Range(0, vehicles.Count)], spawnPos.position, Quaternion.Euler(0, 180, 0));
        }
    }
}
