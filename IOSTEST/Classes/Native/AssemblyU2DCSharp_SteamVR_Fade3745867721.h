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

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Fade
struct  SteamVR_Fade_t3745867721  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color SteamVR_Fade::currentColor
	Color_t2020392075  ___currentColor_2;
	// UnityEngine.Color SteamVR_Fade::targetColor
	Color_t2020392075  ___targetColor_3;
	// UnityEngine.Color SteamVR_Fade::deltaColor
	Color_t2020392075  ___deltaColor_4;
	// System.Boolean SteamVR_Fade::fadeOverlay
	bool ___fadeOverlay_5;

public:
	inline static int32_t get_offset_of_currentColor_2() { return static_cast<int32_t>(offsetof(SteamVR_Fade_t3745867721, ___currentColor_2)); }
	inline Color_t2020392075  get_currentColor_2() const { return ___currentColor_2; }
	inline Color_t2020392075 * get_address_of_currentColor_2() { return &___currentColor_2; }
	inline void set_currentColor_2(Color_t2020392075  value)
	{
		___currentColor_2 = value;
	}

	inline static int32_t get_offset_of_targetColor_3() { return static_cast<int32_t>(offsetof(SteamVR_Fade_t3745867721, ___targetColor_3)); }
	inline Color_t2020392075  get_targetColor_3() const { return ___targetColor_3; }
	inline Color_t2020392075 * get_address_of_targetColor_3() { return &___targetColor_3; }
	inline void set_targetColor_3(Color_t2020392075  value)
	{
		___targetColor_3 = value;
	}

	inline static int32_t get_offset_of_deltaColor_4() { return static_cast<int32_t>(offsetof(SteamVR_Fade_t3745867721, ___deltaColor_4)); }
	inline Color_t2020392075  get_deltaColor_4() const { return ___deltaColor_4; }
	inline Color_t2020392075 * get_address_of_deltaColor_4() { return &___deltaColor_4; }
	inline void set_deltaColor_4(Color_t2020392075  value)
	{
		___deltaColor_4 = value;
	}

	inline static int32_t get_offset_of_fadeOverlay_5() { return static_cast<int32_t>(offsetof(SteamVR_Fade_t3745867721, ___fadeOverlay_5)); }
	inline bool get_fadeOverlay_5() const { return ___fadeOverlay_5; }
	inline bool* get_address_of_fadeOverlay_5() { return &___fadeOverlay_5; }
	inline void set_fadeOverlay_5(bool value)
	{
		___fadeOverlay_5 = value;
	}
};

struct SteamVR_Fade_t3745867721_StaticFields
{
public:
	// UnityEngine.Material SteamVR_Fade::fadeMaterial
	Material_t193706927 * ___fadeMaterial_6;
	// System.Int32 SteamVR_Fade::fadeMaterialColorID
	int32_t ___fadeMaterialColorID_7;

public:
	inline static int32_t get_offset_of_fadeMaterial_6() { return static_cast<int32_t>(offsetof(SteamVR_Fade_t3745867721_StaticFields, ___fadeMaterial_6)); }
	inline Material_t193706927 * get_fadeMaterial_6() const { return ___fadeMaterial_6; }
	inline Material_t193706927 ** get_address_of_fadeMaterial_6() { return &___fadeMaterial_6; }
	inline void set_fadeMaterial_6(Material_t193706927 * value)
	{
		___fadeMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___fadeMaterial_6, value);
	}

	inline static int32_t get_offset_of_fadeMaterialColorID_7() { return static_cast<int32_t>(offsetof(SteamVR_Fade_t3745867721_StaticFields, ___fadeMaterialColorID_7)); }
	inline int32_t get_fadeMaterialColorID_7() const { return ___fadeMaterialColorID_7; }
	inline int32_t* get_address_of_fadeMaterialColorID_7() { return &___fadeMaterialColorID_7; }
	inline void set_fadeMaterialColorID_7(int32_t value)
	{
		___fadeMaterialColorID_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
