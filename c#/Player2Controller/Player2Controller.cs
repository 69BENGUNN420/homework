using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player2Controller : MonoBehaviour
{
	[Header("AI settings")]
	public GameObject target;
	public float Speed;
	public float distanceUntilChase;
	
    
    // Update is called once per frame
    void Update()
    {
		if ((target.transform.position - this.transform.position).sqrMagnitude < distanceUntilChase)
		{
			Vector3 newDirection = Vector3.RotateTowards(transform.position, target.transform.position - transform.position, Speed, 0.0f);
			Debug.DrawRay(transform.position, newDirection, Color.blue);
			transform.rotation = Quaternion.LookRotation(newDirection);
		}
		
    }
}
