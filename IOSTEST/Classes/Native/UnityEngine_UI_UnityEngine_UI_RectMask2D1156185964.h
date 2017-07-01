#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t3349113845;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_t274736911;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t525307096;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RectMask2D
struct  RectMask2D_t1156185964  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t3349113845 * ___m_VertexClipper_2;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t3349966182 * ___m_RectTransform_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	HashSet_1_t274736911 * ___m_ClipTargets_4;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_5;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t525307096 * ___m_Clippers_6;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_t3681755626  ___m_LastClipRectCanvasSpace_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_LastValidClipRect
	bool ___m_LastValidClipRect_8;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ForceClip
	bool ___m_ForceClip_9;

public:
	inline static int32_t get_offset_of_m_VertexClipper_2() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_VertexClipper_2)); }
	inline RectangularVertexClipper_t3349113845 * get_m_VertexClipper_2() const { return ___m_VertexClipper_2; }
	inline RectangularVertexClipper_t3349113845 ** get_address_of_m_VertexClipper_2() { return &___m_VertexClipper_2; }
	inline void set_m_VertexClipper_2(RectangularVertexClipper_t3349113845 * value)
	{
		___m_VertexClipper_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_VertexClipper_2, value);
	}

	inline static int32_t get_offset_of_m_RectTransform_3() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_RectTransform_3)); }
	inline RectTransform_t3349966182 * get_m_RectTransform_3() const { return ___m_RectTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_m_RectTransform_3() { return &___m_RectTransform_3; }
	inline void set_m_RectTransform_3(RectTransform_t3349966182 * value)
	{
		___m_RectTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_3, value);
	}

	inline static int32_t get_offset_of_m_ClipTargets_4() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_ClipTargets_4)); }
	inline HashSet_1_t274736911 * get_m_ClipTargets_4() const { return ___m_ClipTargets_4; }
	inline HashSet_1_t274736911 ** get_address_of_m_ClipTargets_4() { return &___m_ClipTargets_4; }
	inline void set_m_ClipTargets_4(HashSet_1_t274736911 * value)
	{
		___m_ClipTargets_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClipTargets_4, value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculateClipRects_5() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_ShouldRecalculateClipRects_5)); }
	inline bool get_m_ShouldRecalculateClipRects_5() const { return ___m_ShouldRecalculateClipRects_5; }
	inline bool* get_address_of_m_ShouldRecalculateClipRects_5() { return &___m_ShouldRecalculateClipRects_5; }
	inline void set_m_ShouldRecalculateClipRects_5(bool value)
	{
		___m_ShouldRecalculateClipRects_5 = value;
	}

	inline static int32_t get_offset_of_m_Clippers_6() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_Clippers_6)); }
	inline List_1_t525307096 * get_m_Clippers_6() const { return ___m_Clippers_6; }
	inline List_1_t525307096 ** get_address_of_m_Clippers_6() { return &___m_Clippers_6; }
	inline void set_m_Clippers_6(List_1_t525307096 * value)
	{
		___m_Clippers_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Clippers_6, value);
	}

	inline static int32_t get_offset_of_m_LastClipRectCanvasSpace_7() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_LastClipRectCanvasSpace_7)); }
	inline Rect_t3681755626  get_m_LastClipRectCanvasSpace_7() const { return ___m_LastClipRectCanvasSpace_7; }
	inline Rect_t3681755626 * get_address_of_m_LastClipRectCanvasSpace_7() { return &___m_LastClipRectCanvasSpace_7; }
	inline void set_m_LastClipRectCanvasSpace_7(Rect_t3681755626  value)
	{
		___m_LastClipRectCanvasSpace_7 = value;
	}

	inline static int32_t get_offset_of_m_LastValidClipRect_8() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_LastValidClipRect_8)); }
	inline bool get_m_LastValidClipRect_8() const { return ___m_LastValidClipRect_8; }
	inline bool* get_address_of_m_LastValidClipRect_8() { return &___m_LastValidClipRect_8; }
	inline void set_m_LastValidClipRect_8(bool value)
	{
		___m_LastValidClipRect_8 = value;
	}

	inline static int32_t get_offset_of_m_ForceClip_9() { return static_cast<int32_t>(offsetof(RectMask2D_t1156185964, ___m_ForceClip_9)); }
	inline bool get_m_ForceClip_9() const { return ___m_ForceClip_9; }
	inline bool* get_address_of_m_ForceClip_9() { return &___m_ForceClip_9; }
	inline void set_m_ForceClip_9(bool value)
	{
		___m_ForceClip_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
