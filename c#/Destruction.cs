﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destruction : MonoBehaviour
{
	public int Seconds = 5;
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject,Seconds);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
