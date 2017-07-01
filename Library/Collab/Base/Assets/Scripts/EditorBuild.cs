#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using UnityEditor.Build;
class EditorBuilder : IPreprocessBuild
{//script that allows 
    public int callbackOrder { get { return 0; } }
    public void OnPreprocessBuild(BuildTarget target, string path)
    {
        
        // Do the preprocessing here
#if UNITY_STANDALONE_WIN || UNITY_IOS
        Debug.Log ( "LIT");
      
             AssetDatabase.MoveAsset( "Assets/TangoSDK", "Assets/Editor/TangoSDK");
        AssetDatabase.MoveAsset("Assets/TangoPrefab", "Assets/Editor/TangoPrefabs");
        AssetDatabase.MoveAsset("Assets/Google-Unity", "Assets/Editor/Google-Unity");
#endif
    }

    public void OnPostprocessBuild(BuildTarget target, string path)
    {
#if UNITY_STANDALONE_WIN || UNITY_IOS


        AssetDatabase.MoveAsset("Assets/Editor/TangoSDK", "Assets/TangoSDK");
        AssetDatabase.MoveAsset("Assets/Editor/TangoPrefabs", "Assets/.TangoPrefabs");
        AssetDatabase.MoveAsset("Assets/Editor/Google-Unity", "Assets/.Google-Unity");
#endif
        // Do the preprocessing here
    }
}
 #endif

