using UnityEngine;
using System.Collections;

public class EnemySpawner : MonoBehaviour {

	public GameObject enemyPrefab;
	public float width = 10f;
	public float height = 5f;
	public float speed = 0.12f;
	public float spawnDelay = 2.0f;

	private int i = 1;
	private bool hitEdge = false;
	private float leftEdgePos;
	private float rightEdgePos;
	// Use this for initialization
	void Start ()
	{
	// set the game space
		float distanceToCamera = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftEdge = Camera.main.ViewportToWorldPoint(new Vector3(0,0,distanceToCamera));
		Vector3 rightEdge = Camera.main.ViewportToWorldPoint(new Vector3(1,0,distanceToCamera));
		leftEdgePos = leftEdge.x;
		rightEdgePos = rightEdge.x;
		SpawnUntilFull();
	}

	void SpawnUntilFull ()
	{
		Transform FreePosition = NextFreePosition();
		if (FreePosition) {
			GameObject enemy = Instantiate(enemyPrefab,FreePosition.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = FreePosition;
		}
		if(NextFreePosition()) {
		Invoke("SpawnUntilFull",spawnDelay);
		}
	}
	public void OnDrawGizmos ()
	{

	Gizmos.DrawWireCube(transform.position,new Vector3(width,height,0));
	}
	
	// Update is called once per frameb
	void Update ()
	{
		if (hitEdge) {
			i = -i;
			hitEdge = false;
		}
		if (!hitEdge) {
			move ();
		}
		if (AllMembersDead ()) {
			Debug.Log ("All dead");
			SpawnUntilFull ();
		}
	}
	void move (){
		transform.position = new Vector3 (this.transform.position.x + speed*i, this.transform.position.y, this.transform.position.z);
		// this is to test the edge condition;
		if (this.transform.position.x > rightEdgePos - 2.0f || this.transform.position.x < leftEdgePos + 2.0f) {
			hitEdge = true;
		}
	}
	Transform NextFreePosition(){
		foreach(Transform childPositionGameObject in transform) {
			if (childPositionGameObject.childCount == 0){
				return childPositionGameObject;
				}
			}
			return null;
		}
	bool AllMembersDead (){
	// going over child formation in the spawner 
		foreach (Transform childPositionGameObject in transform) {
			if(childPositionGameObject.childCount!=0)
				return false;
		}
			return true;
	}
	void SpwnEnemies() {
		foreach (Transform child in transform) {
		GameObject enemy = Instantiate (enemyPrefab, child.transform.position, Quaternion.identity) as GameObject;
		enemy.transform.parent = child;
//		leftEdgePos = leftEdge.x;
//		rightEdgePos = rightEdge.x;
		}

	}
	}