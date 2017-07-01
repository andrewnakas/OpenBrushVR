using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Rendering;

namespace UnityEngine.XR.iOS
{

    public class UnityARVideo : MonoBehaviour
    {
        public Material m_ClearMaterial;

        private CommandBuffer m_VideoCommandBuffer;
        private Texture2D _videoTextureY;
        private Texture2D _videoTextureCbCr;

		private UnityARSessionNativeInterface m_Session;


#if !UNITY_EDITOR
        private bool bCommandBufferInitialized;

        public void Start()
        {
			m_Session = UnityARSessionNativeInterface.GetARSessionNativeInterface ();
            bCommandBufferInitialized = false;
        }

        void InitializeCommandBuffer()
        {
            m_VideoCommandBuffer = new CommandBuffer(); 
            m_VideoCommandBuffer.Blit(null, BuiltinRenderTextureType.CurrentActive, m_ClearMaterial);
            GetComponent<Camera>().AddCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
            bCommandBufferInitialized = true;

        }

        void OnDestroy()
        {
            GetComponent<Camera>().RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
        }

        public void OnPreRender()
        {
			ARTextureHandles handles = m_Session.GetARVideoTextureHandles();
            if (handles.textureY == System.IntPtr.Zero || handles.textureCbCr == System.IntPtr.Zero)
            {
                return;
            }

            if (!bCommandBufferInitialized) {
                InitializeCommandBuffer ();
            }

            Resolution currentResolution = Screen.currentResolution;

            // Texture Y
            _videoTextureY = Texture2D.CreateExternalTexture(currentResolution.width, currentResolution.height,
                TextureFormat.R8, false, false, (System.IntPtr)handles.textureY);
            _videoTextureY.filterMode = FilterMode.Bilinear;
            _videoTextureY.wrapMode = TextureWrapMode.Repeat;
            _videoTextureY.UpdateExternalTexture(handles.textureY);

            // Texture CbCr
            _videoTextureCbCr = Texture2D.CreateExternalTexture(currentResolution.width, currentResolution.height,
                TextureFormat.RG16, false, false, (System.IntPtr)handles.textureCbCr);
            _videoTextureCbCr.filterMode = FilterMode.Bilinear;
            _videoTextureCbCr.wrapMode = TextureWrapMode.Repeat;
            _videoTextureCbCr.UpdateExternalTexture(handles.textureCbCr);

            m_ClearMaterial.SetTexture("_textureY", _videoTextureY);
            m_ClearMaterial.SetTexture("_textureCbCr", _videoTextureCbCr);
            int isPortrait = 0;

            float rotation = 0;
            if (Screen.orientation == ScreenOrientation.Portrait) {
                rotation = -90;
                isPortrait = 1;
            }
            else if (Screen.orientation == ScreenOrientation.PortraitUpsideDown) {
                rotation = 90;
                isPortrait = 1;
            }
            else if (Screen.orientation == ScreenOrientation.LandscapeRight) {
                rotation = -180;
            }
            Matrix4x4 m = Matrix4x4.TRS (Vector3.zero, Quaternion.Euler(0.0f, 0.0f, rotation), Vector3.one);
            m_ClearMaterial.SetMatrix("_TextureRotation", m);
            m_ClearMaterial.SetFloat("_texCoordScale", m_Session.GetARYUVTexCoordScale());
            m_ClearMaterial.SetInt("_isPortrait", isPortrait);
        }
#else
        public void Start()
        {
            m_VideoCommandBuffer = new CommandBuffer(); 
            m_VideoCommandBuffer.Blit(null, BuiltinRenderTextureType.CurrentActive, m_ClearMaterial);
            GetComponent<Camera>().AddCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
        }

        void OnDestroy()
        {
            GetComponent<Camera>().RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
        }

#endif
    }
}
