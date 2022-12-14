using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Factory : MonoBehaviour
{
    [SerializeField] List<GameObject> roads = new();
    [SerializeField] List<GameObject> houses = new();
    [SerializeField] GameObject playerPrefab;
    [SerializeField] GameObject pizzaHouse;
    [SerializeField] GameObject pizzaPrefab;
    [SerializeField] GameObject finishTrigger;
    public static int spawnCount { get; set; } = 4;

    private GameObject player;
    private const float roadLength = 12;
    private Vector3 currentPosition = new(0, 0, 0);
    private int lastValue;

    public List<GameObject> PizzaList { get; set; } = new();
    public int PizzaCount { get; set; }

    void Start()
    {
        for (int i = 0; i < 2; i++)
        {
            Instantiate(roads[0], currentPosition, Quaternion.identity);
            currentPosition.x += roadLength;
        }
        SpawnRoad();

        player = GameObject.FindGameObjectWithTag("Player");

        Instantiate(pizzaHouse, new Vector3(8.5f, 0, 10), Quaternion.Euler(0, -90, 0));

        PizzaSpawn();
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
    /// <summary>
    /// Spawns the road
    /// </summary>
    void SpawnRoad()
    {
        for (int i = 0; i <= spawnCount; i++)
        {
            Instantiate(roads[UniqueRandom(1, roads.Count)], currentPosition, Quaternion.identity);
            currentPosition.x += roadLength;

            Instantiate(roads[0], currentPosition, Quaternion.identity);
            currentPosition.x += roadLength;

            if(i == spawnCount)
            {
                Instantiate(roads[0], currentPosition, Quaternion.identity);
                Instantiate(finishTrigger, currentPosition, Quaternion.identity);

                currentPosition.x += roadLength;
                Instantiate(houses[Random.Range(0, houses.Count)], currentPosition, Quaternion.Euler(0, -90, 0));
            }
        }
    }
    /// <summary>
    /// Spawns pizza's on the back of bike
    /// </summary>
    void PizzaSpawn()
    {
        PizzaCount = 4;
        Vector3 pizzaSpawnPos = new(-1.868f, 1.378f, 0.013f);

        for (int i = 0; i < PizzaCount; i++)
        {
            var pizza = Instantiate(pizzaPrefab, pizzaSpawnPos, Quaternion.Euler(0, 0, 9.648f), player.transform);
            pizzaSpawnPos.y += 0.1f;
            pizzaSpawnPos.x -= 0.03f;
            PizzaList.Add(pizza);
        }
    }
}
