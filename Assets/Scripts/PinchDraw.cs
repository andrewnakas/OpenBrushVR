using UnityEngine;
using System.Collections.Generic;


  public class PinchDraw : MonoBehaviour {
		
    [Tooltip("Each pinch detector can draw one line at a time.")]
 
//    private PinchDetector[] _pinchDetectors;
	public bool firstpointtime;
    [SerializeField]
    private Material _material;
	public GameObject strokes;
	public GameObject UndoManager;
	public GameObject sphere;
		public Color _drawColor ;

	public Transform meshparent;
    [SerializeField]
    private float _smoothingDelay = 0.01f;

    [SerializeField]
    private float _drawRadius = 0.2f;

    [SerializeField]
    private int _drawResolution = 8;

    [SerializeField]
    private float _minSegmentLength = 0.005f;

    private DrawState[] _drawStates;
		public SteamVR_TrackedObject trackedObj;
		public GameObject con;
    public Color DrawColor {
      get {
				return   DrawColor;
      }
      set {
				_drawColor =  ColorManager.Instance.GetCurrentColor ();
      }
    }

    public float DrawRadius {
      get {
        return _drawRadius;
      }
      set {
        _drawRadius = value;
      }
    }

    void OnValidate() {
      _drawRadius = Mathf.Max(0, _drawRadius);
      _drawResolution = Mathf.Clamp(_drawResolution, 3, 24);
      _minSegmentLength = Mathf.Max(0, _minSegmentLength);
    }

    void Awake() {
    
    }

    void Start() {
			
				SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
			

      _drawStates = new DrawState[1];
      for (int i = 0; i < 1; i++) {
        _drawStates[i] = new DrawState(this);
      }
    }

    void Update() {
		_drawRadius = BrushManager.cursorsize * .5f;
			SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
	//		if (device.GetTouchDown (SteamVR_Controller.ButtonMask.Trigger) && canpaint == true) {
     
     //   var detector = _pinchDetectors[i];
        var drawState = _drawStates[0];

			if (device.GetTouchDown (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true) {
		
			if (BrushManager.freeformbool == false) {
				strokes = drawState.BeginNewLine () as GameObject;
				UndoManager.GetComponent<UndoManager> ().strokes.Add (strokes);
				strokes.transform.SetParent (meshparent);

			} else {

				if (firstpointtime == true) {


					drawState.UpdateLine(sphere.transform.position);
			
					drawState.UpdateLine(sphere.transform.position);
					drawState.UpdateLine(sphere.transform.position);

				}


				if (firstpointtime == false) {
					strokes = drawState.BeginNewLine () as GameObject;
					UndoManager.GetComponent<UndoManager> ().strokes.Add (strokes);
					strokes.transform.SetParent (meshparent);
					drawState.UpdateLine(sphere.transform.position);
					firstpointtime = true;

				
				}


			}
        }

			if (device.GetTouchUp (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true){
			if (BrushManager.freeformbool == false) {
				drawState.FinishLine ();

			}
        }

			if (device.GetTouch (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true) {


			if (BrushManager.freeformbool == false) {
			drawState.UpdateLine(sphere.transform.position);
			} 
        }
      
    }
	public void pointerbreaker(){
		var drawState = _drawStates[0];
		drawState.FinishLine ();
		firstpointtime = false;


	}

	public class DrawState {
      private List<Vector3> _vertices = new List<Vector3>();
      private List<int> _tris = new List<int>();
      private List<Vector2> _uvs = new List<Vector2>();
      private List<Color> _colors = new List<Color>();

      private PinchDraw _parent;

      private int _rings = 0;

      private Vector3 _prevRing0 = Vector3.zero;
      private Vector3 _prevRing1 = Vector3.zero;

      private Vector3 _prevNormal0 = Vector3.zero;

      private Mesh _mesh;
      private SmoothedVector3 _smoothedPosition;

      public DrawState(PinchDraw parent) {
        _parent = parent;

        _smoothedPosition = new SmoothedVector3();
        _smoothedPosition.delay = parent._smoothingDelay;
        _smoothedPosition.reset = true;
      }

      public GameObject BeginNewLine() {
        _rings = 0;
        _vertices.Clear();
        _tris.Clear();
        _uvs.Clear();
        _colors.Clear();

        _smoothedPosition.reset = true;

        _mesh = new Mesh();
			Debug.Log(_mesh.isReadable);
        _mesh.name = "Line Mesh";
        _mesh.MarkDynamic();

        GameObject lineObj = new GameObject("Line Object");
        lineObj.transform.position = Vector3.zero;
        lineObj.transform.rotation = Quaternion.identity;
        lineObj.transform.localScale = Vector3.one;
        lineObj.AddComponent<MeshFilter>().mesh = _mesh;
        lineObj.AddComponent<MeshRenderer>().sharedMaterial = _parent._material;
		
        return lineObj;
      }

      public void UpdateLine(Vector3 position) {
        _smoothedPosition.Update(position, Time.deltaTime);

        bool shouldAdd = false;

        shouldAdd |= _vertices.Count == 0;
        shouldAdd |= Vector3.Distance(_prevRing0, _smoothedPosition.value) >= _parent._minSegmentLength;

        if (shouldAdd) {
          addRing(_smoothedPosition.value);
          updateMesh();
        }
      }

      public void FinishLine() {
    
				if (_mesh != null) {
					_mesh.Optimize ();
					_mesh.UploadMeshData (true);
				}
      }

      private void updateMesh() {

				if (_mesh != null) {
					_mesh.SetVertices (_vertices);
					_mesh.SetColors (_colors);
					_mesh.SetUVs (0, _uvs);
					_mesh.SetIndices (_tris.ToArray (), MeshTopology.Triangles, 0);
					_mesh.RecalculateBounds ();
					_mesh.RecalculateNormals ();
				}
      }

      private void addRing(Vector3 ringPosition) {
        _rings++;

        if (_rings == 1) {
          addVertexRing();
          addVertexRing();
          addTriSegment();
        }

        addVertexRing();
        addTriSegment();

        Vector3 ringNormal = Vector3.zero;
        if (_rings == 2) {
          Vector3 direction = ringPosition - _prevRing0;
          float angleToUp = Vector3.Angle(direction, Vector3.up);

          if (angleToUp < 10 || angleToUp > 170) {
            ringNormal = Vector3.Cross(direction, Vector3.right);
          } else {
            ringNormal = Vector3.Cross(direction, Vector3.up);
          }

          ringNormal = ringNormal.normalized;

          _prevNormal0 = ringNormal;
        } else if (_rings > 2) {
          Vector3 prevPerp = Vector3.Cross(_prevRing0 - _prevRing1, _prevNormal0);
          ringNormal = Vector3.Cross(prevPerp, ringPosition - _prevRing0).normalized;
        }

        if (_rings == 2) {
          updateRingVerts(0,
                          _prevRing0,
                          ringPosition - _prevRing1,
                          _prevNormal0,
                          0);
        }

        if (_rings >= 2) {
          updateRingVerts(_vertices.Count - _parent._drawResolution,
                          ringPosition,
                          ringPosition - _prevRing0,
                          ringNormal,
                          0);
          updateRingVerts(_vertices.Count - _parent._drawResolution * 2,
                          ringPosition,
                          ringPosition - _prevRing0,
                          ringNormal,
                          1);
          updateRingVerts(_vertices.Count - _parent._drawResolution * 3,
                          _prevRing0,
                          ringPosition - _prevRing1,
                          _prevNormal0,
                          1);
        }

        _prevRing1 = _prevRing0;
        _prevRing0 = ringPosition;

        _prevNormal0 = ringNormal;
      }

      private void addVertexRing() {
        for (int i = 0; i < _parent._drawResolution; i++) {
          _vertices.Add(Vector3.zero);  //Dummy vertex, is updated later
          _uvs.Add(new Vector2(i / (_parent._drawResolution - 1.0f), 0));
					_colors.Add( ColorManager.Instance.GetCurrentColor ());
        }
      }

      //Connects the most recently added vertex ring to the one before it
      private void addTriSegment() {
        for (int i = 0; i < _parent._drawResolution; i++) {
          int i0 = _vertices.Count - 1 - i;
          int i1 = _vertices.Count - 1 - ((i + 1) % _parent._drawResolution);

          _tris.Add(i0);
          _tris.Add(i1 - _parent._drawResolution);
          _tris.Add(i0 - _parent._drawResolution);

          _tris.Add(i0);
          _tris.Add(i1);
          _tris.Add(i1 - _parent._drawResolution);
        }
      }

      private void updateRingVerts(int offset, Vector3 ringPosition, Vector3 direction, Vector3 normal, float radiusScale) {
        direction = direction.normalized;
        normal = normal.normalized;

        for (int i = 0; i < _parent._drawResolution; i++) {
          float angle = 360.0f * (i / (float)(_parent._drawResolution));
          Quaternion rotator = Quaternion.AngleAxis(angle, direction);
          Vector3 ringSpoke = rotator * normal * _parent._drawRadius * radiusScale;
          _vertices[offset + i] = ringPosition + ringSpoke;
        }
      }
    }
  }

