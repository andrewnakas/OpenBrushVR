#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.Build;

//this guy takes out the tango if bnuilding for vive or soon to be ios/
class EditorBuild : IPreprocessBuild,IPostprocessBuild
{//script that allows 
    public int callbackOrder { get { return 0; } }
    public void OnPreprocessBuild(BuildTarget target, string path)
    {
        // Do the preprocessing here
#if UNITY_STANDALONE_WIN || UNITY_IOS

      
             AssetDatabase.MoveAsset( "Assets/TangoSDK", "Assets/Editor/TangoSDK");
        AssetDatabase.MoveAsset("Assets/TangoPrefabs", "Assets/Editor/TangoPrefabs");
        AssetDatabase.MoveAsset("Assets/Google-Unity", "Assets/Editor/Google-Unity");
#endif
    }

    public void OnPostprocessBuild(BuildTarget target, string path)
    {
#if UNITY_STANDALONE_WIN || UNITY_IOS


        AssetDatabase.MoveAsset("Assets/Editor/TangoSDK", "Assets/TangoSDK");
        AssetDatabase.MoveAsset("Assets/Editor/TangoPrefabs", "Assets/TangoPrefabs");
        AssetDatabase.MoveAsset("Assets/Editor/Google-Unity", "Assets/Google-Unity");
#endif
        // Do the preprocessing here
    }
}
 #endif

