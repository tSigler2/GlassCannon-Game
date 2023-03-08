using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IcePuddleShot : MonoBehaviour
{
	[SerializeField] public Vector3 targetPos;
	[SerializeField] public float projectileSpeed = 10;
	[SerializeField] public float arcHeight = 1;
	[SerializeField] public int dam = 2;
	[SerializeField] public PuddleSlide puddlePrefab;
	public KeptData data;

	BoxCollider2D coll;
	private Animator anim;
	private Quaternion initialRotation;
	Vector3 startPos;
	Vector3 nextPos;

	// Start is called before the first frame update
	void Start()
	{
		coll = GetComponent<BoxCollider2D>();
		initialRotation = transform.rotation;
		anim = GetComponent<Animator>();
		startPos = transform.position;
		if (data.halfDamageBought == false)
		{
			dam = 2;
		}
		if (data.halfDamageBought == true)
		{
			dam = 1;
		}
	}

	// Update is called once per frame
	void Update()
	{
		// Computes the next position and travels there in an arc.
		float x0 = startPos.x;
		float x1 = targetPos.x;
		float dist = (x1 - x0); //Calculates distance between current position and target position
		float nextX = Mathf.MoveTowards(transform.position.x, x1, projectileSpeed * Time.deltaTime); //Moves towards the target
		float baseY = Mathf.Lerp(startPos.y, targetPos.y, (nextX - x0) / dist);
		float arc = arcHeight * (nextX - x0) * (nextX - x1) / (-0.25f * dist * dist); //Funny equation to calculate the arc
		nextPos = new Vector3(nextX, baseY + arc, transform.position.z);

		// Rotates to face the next position, and then move there
		transform.rotation = LookAt2D(nextPos - transform.position) * initialRotation;
		transform.position = nextPos;

		if (nextPos == targetPos) //Projectile destroys itself once the target is reached.
		{
			PuddleSlide puddle = Instantiate(puddlePrefab, targetPos, Quaternion.identity);
			Destroy(gameObject);
		}
		
	}

	static Quaternion LookAt2D(Vector2 forward) //Quaternion function that rotates the projectile to align with the forward x-axis.
	{
		return Quaternion.Euler(0, 0, Mathf.Atan2(forward.y, forward.x) * Mathf.Rad2Deg);
	}

	private void OnCollisionEnter2D(Collision2D collision) //Gives the player damage
	{
		if (collision.transform.tag == "Player")
		{
			collision.gameObject.GetComponent<PlayerController>().TakeDamage(dam);
			Destroy(gameObject);
		}
		
	}
}
