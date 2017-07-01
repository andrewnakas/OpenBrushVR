#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VRTextureBo1897807375.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_CameraVideoS968213647.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// SteamVR_TrackedCamera/VideoStream
struct VideoStream_t676682966;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TrackedCamera/VideoStreamTexture
struct  VideoStreamTexture_t930129953  : public Il2CppObject
{
public:
	// System.Boolean SteamVR_TrackedCamera/VideoStreamTexture::<undistorted>k__BackingField
	bool ___U3CundistortedU3Ek__BackingField_0;
	// Valve.VR.VRTextureBounds_t SteamVR_TrackedCamera/VideoStreamTexture::<frameBounds>k__BackingField
	VRTextureBounds_t_t1897807375  ___U3CframeBoundsU3Ek__BackingField_1;
	// UnityEngine.Texture2D SteamVR_TrackedCamera/VideoStreamTexture::_texture
	Texture2D_t3542995729 * ____texture_2;
	// System.Int32 SteamVR_TrackedCamera/VideoStreamTexture::prevFrameCount
	int32_t ___prevFrameCount_3;
	// System.UInt32 SteamVR_TrackedCamera/VideoStreamTexture::glTextureId
	uint32_t ___glTextureId_4;
	// SteamVR_TrackedCamera/VideoStream SteamVR_TrackedCamera/VideoStreamTexture::videostream
	VideoStream_t676682966 * ___videostream_5;
	// Valve.VR.CameraVideoStreamFrameHeader_t SteamVR_TrackedCamera/VideoStreamTexture::header
	CameraVideoStreamFrameHeader_t_t968213647  ___header_6;

public:
	inline static int32_t get_offset_of_U3CundistortedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ___U3CundistortedU3Ek__BackingField_0)); }
	inline bool get_U3CundistortedU3Ek__BackingField_0() const { return ___U3CundistortedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CundistortedU3Ek__BackingField_0() { return &___U3CundistortedU3Ek__BackingField_0; }
	inline void set_U3CundistortedU3Ek__BackingField_0(bool value)
	{
		___U3CundistortedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CframeBoundsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ___U3CframeBoundsU3Ek__BackingField_1)); }
	inline VRTextureBounds_t_t1897807375  get_U3CframeBoundsU3Ek__BackingField_1() const { return ___U3CframeBoundsU3Ek__BackingField_1; }
	inline VRTextureBounds_t_t1897807375 * get_address_of_U3CframeBoundsU3Ek__BackingField_1() { return &___U3CframeBoundsU3Ek__BackingField_1; }
	inline void set_U3CframeBoundsU3Ek__BackingField_1(VRTextureBounds_t_t1897807375  value)
	{
		___U3CframeBoundsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__texture_2() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ____texture_2)); }
	inline Texture2D_t3542995729 * get__texture_2() const { return ____texture_2; }
	inline Texture2D_t3542995729 ** get_address_of__texture_2() { return &____texture_2; }
	inline void set__texture_2(Texture2D_t3542995729 * value)
	{
		____texture_2 = value;
		Il2CppCodeGenWriteBarrier(&____texture_2, value);
	}

	inline static int32_t get_offset_of_prevFrameCount_3() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ___prevFrameCount_3)); }
	inline int32_t get_prevFrameCount_3() const { return ___prevFrameCount_3; }
	inline int32_t* get_address_of_prevFrameCount_3() { return &___prevFrameCount_3; }
	inline void set_prevFrameCount_3(int32_t value)
	{
		___prevFrameCount_3 = value;
	}

	inline static int32_t get_offset_of_glTextureId_4() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ___glTextureId_4)); }
	inline uint32_t get_glTextureId_4() const { return ___glTextureId_4; }
	inline uint32_t* get_address_of_glTextureId_4() { return &___glTextureId_4; }
	inline void set_glTextureId_4(uint32_t value)
	{
		___glTextureId_4 = value;
	}

	inline static int32_t get_offset_of_videostream_5() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ___videostream_5)); }
	inline VideoStream_t676682966 * get_videostream_5() const { return ___videostream_5; }
	inline VideoStream_t676682966 ** get_address_of_videostream_5() { return &___videostream_5; }
	inline void set_videostream_5(VideoStream_t676682966 * value)
	{
		___videostream_5 = value;
		Il2CppCodeGenWriteBarrier(&___videostream_5, value);
	}

	inline static int32_t get_offset_of_header_6() { return static_cast<int32_t>(offsetof(VideoStreamTexture_t930129953, ___header_6)); }
	inline CameraVideoStreamFrameHeader_t_t968213647  get_header_6() const { return ___header_6; }
	inline CameraVideoStreamFrameHeader_t_t968213647 * get_address_of_header_6() { return &___header_6; }
	inline void set_header_6(CameraVideoStreamFrameHeader_t_t968213647  value)
	{
		___header_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
