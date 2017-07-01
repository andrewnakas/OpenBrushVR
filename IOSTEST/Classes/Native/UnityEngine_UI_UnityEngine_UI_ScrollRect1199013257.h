#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementTy905360158.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_Scrollbar3834843475.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker154385424.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t3529018992;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect
struct  ScrollRect_t1199013257  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t3349966182 * ___m_Content_2;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_3;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_4;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_5;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_6;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_7;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_8;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_9;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t3349966182 * ___m_Viewport_10;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t3248359358 * ___m_HorizontalScrollbar_11;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t3248359358 * ___m_VerticalScrollbar_12;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_13;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_14;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_15;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_16;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t3529018992 * ___m_OnValueChanged_17;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t2243707579  ___m_PointerStartLocalCursor_18;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t2243707579  ___m_ContentStartPosition_19;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t3349966182 * ___m_ViewRect_20;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t3033363703  ___m_ContentBounds_21;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t3033363703  ___m_ViewBounds_22;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t2243707579  ___m_Velocity_23;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t2243707579  ___m_PrevPosition_25;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t3033363703  ___m_PrevContentBounds_26;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t3033363703  ___m_PrevViewBounds_27;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_28;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_29;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_30;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_31;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_32;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t3349966182 * ___m_Rect_33;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t3349966182 * ___m_HorizontalScrollbarRect_34;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t3349966182 * ___m_VerticalScrollbarRect_35;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t154385424  ___m_Tracker_36;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t1172311765* ___m_Corners_37;

public:
	inline static int32_t get_offset_of_m_Content_2() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Content_2)); }
	inline RectTransform_t3349966182 * get_m_Content_2() const { return ___m_Content_2; }
	inline RectTransform_t3349966182 ** get_address_of_m_Content_2() { return &___m_Content_2; }
	inline void set_m_Content_2(RectTransform_t3349966182 * value)
	{
		___m_Content_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_2, value);
	}

	inline static int32_t get_offset_of_m_Horizontal_3() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Horizontal_3)); }
	inline bool get_m_Horizontal_3() const { return ___m_Horizontal_3; }
	inline bool* get_address_of_m_Horizontal_3() { return &___m_Horizontal_3; }
	inline void set_m_Horizontal_3(bool value)
	{
		___m_Horizontal_3 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_4() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Vertical_4)); }
	inline bool get_m_Vertical_4() const { return ___m_Vertical_4; }
	inline bool* get_address_of_m_Vertical_4() { return &___m_Vertical_4; }
	inline void set_m_Vertical_4(bool value)
	{
		___m_Vertical_4 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_5() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_MovementType_5)); }
	inline int32_t get_m_MovementType_5() const { return ___m_MovementType_5; }
	inline int32_t* get_address_of_m_MovementType_5() { return &___m_MovementType_5; }
	inline void set_m_MovementType_5(int32_t value)
	{
		___m_MovementType_5 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_6() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Elasticity_6)); }
	inline float get_m_Elasticity_6() const { return ___m_Elasticity_6; }
	inline float* get_address_of_m_Elasticity_6() { return &___m_Elasticity_6; }
	inline void set_m_Elasticity_6(float value)
	{
		___m_Elasticity_6 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_7() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Inertia_7)); }
	inline bool get_m_Inertia_7() const { return ___m_Inertia_7; }
	inline bool* get_address_of_m_Inertia_7() { return &___m_Inertia_7; }
	inline void set_m_Inertia_7(bool value)
	{
		___m_Inertia_7 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_8() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_DecelerationRate_8)); }
	inline float get_m_DecelerationRate_8() const { return ___m_DecelerationRate_8; }
	inline float* get_address_of_m_DecelerationRate_8() { return &___m_DecelerationRate_8; }
	inline void set_m_DecelerationRate_8(float value)
	{
		___m_DecelerationRate_8 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_9() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_ScrollSensitivity_9)); }
	inline float get_m_ScrollSensitivity_9() const { return ___m_ScrollSensitivity_9; }
	inline float* get_address_of_m_ScrollSensitivity_9() { return &___m_ScrollSensitivity_9; }
	inline void set_m_ScrollSensitivity_9(float value)
	{
		___m_ScrollSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_10() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Viewport_10)); }
	inline RectTransform_t3349966182 * get_m_Viewport_10() const { return ___m_Viewport_10; }
	inline RectTransform_t3349966182 ** get_address_of_m_Viewport_10() { return &___m_Viewport_10; }
	inline void set_m_Viewport_10(RectTransform_t3349966182 * value)
	{
		___m_Viewport_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Viewport_10, value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_11() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HorizontalScrollbar_11)); }
	inline Scrollbar_t3248359358 * get_m_HorizontalScrollbar_11() const { return ___m_HorizontalScrollbar_11; }
	inline Scrollbar_t3248359358 ** get_address_of_m_HorizontalScrollbar_11() { return &___m_HorizontalScrollbar_11; }
	inline void set_m_HorizontalScrollbar_11(Scrollbar_t3248359358 * value)
	{
		___m_HorizontalScrollbar_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalScrollbar_11, value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_12() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_VerticalScrollbar_12)); }
	inline Scrollbar_t3248359358 * get_m_VerticalScrollbar_12() const { return ___m_VerticalScrollbar_12; }
	inline Scrollbar_t3248359358 ** get_address_of_m_VerticalScrollbar_12() { return &___m_VerticalScrollbar_12; }
	inline void set_m_VerticalScrollbar_12(Scrollbar_t3248359358 * value)
	{
		___m_VerticalScrollbar_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalScrollbar_12, value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_13() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HorizontalScrollbarVisibility_13)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_13() const { return ___m_HorizontalScrollbarVisibility_13; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_13() { return &___m_HorizontalScrollbarVisibility_13; }
	inline void set_m_HorizontalScrollbarVisibility_13(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_13 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_14() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_VerticalScrollbarVisibility_14)); }
	inline int32_t get_m_VerticalScrollbarVisibility_14() const { return ___m_VerticalScrollbarVisibility_14; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_14() { return &___m_VerticalScrollbarVisibility_14; }
	inline void set_m_VerticalScrollbarVisibility_14(int32_t value)
	{
		___m_VerticalScrollbarVisibility_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_15() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HorizontalScrollbarSpacing_15)); }
	inline float get_m_HorizontalScrollbarSpacing_15() const { return ___m_HorizontalScrollbarSpacing_15; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_15() { return &___m_HorizontalScrollbarSpacing_15; }
	inline void set_m_HorizontalScrollbarSpacing_15(float value)
	{
		___m_HorizontalScrollbarSpacing_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_16() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_VerticalScrollbarSpacing_16)); }
	inline float get_m_VerticalScrollbarSpacing_16() const { return ___m_VerticalScrollbarSpacing_16; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_16() { return &___m_VerticalScrollbarSpacing_16; }
	inline void set_m_VerticalScrollbarSpacing_16(float value)
	{
		___m_VerticalScrollbarSpacing_16 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_17() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_OnValueChanged_17)); }
	inline ScrollRectEvent_t3529018992 * get_m_OnValueChanged_17() const { return ___m_OnValueChanged_17; }
	inline ScrollRectEvent_t3529018992 ** get_address_of_m_OnValueChanged_17() { return &___m_OnValueChanged_17; }
	inline void set_m_OnValueChanged_17(ScrollRectEvent_t3529018992 * value)
	{
		___m_OnValueChanged_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_17, value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_18() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_PointerStartLocalCursor_18)); }
	inline Vector2_t2243707579  get_m_PointerStartLocalCursor_18() const { return ___m_PointerStartLocalCursor_18; }
	inline Vector2_t2243707579 * get_address_of_m_PointerStartLocalCursor_18() { return &___m_PointerStartLocalCursor_18; }
	inline void set_m_PointerStartLocalCursor_18(Vector2_t2243707579  value)
	{
		___m_PointerStartLocalCursor_18 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_19() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_ContentStartPosition_19)); }
	inline Vector2_t2243707579  get_m_ContentStartPosition_19() const { return ___m_ContentStartPosition_19; }
	inline Vector2_t2243707579 * get_address_of_m_ContentStartPosition_19() { return &___m_ContentStartPosition_19; }
	inline void set_m_ContentStartPosition_19(Vector2_t2243707579  value)
	{
		___m_ContentStartPosition_19 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_20() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_ViewRect_20)); }
	inline RectTransform_t3349966182 * get_m_ViewRect_20() const { return ___m_ViewRect_20; }
	inline RectTransform_t3349966182 ** get_address_of_m_ViewRect_20() { return &___m_ViewRect_20; }
	inline void set_m_ViewRect_20(RectTransform_t3349966182 * value)
	{
		___m_ViewRect_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_ViewRect_20, value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_21() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_ContentBounds_21)); }
	inline Bounds_t3033363703  get_m_ContentBounds_21() const { return ___m_ContentBounds_21; }
	inline Bounds_t3033363703 * get_address_of_m_ContentBounds_21() { return &___m_ContentBounds_21; }
	inline void set_m_ContentBounds_21(Bounds_t3033363703  value)
	{
		___m_ContentBounds_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_22() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_ViewBounds_22)); }
	inline Bounds_t3033363703  get_m_ViewBounds_22() const { return ___m_ViewBounds_22; }
	inline Bounds_t3033363703 * get_address_of_m_ViewBounds_22() { return &___m_ViewBounds_22; }
	inline void set_m_ViewBounds_22(Bounds_t3033363703  value)
	{
		___m_ViewBounds_22 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_23() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Velocity_23)); }
	inline Vector2_t2243707579  get_m_Velocity_23() const { return ___m_Velocity_23; }
	inline Vector2_t2243707579 * get_address_of_m_Velocity_23() { return &___m_Velocity_23; }
	inline void set_m_Velocity_23(Vector2_t2243707579  value)
	{
		___m_Velocity_23 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_24() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Dragging_24)); }
	inline bool get_m_Dragging_24() const { return ___m_Dragging_24; }
	inline bool* get_address_of_m_Dragging_24() { return &___m_Dragging_24; }
	inline void set_m_Dragging_24(bool value)
	{
		___m_Dragging_24 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_25() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_PrevPosition_25)); }
	inline Vector2_t2243707579  get_m_PrevPosition_25() const { return ___m_PrevPosition_25; }
	inline Vector2_t2243707579 * get_address_of_m_PrevPosition_25() { return &___m_PrevPosition_25; }
	inline void set_m_PrevPosition_25(Vector2_t2243707579  value)
	{
		___m_PrevPosition_25 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_26() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_PrevContentBounds_26)); }
	inline Bounds_t3033363703  get_m_PrevContentBounds_26() const { return ___m_PrevContentBounds_26; }
	inline Bounds_t3033363703 * get_address_of_m_PrevContentBounds_26() { return &___m_PrevContentBounds_26; }
	inline void set_m_PrevContentBounds_26(Bounds_t3033363703  value)
	{
		___m_PrevContentBounds_26 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_27() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_PrevViewBounds_27)); }
	inline Bounds_t3033363703  get_m_PrevViewBounds_27() const { return ___m_PrevViewBounds_27; }
	inline Bounds_t3033363703 * get_address_of_m_PrevViewBounds_27() { return &___m_PrevViewBounds_27; }
	inline void set_m_PrevViewBounds_27(Bounds_t3033363703  value)
	{
		___m_PrevViewBounds_27 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_28() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HasRebuiltLayout_28)); }
	inline bool get_m_HasRebuiltLayout_28() const { return ___m_HasRebuiltLayout_28; }
	inline bool* get_address_of_m_HasRebuiltLayout_28() { return &___m_HasRebuiltLayout_28; }
	inline void set_m_HasRebuiltLayout_28(bool value)
	{
		___m_HasRebuiltLayout_28 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_29() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HSliderExpand_29)); }
	inline bool get_m_HSliderExpand_29() const { return ___m_HSliderExpand_29; }
	inline bool* get_address_of_m_HSliderExpand_29() { return &___m_HSliderExpand_29; }
	inline void set_m_HSliderExpand_29(bool value)
	{
		___m_HSliderExpand_29 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_30() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_VSliderExpand_30)); }
	inline bool get_m_VSliderExpand_30() const { return ___m_VSliderExpand_30; }
	inline bool* get_address_of_m_VSliderExpand_30() { return &___m_VSliderExpand_30; }
	inline void set_m_VSliderExpand_30(bool value)
	{
		___m_VSliderExpand_30 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_31() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HSliderHeight_31)); }
	inline float get_m_HSliderHeight_31() const { return ___m_HSliderHeight_31; }
	inline float* get_address_of_m_HSliderHeight_31() { return &___m_HSliderHeight_31; }
	inline void set_m_HSliderHeight_31(float value)
	{
		___m_HSliderHeight_31 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_32() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_VSliderWidth_32)); }
	inline float get_m_VSliderWidth_32() const { return ___m_VSliderWidth_32; }
	inline float* get_address_of_m_VSliderWidth_32() { return &___m_VSliderWidth_32; }
	inline void set_m_VSliderWidth_32(float value)
	{
		___m_VSliderWidth_32 = value;
	}

	inline static int32_t get_offset_of_m_Rect_33() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Rect_33)); }
	inline RectTransform_t3349966182 * get_m_Rect_33() const { return ___m_Rect_33; }
	inline RectTransform_t3349966182 ** get_address_of_m_Rect_33() { return &___m_Rect_33; }
	inline void set_m_Rect_33(RectTransform_t3349966182 * value)
	{
		___m_Rect_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rect_33, value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_34() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_HorizontalScrollbarRect_34)); }
	inline RectTransform_t3349966182 * get_m_HorizontalScrollbarRect_34() const { return ___m_HorizontalScrollbarRect_34; }
	inline RectTransform_t3349966182 ** get_address_of_m_HorizontalScrollbarRect_34() { return &___m_HorizontalScrollbarRect_34; }
	inline void set_m_HorizontalScrollbarRect_34(RectTransform_t3349966182 * value)
	{
		___m_HorizontalScrollbarRect_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalScrollbarRect_34, value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_35() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_VerticalScrollbarRect_35)); }
	inline RectTransform_t3349966182 * get_m_VerticalScrollbarRect_35() const { return ___m_VerticalScrollbarRect_35; }
	inline RectTransform_t3349966182 ** get_address_of_m_VerticalScrollbarRect_35() { return &___m_VerticalScrollbarRect_35; }
	inline void set_m_VerticalScrollbarRect_35(RectTransform_t3349966182 * value)
	{
		___m_VerticalScrollbarRect_35 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalScrollbarRect_35, value);
	}

	inline static int32_t get_offset_of_m_Tracker_36() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Tracker_36)); }
	inline DrivenRectTransformTracker_t154385424  get_m_Tracker_36() const { return ___m_Tracker_36; }
	inline DrivenRectTransformTracker_t154385424 * get_address_of_m_Tracker_36() { return &___m_Tracker_36; }
	inline void set_m_Tracker_36(DrivenRectTransformTracker_t154385424  value)
	{
		___m_Tracker_36 = value;
	}

	inline static int32_t get_offset_of_m_Corners_37() { return static_cast<int32_t>(offsetof(ScrollRect_t1199013257, ___m_Corners_37)); }
	inline Vector3U5BU5D_t1172311765* get_m_Corners_37() const { return ___m_Corners_37; }
	inline Vector3U5BU5D_t1172311765** get_address_of_m_Corners_37() { return &___m_Corners_37; }
	inline void set_m_Corners_37(Vector3U5BU5D_t1172311765* value)
	{
		___m_Corners_37 = value;
		Il2CppCodeGenWriteBarrier(&___m_Corners_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
