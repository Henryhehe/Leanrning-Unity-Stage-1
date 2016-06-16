using UnityEngine;
using System.Collections;

public class DefendersSpawner : MonoBehaviour {

//	private Vector3 inputPosition = new Vector3(0,0,0);
	public Camera myCamera;
	private GameObject DefenderParent;

	// Use this for initialization

	void Start() {
		DefenderParent = GameObject.Find ("DefenderParent");
			if (!DefenderParent) {
				DefenderParent = new GameObject ("DefenderParent");
		}

	}

		
	void OnMouseDown ()
	{
//		print("clicked");
//		
		Vector2 PosVecor = SnapToGrid (CalculateWorldPointOfMouseClick ());
		// test if selected
		if (Button.DefenderSelected) {
		//test if the position has been taken 
				if(!GameObject.Find(PosVecor.ToString())){
			GameObject newDefender = Instantiate (Button.DefenderSelected, PosVecor, Quaternion.identity) as GameObject;
			newDefender.transform.parent = DefenderParent.transform;
			newDefender.name = PosVecor.ToString();
		}
		}
	}

//	Vector2 CalculateWorldPointOfMouseClick() {
//		int x,y;
//		Vector3 mousePosition = Input.mousePosition;
//		x = (int)(mousePosition.x)/70 - 8;
//		y = (int)(mousePosition.y)/68 - 2;
//		Vector2 vector = new Vector2(x,y);
//		return vector;
//	}
	Vector2 CalculateWorldPointOfMouseClick ()
	{
		float mouseX = Input.mousePosition.x;
		float mouseY = Input.mousePosition.y;
		float distanceFromCamera = 10f;
		Vector3 weirdTriplet = new Vector3(mouseX,mouseY,distanceFromCamera);
		Vector2 worldPos = myCamera.ScreenToWorldPoint(weirdTriplet);
		return worldPos;
	}
	Vector2 SnapToGrid(Vector2 rawWorldPos) {
		float newX = Mathf.RoundToInt (rawWorldPos.x);
		float newY = Mathf.RoundToInt (rawWorldPos.y);
		return new Vector2(newX, newY);
	}
}
