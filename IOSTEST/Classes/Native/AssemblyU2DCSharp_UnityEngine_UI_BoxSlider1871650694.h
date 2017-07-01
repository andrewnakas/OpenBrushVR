#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker154385424.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.BoxSlider/BoxSliderEvent
struct BoxSliderEvent_t1774115848;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BoxSlider
struct  BoxSlider_t1871650694  : public Selectable_t1490392188
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.BoxSlider::m_HandleRect
	RectTransform_t3349966182 * ___m_HandleRect_16;
	// System.Single UnityEngine.UI.BoxSlider::m_MinValue
	float ___m_MinValue_17;
	// System.Single UnityEngine.UI.BoxSlider::m_MaxValue
	float ___m_MaxValue_18;
	// System.Boolean UnityEngine.UI.BoxSlider::m_WholeNumbers
	bool ___m_WholeNumbers_19;
	// System.Single UnityEngine.UI.BoxSlider::m_Value
	float ___m_Value_20;
	// System.Single UnityEngine.UI.BoxSlider::m_ValueY
	float ___m_ValueY_21;
	// UnityEngine.UI.BoxSlider/BoxSliderEvent UnityEngine.UI.BoxSlider::m_OnValueChanged
	BoxSliderEvent_t1774115848 * ___m_OnValueChanged_22;
	// UnityEngine.Transform UnityEngine.UI.BoxSlider::m_HandleTransform
	Transform_t3275118058 * ___m_HandleTransform_23;
	// UnityEngine.RectTransform UnityEngine.UI.BoxSlider::m_HandleContainerRect
	RectTransform_t3349966182 * ___m_HandleContainerRect_24;
	// UnityEngine.Vector2 UnityEngine.UI.BoxSlider::m_Offset
	Vector2_t2243707579  ___m_Offset_25;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.BoxSlider::m_Tracker
	DrivenRectTransformTracker_t154385424  ___m_Tracker_26;

public:
	inline static int32_t get_offset_of_m_HandleRect_16() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_HandleRect_16)); }
	inline RectTransform_t3349966182 * get_m_HandleRect_16() const { return ___m_HandleRect_16; }
	inline RectTransform_t3349966182 ** get_address_of_m_HandleRect_16() { return &___m_HandleRect_16; }
	inline void set_m_HandleRect_16(RectTransform_t3349966182 * value)
	{
		___m_HandleRect_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleRect_16, value);
	}

	inline static int32_t get_offset_of_m_MinValue_17() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_MinValue_17)); }
	inline float get_m_MinValue_17() const { return ___m_MinValue_17; }
	inline float* get_address_of_m_MinValue_17() { return &___m_MinValue_17; }
	inline void set_m_MinValue_17(float value)
	{
		___m_MinValue_17 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_18() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_MaxValue_18)); }
	inline float get_m_MaxValue_18() const { return ___m_MaxValue_18; }
	inline float* get_address_of_m_MaxValue_18() { return &___m_MaxValue_18; }
	inline void set_m_MaxValue_18(float value)
	{
		___m_MaxValue_18 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_19() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_WholeNumbers_19)); }
	inline bool get_m_WholeNumbers_19() const { return ___m_WholeNumbers_19; }
	inline bool* get_address_of_m_WholeNumbers_19() { return &___m_WholeNumbers_19; }
	inline void set_m_WholeNumbers_19(bool value)
	{
		___m_WholeNumbers_19 = value;
	}

	inline static int32_t get_offset_of_m_Value_20() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_Value_20)); }
	inline float get_m_Value_20() const { return ___m_Value_20; }
	inline float* get_address_of_m_Value_20() { return &___m_Value_20; }
	inline void set_m_Value_20(float value)
	{
		___m_Value_20 = value;
	}

	inline static int32_t get_offset_of_m_ValueY_21() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_ValueY_21)); }
	inline float get_m_ValueY_21() const { return ___m_ValueY_21; }
	inline float* get_address_of_m_ValueY_21() { return &___m_ValueY_21; }
	inline void set_m_ValueY_21(float value)
	{
		___m_ValueY_21 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_22() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_OnValueChanged_22)); }
	inline BoxSliderEvent_t1774115848 * get_m_OnValueChanged_22() const { return ___m_OnValueChanged_22; }
	inline BoxSliderEvent_t1774115848 ** get_address_of_m_OnValueChanged_22() { return &___m_OnValueChanged_22; }
	inline void set_m_OnValueChanged_22(BoxSliderEvent_t1774115848 * value)
	{
		___m_OnValueChanged_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_22, value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_23() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_HandleTransform_23)); }
	inline Transform_t3275118058 * get_m_HandleTransform_23() const { return ___m_HandleTransform_23; }
	inline Transform_t3275118058 ** get_address_of_m_HandleTransform_23() { return &___m_HandleTransform_23; }
	inline void set_m_HandleTransform_23(Transform_t3275118058 * value)
	{
		___m_HandleTransform_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleTransform_23, value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_24() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_HandleContainerRect_24)); }
	inline RectTransform_t3349966182 * get_m_HandleContainerRect_24() const { return ___m_HandleContainerRect_24; }
	inline RectTransform_t3349966182 ** get_address_of_m_HandleContainerRect_24() { return &___m_HandleContainerRect_24; }
	inline void set_m_HandleContainerRect_24(RectTransform_t3349966182 * value)
	{
		___m_HandleContainerRect_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleContainerRect_24, value);
	}

	inline static int32_t get_offset_of_m_Offset_25() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_Offset_25)); }
	inline Vector2_t2243707579  get_m_Offset_25() const { return ___m_Offset_25; }
	inline Vector2_t2243707579 * get_address_of_m_Offset_25() { return &___m_Offset_25; }
	inline void set_m_Offset_25(Vector2_t2243707579  value)
	{
		___m_Offset_25 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_26() { return static_cast<int32_t>(offsetof(BoxSlider_t1871650694, ___m_Tracker_26)); }
	inline DrivenRectTransformTracker_t154385424  get_m_Tracker_26() const { return ___m_Tracker_26; }
	inline DrivenRectTransformTracker_t154385424 * get_address_of_m_Tracker_26() { return &___m_Tracker_26; }
	inline void set_m_Tracker_26(DrivenRectTransformTracker_t154385424  value)
	{
		___m_Tracker_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
