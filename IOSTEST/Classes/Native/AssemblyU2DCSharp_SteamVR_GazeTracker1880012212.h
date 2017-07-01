#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GazeEventHandler
struct GazeEventHandler_t1044944507;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_GazeTracker
struct  SteamVR_GazeTracker_t1880012212  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean SteamVR_GazeTracker::isInGaze
	bool ___isInGaze_2;
	// GazeEventHandler SteamVR_GazeTracker::GazeOn
	GazeEventHandler_t1044944507 * ___GazeOn_3;
	// GazeEventHandler SteamVR_GazeTracker::GazeOff
	GazeEventHandler_t1044944507 * ___GazeOff_4;
	// System.Single SteamVR_GazeTracker::gazeInCutoff
	float ___gazeInCutoff_5;
	// System.Single SteamVR_GazeTracker::gazeOutCutoff
	float ___gazeOutCutoff_6;
	// UnityEngine.Transform SteamVR_GazeTracker::hmdTrackedObject
	Transform_t3275118058 * ___hmdTrackedObject_7;

public:
	inline static int32_t get_offset_of_isInGaze_2() { return static_cast<int32_t>(offsetof(SteamVR_GazeTracker_t1880012212, ___isInGaze_2)); }
	inline bool get_isInGaze_2() const { return ___isInGaze_2; }
	inline bool* get_address_of_isInGaze_2() { return &___isInGaze_2; }
	inline void set_isInGaze_2(bool value)
	{
		___isInGaze_2 = value;
	}

	inline static int32_t get_offset_of_GazeOn_3() { return static_cast<int32_t>(offsetof(SteamVR_GazeTracker_t1880012212, ___GazeOn_3)); }
	inline GazeEventHandler_t1044944507 * get_GazeOn_3() const { return ___GazeOn_3; }
	inline GazeEventHandler_t1044944507 ** get_address_of_GazeOn_3() { return &___GazeOn_3; }
	inline void set_GazeOn_3(GazeEventHandler_t1044944507 * value)
	{
		___GazeOn_3 = value;
		Il2CppCodeGenWriteBarrier(&___GazeOn_3, value);
	}

	inline static int32_t get_offset_of_GazeOff_4() { return static_cast<int32_t>(offsetof(SteamVR_GazeTracker_t1880012212, ___GazeOff_4)); }
	inline GazeEventHandler_t1044944507 * get_GazeOff_4() const { return ___GazeOff_4; }
	inline GazeEventHandler_t1044944507 ** get_address_of_GazeOff_4() { return &___GazeOff_4; }
	inline void set_GazeOff_4(GazeEventHandler_t1044944507 * value)
	{
		___GazeOff_4 = value;
		Il2CppCodeGenWriteBarrier(&___GazeOff_4, value);
	}

	inline static int32_t get_offset_of_gazeInCutoff_5() { return static_cast<int32_t>(offsetof(SteamVR_GazeTracker_t1880012212, ___gazeInCutoff_5)); }
	inline float get_gazeInCutoff_5() const { return ___gazeInCutoff_5; }
	inline float* get_address_of_gazeInCutoff_5() { return &___gazeInCutoff_5; }
	inline void set_gazeInCutoff_5(float value)
	{
		___gazeInCutoff_5 = value;
	}

	inline static int32_t get_offset_of_gazeOutCutoff_6() { return static_cast<int32_t>(offsetof(SteamVR_GazeTracker_t1880012212, ___gazeOutCutoff_6)); }
	inline float get_gazeOutCutoff_6() const { return ___gazeOutCutoff_6; }
	inline float* get_address_of_gazeOutCutoff_6() { return &___gazeOutCutoff_6; }
	inline void set_gazeOutCutoff_6(float value)
	{
		___gazeOutCutoff_6 = value;
	}

	inline static int32_t get_offset_of_hmdTrackedObject_7() { return static_cast<int32_t>(offsetof(SteamVR_GazeTracker_t1880012212, ___hmdTrackedObject_7)); }
	inline Transform_t3275118058 * get_hmdTrackedObject_7() const { return ___hmdTrackedObject_7; }
	inline Transform_t3275118058 ** get_address_of_hmdTrackedObject_7() { return &___hmdTrackedObject_7; }
	inline void set_hmdTrackedObject_7(Transform_t3275118058 * value)
	{
		___hmdTrackedObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___hmdTrackedObject_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
