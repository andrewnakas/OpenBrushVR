#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// SteamVR_Camera
struct SteamVR_Camera_t3632348390;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Ears
struct  SteamVR_Ears_t1326160604  : public MonoBehaviour_t1158329972
{
public:
	// SteamVR_Camera SteamVR_Ears::vrcam
	SteamVR_Camera_t3632348390 * ___vrcam_2;
	// System.Boolean SteamVR_Ears::usingSpeakers
	bool ___usingSpeakers_3;
	// UnityEngine.Quaternion SteamVR_Ears::offset
	Quaternion_t4030073918  ___offset_4;

public:
	inline static int32_t get_offset_of_vrcam_2() { return static_cast<int32_t>(offsetof(SteamVR_Ears_t1326160604, ___vrcam_2)); }
	inline SteamVR_Camera_t3632348390 * get_vrcam_2() const { return ___vrcam_2; }
	inline SteamVR_Camera_t3632348390 ** get_address_of_vrcam_2() { return &___vrcam_2; }
	inline void set_vrcam_2(SteamVR_Camera_t3632348390 * value)
	{
		___vrcam_2 = value;
		Il2CppCodeGenWriteBarrier(&___vrcam_2, value);
	}

	inline static int32_t get_offset_of_usingSpeakers_3() { return static_cast<int32_t>(offsetof(SteamVR_Ears_t1326160604, ___usingSpeakers_3)); }
	inline bool get_usingSpeakers_3() const { return ___usingSpeakers_3; }
	inline bool* get_address_of_usingSpeakers_3() { return &___usingSpeakers_3; }
	inline void set_usingSpeakers_3(bool value)
	{
		___usingSpeakers_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(SteamVR_Ears_t1326160604, ___offset_4)); }
	inline Quaternion_t4030073918  get_offset_4() const { return ___offset_4; }
	inline Quaternion_t4030073918 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Quaternion_t4030073918  value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
