using UnityEngine;
using System.Collections;

public class PerDepthFrameCallBack : Singleton<PerDepthFrameCallBack> {

	public void CallBack(Vector3[] m_points, int m_pointsCount)
	{
		StartCoroutine (CallBackCoroutine (m_points, m_pointsCount));
	}

	IEnumerator CallBackCoroutine(Vector3[] m_points, int m_pointsCount)
	{
//		yield return StartCoroutine( VoxelExtractionPointCloud.Instance.addAndRender(m_points, m_pointsCount) );
		yield return null;
		yield return StartCoroutine( HandTrackingScript.Instance.DoHandTracking(m_points, m_pointsCount) );
	}
}
