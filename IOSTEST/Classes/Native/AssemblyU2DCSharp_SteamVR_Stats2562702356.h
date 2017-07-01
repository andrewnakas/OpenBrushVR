#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GUIText
struct GUIText_t2411476300;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Stats
struct  SteamVR_Stats_t2562702356  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUIText SteamVR_Stats::text
	GUIText_t2411476300 * ___text_2;
	// UnityEngine.Color SteamVR_Stats::fadeColor
	Color_t2020392075  ___fadeColor_3;
	// System.Single SteamVR_Stats::fadeDuration
	float ___fadeDuration_4;
	// System.Double SteamVR_Stats::lastUpdate
	double ___lastUpdate_5;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(SteamVR_Stats_t2562702356, ___text_2)); }
	inline GUIText_t2411476300 * get_text_2() const { return ___text_2; }
	inline GUIText_t2411476300 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(GUIText_t2411476300 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_fadeColor_3() { return static_cast<int32_t>(offsetof(SteamVR_Stats_t2562702356, ___fadeColor_3)); }
	inline Color_t2020392075  get_fadeColor_3() const { return ___fadeColor_3; }
	inline Color_t2020392075 * get_address_of_fadeColor_3() { return &___fadeColor_3; }
	inline void set_fadeColor_3(Color_t2020392075  value)
	{
		___fadeColor_3 = value;
	}

	inline static int32_t get_offset_of_fadeDuration_4() { return static_cast<int32_t>(offsetof(SteamVR_Stats_t2562702356, ___fadeDuration_4)); }
	inline float get_fadeDuration_4() const { return ___fadeDuration_4; }
	inline float* get_address_of_fadeDuration_4() { return &___fadeDuration_4; }
	inline void set_fadeDuration_4(float value)
	{
		___fadeDuration_4 = value;
	}

	inline static int32_t get_offset_of_lastUpdate_5() { return static_cast<int32_t>(offsetof(SteamVR_Stats_t2562702356, ___lastUpdate_5)); }
	inline double get_lastUpdate_5() const { return ___lastUpdate_5; }
	inline double* get_address_of_lastUpdate_5() { return &___lastUpdate_5; }
	inline void set_lastUpdate_5(double value)
	{
		___lastUpdate_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
