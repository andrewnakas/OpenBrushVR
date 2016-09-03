using UnityEngine;

namespace Wacki {

    public class DemoMenu : MonoBehaviour {

        public Transform dirLight;
        public Transform cubeSpawn;

        public void RotateLight(float amount)
        {
            dirLight.rotation = Quaternion.AngleAxis(amount, Vector3.right);
        }

        public void SpawnCube()
        {
            var go = GameObject.CreatePrimitive(PrimitiveType.Cube);
            go.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            go.transform.position = cubeSpawn.position;
            go.transform.rotation = cubeSpawn.rotation;
            go.AddComponent<Rigidbody>();
        }
    }

}