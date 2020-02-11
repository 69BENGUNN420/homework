using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooting2 : MonoBehaviour
{
	public float bulletSpeed = 10;
    public Rigidbody bullet;
    // Start is called before the first frame update
	void Fire()
     {
         Rigidbody bulletClone = (Rigidbody) Instantiate(bullet, transform.position, transform.rotation);
         bulletClone.velocity = transform.forward * bulletSpeed * Time.deltaTime;
     }
	 
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
         if (Input.GetKey("e")){
             Fire();
     }
    }
}
