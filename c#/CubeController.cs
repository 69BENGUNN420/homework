using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeController : MonoBehaviour
{
	public float thrust = 10.0f;
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
        if (Input.GetKey("w"))
        {
			rb.AddForce(transform.forward * thrust);
        } else  if (Input.GetKey("a"))
        {
			rb.AddForce(-transform.right * thrust);
        }else  if (Input.GetKey("s"))
        {
			rb.AddForce(-transform.forward * thrust);
        }else  if (Input.GetKey("d"))
        {
			rb.AddForce(transform.right * thrust);
        }
		if (Input.GetAxis("Vertical")<-10){
			rb.transform.position= warpExit.transform.position;
		}			
    }
}
