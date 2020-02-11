using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooting : MonoBehaviour
{
	public float bulletSpeed = 10;
    public Rigidbody bullet;
	public Transform tagret;
	public float offset = 2;
	private int Seconds = 5;
    // Start is called before the first frame update
	void Fire()
     {
         Rigidbody bulletClone = (Rigidbody) Instantiate(bullet, transform.position + transform.forward*offset, transform.rotation);
		 bulletClone.velocity = transform.forward * bulletSpeed * Time.deltaTime;
		 
     }
	 
    void Start()
    {
        
    }
	

    // Update is called once per frame
    void Update()
    {
         if (Input.GetKey("e")){
             Vector3 targetDirection = tagret.position - transform.position;
			 float singleStep = bulletSpeed * Time.deltaTime;
			 Vector3 newDirection = Vector3.RotateTowards(transform.position, targetDirection, singleStep, 0.0f);
			 Debug.DrawRay(transform.position, newDirection, Color.red, 5.0f);
			 transform.rotation = Quaternion.LookRotation(newDirection);
			 Fire();
     }
    }
}
