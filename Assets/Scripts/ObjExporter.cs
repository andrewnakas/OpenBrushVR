

using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using UnityEngine.SceneManagement;


public class ObjExporter : MonoBehaviour {
	//private TangoApplication m_tangoApplication;
	//public GameObject tangostuff;
	public static int ker; 
	public static int oker;
	//public GameObject status; 
	//public static Text texs;
	public void Mesherexporter(){
		//m_tangoApplication.Set3DReconstructionEnabled(m_isEnabled);
		//m_tango.OnTangoServiceDisconnected();
		//	ITangoLifecycle.
		DoExport (false);
		//SceneManager.LoadScene("ExperimentalMeshBuilderWithColor");
		//	status.SetActive(true);
	}



	private static int StartIndex = 0;

	public void Start()
	{

		//	ObjExporter.texs = status.GetComponent<Text> ();
		StartIndex = 0;
	}
	public static void End()
	{
		StartIndex = 0;
	}


	public string MeshToString(MeshFilter mf, Transform t) 
	{    
		Vector3 s = t.localScale;
		Vector3 p = t.localPosition;
		Quaternion r = t.localRotation;


		int numVertices = 0;
		Mesh m = mf.sharedMesh;
		if (!m) {
			return "####Error####";
		}
		Material[] mats = mf.GetComponent<Renderer> ().sharedMaterials;

		StringBuilder sb = new StringBuilder ();

		Vector3[] normals = m.normals; 

		m.normals = normals;

		m.triangles = m.triangles.Reverse ().ToArray (); //

		ker = m.vertices.Length;
		//ker = m.vertices.Length;
		for (int i = 0; i < m.vertices.Length; i++) {

			numVertices++;
			sb.Append(string.Format("v {0} {1} {2}", t.TransformPoint(m.vertices[i]).x, t.TransformPoint(m.vertices[i]).y, t.TransformPoint(m.vertices[i]).z));
			oker = i;

			//textstatus.txer.text = 
			//	texs.text = i.ToString () + "/" + m.vertices.ToString ();
			if (PlayerPrefs.GetInt ("textures") != 1) {
				sb.Append (string.Format (" {0} {1} {2} \n", m.colors [i].r, m.colors [i].g, m.colors [i].b));
			} else {

				sb.Append ("\n");
			}
		}

		/*
		foreach (Vector3 vv in m.vertices) {
			Vector3 v = t.TransformPoint (vv);
			numVertices++;
			sb.Append (string.Format ("v {0} {1} {2}\n", v.x, v.y, -v.z));
		}

		*/
		sb.Append ("\n");
		foreach (Vector3 nn in m.normals) {
			Vector3 v = r * nn;
			sb.Append (string.Format ("vn {0} {1} {2}\n", -v.x, -v.y, v.z));
		}
		sb.Append("\n");
		foreach(Vector2 v in m.uv) {
			sb.Append(string.Format("vt {0} {1}\n",v.x,v.y));
		}


		for (int material=0; material < m.subMeshCount; material ++) {
			sb.Append ("\n");
			sb.Append ("usemtl ").Append (mats [material].name).Append ("\n");
			sb.Append ("usemap ").Append (mats [material].name).Append ("\n");

			int[] triangles = m.GetTriangles (material);
			for (int i=0; i<triangles.Length; i+=3) {
				sb.Append (string.Format ("f {0}/{0}/{0} {1}/{1}/{1} {2}/{2}/{2}\n", 
					triangles [i] + 1 + StartIndex, triangles [i + 1] + 1 + StartIndex, triangles [i + 2] + 1 + StartIndex));
			}
		}

		for (int i=0; i<normals.Length; i++) // remove this if your exported mesh have faces on wrong side
			normals [i] = -normals [i];
		m.normals = normals;

		m.triangles = m.triangles.Reverse ().ToArray (); //

		StartIndex += numVertices;
		return sb.ToString ();
	}





	public void DoExport(bool makeSubmeshes)
	{

		//tangostuff.SetActive (false);
		PlayerPrefs.SetInt("exportnum",PlayerPrefs.GetInt("exportnum")+1);
		string meshName = gameObject.name;
	
		#if UNITY_EDITOR ||UNITY_ANDROID 


	string fileName = Application.persistentDataPath+"/"+gameObject.name+ PlayerPrefs.GetInt("exportnum").ToString() +".obj"; // you can also use: "/storage/sdcard1/" +gameObject.name+".obj"
		#elif UNITY_STANDALONE_WIN 
		//string fileName = Application.persistentDataPath+"/"+gameObject.name+ PlayerPrefs.GetInt("exportnum").ToString() +".obj"; // you can also use: "/storage/sdcard1/" +gameObject.name+".obj"
		string fileName = Application.dataPath+"/"+gameObject.name+ PlayerPrefs.GetInt("exportnum").ToString() +".obj"; // you can also use: "/storage/sdcard1/" +gameObject.
		#endif

		Start();

		StringBuilder meshString = new StringBuilder();

		meshString.Append("#" + meshName + ".obj"
			+ "\n#" + System.DateTime.Now.ToLongDateString() 
			+ "\n#" + System.DateTime.Now.ToLongTimeString()
			+ "\n#-------" 
			+ "\n\n");

		Transform t = transform;

		Vector3 originalPosition = t.position;
		t.position = Vector3.zero;

		if (!makeSubmeshes)
		{
			meshString.Append("g ").Append(t.name).Append("\n");
		}

		meshString.Append(processTransform(t, makeSubmeshes));

		WriteToFile(meshString.ToString(),fileName);

		t.position = originalPosition;

		End();
		Debug.Log("Exported Mesh: " + fileName);
	}

	string processTransform(Transform t, bool makeSubmeshes)
	{
		StringBuilder meshString = new StringBuilder();

		meshString.Append("#" + t.name
			+ "\n#-------" 
			+ "\n");

		if (makeSubmeshes)
		{
			meshString.Append("g ").Append(t.name).Append("\n");
		}

		MeshFilter mf = t.GetComponent<MeshFilter>();
		if (mf)
		{
			meshString.Append(MeshToString(mf, t));
		}

		for(int i = 0; i < t.childCount; i++)
		{


			meshString.Append(processTransform(t.GetChild(i), makeSubmeshes));
		}

		return meshString.ToString();
	}

	static void WriteToFile(string s, string filename)
	{
		using (StreamWriter sw = new StreamWriter(filename)) 
		{
			sw.Write(s);
		}

	//	SceneManager.LoadScene ("ExperimentalMeshBuilderWithColor");
	}
}
