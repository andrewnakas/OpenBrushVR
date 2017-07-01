#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t2749640213  : public MaskableGraphic_t540192618
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t2243626319 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t3681755626  ___m_UVRect_29;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(RawImage_t2749640213, ___m_Texture_28)); }
	inline Texture_t2243626319 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t2243626319 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t2243626319 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_28, value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(RawImage_t2749640213, ___m_UVRect_29)); }
	inline Rect_t3681755626  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t3681755626 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t3681755626  value)
	{
		___m_UVRect_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
