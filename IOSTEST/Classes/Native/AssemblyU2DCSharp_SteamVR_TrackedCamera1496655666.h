#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SteamVR_TrackedCamera/VideoStreamTexture[]
struct VideoStreamTextureU5BU5D_t2214508092;
// SteamVR_TrackedCamera/VideoStream[]
struct VideoStreamU5BU5D_t2529285907;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TrackedCamera
struct  SteamVR_TrackedCamera_t1496655666  : public Il2CppObject
{
public:

public:
};

struct SteamVR_TrackedCamera_t1496655666_StaticFields
{
public:
	// SteamVR_TrackedCamera/VideoStreamTexture[] SteamVR_TrackedCamera::distorted
	VideoStreamTextureU5BU5D_t2214508092* ___distorted_0;
	// SteamVR_TrackedCamera/VideoStreamTexture[] SteamVR_TrackedCamera::undistorted
	VideoStreamTextureU5BU5D_t2214508092* ___undistorted_1;
	// SteamVR_TrackedCamera/VideoStream[] SteamVR_TrackedCamera::videostreams
	VideoStreamU5BU5D_t2529285907* ___videostreams_2;

public:
	inline static int32_t get_offset_of_distorted_0() { return static_cast<int32_t>(offsetof(SteamVR_TrackedCamera_t1496655666_StaticFields, ___distorted_0)); }
	inline VideoStreamTextureU5BU5D_t2214508092* get_distorted_0() const { return ___distorted_0; }
	inline VideoStreamTextureU5BU5D_t2214508092** get_address_of_distorted_0() { return &___distorted_0; }
	inline void set_distorted_0(VideoStreamTextureU5BU5D_t2214508092* value)
	{
		___distorted_0 = value;
		Il2CppCodeGenWriteBarrier(&___distorted_0, value);
	}

	inline static int32_t get_offset_of_undistorted_1() { return static_cast<int32_t>(offsetof(SteamVR_TrackedCamera_t1496655666_StaticFields, ___undistorted_1)); }
	inline VideoStreamTextureU5BU5D_t2214508092* get_undistorted_1() const { return ___undistorted_1; }
	inline VideoStreamTextureU5BU5D_t2214508092** get_address_of_undistorted_1() { return &___undistorted_1; }
	inline void set_undistorted_1(VideoStreamTextureU5BU5D_t2214508092* value)
	{
		___undistorted_1 = value;
		Il2CppCodeGenWriteBarrier(&___undistorted_1, value);
	}

	inline static int32_t get_offset_of_videostreams_2() { return static_cast<int32_t>(offsetof(SteamVR_TrackedCamera_t1496655666_StaticFields, ___videostreams_2)); }
	inline VideoStreamU5BU5D_t2529285907* get_videostreams_2() const { return ___videostreams_2; }
	inline VideoStreamU5BU5D_t2529285907** get_address_of_videostreams_2() { return &___videostreams_2; }
	inline void set_videostreams_2(VideoStreamU5BU5D_t2529285907* value)
	{
		___videostreams_2 = value;
		Il2CppCodeGenWriteBarrier(&___videostreams_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
