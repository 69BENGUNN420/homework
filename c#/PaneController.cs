using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaneController : MonoBehaviour
{
	public float thrust = 10.0f;
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
			rb.transform.Rotate(thrust, 0, 0);
        } else  if (Input.GetKey("a"))
        {
			rb.transform.Rotate(0, 0, thrust);
        }else  if (Input.GetKey("s"))
        {
			rb.transform.Rotate(-thrust, 0, 0);
        }else  if (Input.GetKey("d"))
        {
			rb.transform.Rotate(0, 0, -thrust);
        }
		else  if (Input.GetKey(KeyCode.LeftArrow))
        {
			rb.transform.Rotate(0, -thrust, 0);
        }else  if (Input.GetKey(KeyCode.RightArrow))
        {
			rb.transform.Rotate(0, thrust, 0);
        }
    }
}
