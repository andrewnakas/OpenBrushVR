#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect1728560551.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t4269599528  : public BaseMeshEffect_t1728560551
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2020392075  ___m_EffectColor_3;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2243707579  ___m_EffectDistance_4;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_5;

public:
	inline static int32_t get_offset_of_m_EffectColor_3() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectColor_3)); }
	inline Color_t2020392075  get_m_EffectColor_3() const { return ___m_EffectColor_3; }
	inline Color_t2020392075 * get_address_of_m_EffectColor_3() { return &___m_EffectColor_3; }
	inline void set_m_EffectColor_3(Color_t2020392075  value)
	{
		___m_EffectColor_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_4() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectDistance_4)); }
	inline Vector2_t2243707579  get_m_EffectDistance_4() const { return ___m_EffectDistance_4; }
	inline Vector2_t2243707579 * get_address_of_m_EffectDistance_4() { return &___m_EffectDistance_4; }
	inline void set_m_EffectDistance_4(Vector2_t2243707579  value)
	{
		___m_EffectDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_5() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_UseGraphicAlpha_5)); }
	inline bool get_m_UseGraphicAlpha_5() const { return ___m_UseGraphicAlpha_5; }
	inline bool* get_address_of_m_UseGraphicAlpha_5() { return &___m_UseGraphicAlpha_5; }
	inline void set_m_UseGraphicAlpha_5(bool value)
	{
		___m_UseGraphicAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
