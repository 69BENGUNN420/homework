using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
	public int Respawn = -10;
	public Rigidbody warpExit;
	public float thrust = 10.0f;
	public float rotationSpeed = 4.0f;
	public Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>(); 
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey("w"))
        {
			rb.transform.Translate(Vector3.forward * Time.deltaTime * thrust);
        }if (Input.GetKey("a"))
        {
			rb.transform.Rotate(0, -rotationSpeed, 0);
			
        }if (Input.GetKey("s"))
        {
			rb.transform.Translate(-Vector3.forward * Time.deltaTime * thrust);
        }if (Input.GetKey("d"))
        {
			rb.transform.Rotate(0, rotationSpeed, 0);
        }
		if (rb.transform.position.y<Respawn){
			rb.transform.position= warpExit.transform.position;
		}	
		
    }
}
