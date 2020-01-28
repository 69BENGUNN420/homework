using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour
{
	public int Respawn = -10;
	public Rigidbody rb;
	public Rigidbody warpExit;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>(); 
    }

    // Update is called once per frame
    void Update()
    {
        if (rb.transform.position.y<Respawn){
			rb.transform.position= warpExit.transform.position;
		}	
    }
}
