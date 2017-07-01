#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Mask
struct  Mask_t2977958238  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t3349966182 * ___m_RectTransform_2;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t2426225576 * ___m_Graphic_4;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t193706927 * ___m_MaskMaterial_5;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t193706927 * ___m_UnmaskMaterial_6;

public:
	inline static int32_t get_offset_of_m_RectTransform_2() { return static_cast<int32_t>(offsetof(Mask_t2977958238, ___m_RectTransform_2)); }
	inline RectTransform_t3349966182 * get_m_RectTransform_2() const { return ___m_RectTransform_2; }
	inline RectTransform_t3349966182 ** get_address_of_m_RectTransform_2() { return &___m_RectTransform_2; }
	inline void set_m_RectTransform_2(RectTransform_t3349966182 * value)
	{
		___m_RectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_2, value);
	}

	inline static int32_t get_offset_of_m_ShowMaskGraphic_3() { return static_cast<int32_t>(offsetof(Mask_t2977958238, ___m_ShowMaskGraphic_3)); }
	inline bool get_m_ShowMaskGraphic_3() const { return ___m_ShowMaskGraphic_3; }
	inline bool* get_address_of_m_ShowMaskGraphic_3() { return &___m_ShowMaskGraphic_3; }
	inline void set_m_ShowMaskGraphic_3(bool value)
	{
		___m_ShowMaskGraphic_3 = value;
	}

	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(Mask_t2977958238, ___m_Graphic_4)); }
	inline Graphic_t2426225576 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t2426225576 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t2426225576 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Graphic_4, value);
	}

	inline static int32_t get_offset_of_m_MaskMaterial_5() { return static_cast<int32_t>(offsetof(Mask_t2977958238, ___m_MaskMaterial_5)); }
	inline Material_t193706927 * get_m_MaskMaterial_5() const { return ___m_MaskMaterial_5; }
	inline Material_t193706927 ** get_address_of_m_MaskMaterial_5() { return &___m_MaskMaterial_5; }
	inline void set_m_MaskMaterial_5(Material_t193706927 * value)
	{
		___m_MaskMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaskMaterial_5, value);
	}

	inline static int32_t get_offset_of_m_UnmaskMaterial_6() { return static_cast<int32_t>(offsetof(Mask_t2977958238, ___m_UnmaskMaterial_6)); }
	inline Material_t193706927 * get_m_UnmaskMaterial_6() const { return ___m_UnmaskMaterial_6; }
	inline Material_t193706927 ** get_address_of_m_UnmaskMaterial_6() { return &___m_UnmaskMaterial_6; }
	inline void set_m_UnmaskMaterial_6(Material_t193706927 * value)
	{
		___m_UnmaskMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_UnmaskMaterial_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
