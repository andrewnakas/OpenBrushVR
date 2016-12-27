using UnityEngine;
using System.Collections;

public class HandTrackingScript : Singleton<HandTrackingScript> {

	IndexStack<int> frontRenderer;
	int[] pointArr;
	const int frontPointCount = 3000;
	
	IndexStack<int> handPoints;
	int[] handPointArr;
	const int handPointCount = 1000;
	
	int debug_iter = 0;
	public Camera camera;
	public GameObject pointer;
	public Vector3 prevpointer;
	public Vector3 smoothPointer;


	// Use this for initialization
	void Start () {
		pointArr = new int[frontPointCount];
		frontRenderer = new IndexStack<int> (pointArr);
		
		handPointArr = new int[frontPointCount];
		handPoints = new IndexStack<int> (handPointArr);
	}
	public class IndexStack<T>
	{
		T[] array;
		int size;
		int count;

		public IndexStack (T[] _array)
		{
			size = _array.Length;
			array = _array;
			count = 0;
		}

		public void push (T v)
		{
			array [count++] = v;
		}

		public T pop ()
		{
			return array [--count];
		}

		public T peek (int index)
		{
			return array [index];
		}

		public bool isEmpty ()
		{
			return count == 0;
		}

		public int getCount ()
		{
			return count;
		}

		public T[] getArray ()
		{
			return array;
		}

		public void clear ()
		{
			count = 0;
		}
	}

	public IEnumerator DoHandTracking( Vector3[] m_points, int m_pointsCount )
	{
		int minPoint = -1;
		float sqrMinDist = 10000;
		frontRenderer.clear();
		for (int i = 0; i < m_pointsCount; ++i)
		{
			float sqrDistToCam = (camera.transform.position - m_points[i]).sqrMagnitude; 
			
			if( sqrDistToCam < 0.5f)
			{	
				if(frontRenderer.getCount() < frontPointCount)
					frontRenderer.push (i);
				
				if( sqrDistToCam < sqrMinDist )
				{
					sqrMinDist = sqrDistToCam;
					minPoint = i;
				}
			}

		}

		yield return null;

		if(minPoint != -1)
		{
			handPoints.clear();
			Vector3 minPointP = m_points[ minPoint ];
			bool canTrack = true;
			for (int i = 0; i < frontRenderer.getCount(); ++i)
			{
				int index = frontRenderer.peek (i);
				
				float sqrDistToCam = (minPointP - m_points[ index ]).sqrMagnitude;
				
				if(handPoints.getCount() >= handPointCount)
				{
					canTrack = false;
					break;
				}
				
				if( sqrDistToCam < 0.04f)
				{
					handPoints.push (index);
				}
				
			}

			yield return null;
			
			canTrack &= handPoints.getCount() > 30;
			
			if(canTrack)
			{
				
				pointer.SetActive(true);
				
				Vector3 centroid = m_points[ minPoint ];
				
				for(int k=0; k<3; k++)
				{
					Vector3 nextCentroid = Vector3.zero;
					int groupCount =  0;
					for(int i=0;i<handPoints.getCount();i++)
					{
						Vector3 p = m_points[ handPoints.peek(i) ];
						float sqrDist = (p - centroid).sqrMagnitude;
						
						if(sqrDist < 0.04)
						{
							nextCentroid += p;
							groupCount++;
						}
					}
					
					nextCentroid /= groupCount;
					debug_iter = k;
					if( (centroid - nextCentroid).sqrMagnitude < 0.0004 )
						break;
					
					centroid = nextCentroid;

					yield return null;
				}
			//	pointer.transform.position=	Vector3.Lerp (prevpointer, pointer.transform.position, 5);

				pointer.transform.position = Vector3.Lerp(prevpointer, centroid, 100* Time.deltaTime);

				//prevpointer = pointer.transform.position;
				//pointer.transform.position = centroid;
				prevpointer =  centroid;
			}
			else
			{
			//	pointer.SetActive(false);
			}
		}
		else
		{
			//pointer.SetActive(false);
		}
	}
	

}
