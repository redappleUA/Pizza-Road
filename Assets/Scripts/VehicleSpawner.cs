using System.Collections;
using UnityEngine;

public class VehicleSpawner : MonoBehaviour
{
    [SerializeField] GameObject vehicle;
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
            Instantiate(vehicle, spawnPos.position, Quaternion.identity);
        }
    }
}
