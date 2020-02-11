using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour
{
	private Vector3 lastVelocity;
	private Vector3 goalVelocity;
	private Rigidbody myRigidbody;
	public float bulletSpeed = 10;
	void FixedUpdate()
	{
		lastVelocity = myRigidbody.velocity;
		myRigidbody.velocity = goalVelocity;
		myRigidbody.velocity = transform.forward * bulletSpeed * Time.deltaTime;
	}

	void OnCollisionEnter(Collision col)
	{
		if (col.gameObject.tag == "wall")
		{
			ContactPoint cp = col.contacts[0];
			goalVelocity = Vector3.Reflect(lastVelocity, cp.normal);
		}
	}
    // Start is called before the first frame update
    void Start()
    {
        
    }
		
		
    // Update is called once per frame
    void Update()
    {
        
    }
}
