using UnityEngine;
using System.Collections;

public class Position : MonoBehaviour {

	void OnDrawGizoms ()
	{
		Gizmos.DrawWireSphere(transform.position,1);
	}
}
