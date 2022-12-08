using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VehicleDestroy : MonoBehaviour
{
#warning NOT WORKING
    private void OnTriggerEnter(Collider other)
    {
        Destroy(other.gameObject);
    }
}
