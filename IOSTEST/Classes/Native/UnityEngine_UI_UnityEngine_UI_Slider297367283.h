#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction1525323322.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker154385424.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t2111116400;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t297367283  : public Selectable_t1490392188
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3349966182 * ___m_FillRect_16;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3349966182 * ___m_HandleRect_17;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_18;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_19;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_20;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_21;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_22;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t2111116400 * ___m_OnValueChanged_23;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2042527209 * ___m_FillImage_24;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3275118058 * ___m_FillTransform_25;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3349966182 * ___m_FillContainerRect_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3275118058 * ___m_HandleTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3349966182 * ___m_HandleContainerRect_28;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2243707579  ___m_Offset_29;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t154385424  ___m_Tracker_30;

public:
	inline static int32_t get_offset_of_m_FillRect_16() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_FillRect_16)); }
	inline RectTransform_t3349966182 * get_m_FillRect_16() const { return ___m_FillRect_16; }
	inline RectTransform_t3349966182 ** get_address_of_m_FillRect_16() { return &___m_FillRect_16; }
	inline void set_m_FillRect_16(RectTransform_t3349966182 * value)
	{
		___m_FillRect_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillRect_16, value);
	}

	inline static int32_t get_offset_of_m_HandleRect_17() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_HandleRect_17)); }
	inline RectTransform_t3349966182 * get_m_HandleRect_17() const { return ___m_HandleRect_17; }
	inline RectTransform_t3349966182 ** get_address_of_m_HandleRect_17() { return &___m_HandleRect_17; }
	inline void set_m_HandleRect_17(RectTransform_t3349966182 * value)
	{
		___m_HandleRect_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleRect_17, value);
	}

	inline static int32_t get_offset_of_m_Direction_18() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_Direction_18)); }
	inline int32_t get_m_Direction_18() const { return ___m_Direction_18; }
	inline int32_t* get_address_of_m_Direction_18() { return &___m_Direction_18; }
	inline void set_m_Direction_18(int32_t value)
	{
		___m_Direction_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_MinValue_19)); }
	inline float get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline float* get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(float value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_MaxValue_20)); }
	inline float get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline float* get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(float value)
	{
		___m_MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_21() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_WholeNumbers_21)); }
	inline bool get_m_WholeNumbers_21() const { return ___m_WholeNumbers_21; }
	inline bool* get_address_of_m_WholeNumbers_21() { return &___m_WholeNumbers_21; }
	inline void set_m_WholeNumbers_21(bool value)
	{
		___m_WholeNumbers_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_OnValueChanged_23)); }
	inline SliderEvent_t2111116400 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline SliderEvent_t2111116400 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(SliderEvent_t2111116400 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_23, value);
	}

	inline static int32_t get_offset_of_m_FillImage_24() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_FillImage_24)); }
	inline Image_t2042527209 * get_m_FillImage_24() const { return ___m_FillImage_24; }
	inline Image_t2042527209 ** get_address_of_m_FillImage_24() { return &___m_FillImage_24; }
	inline void set_m_FillImage_24(Image_t2042527209 * value)
	{
		___m_FillImage_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillImage_24, value);
	}

	inline static int32_t get_offset_of_m_FillTransform_25() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_FillTransform_25)); }
	inline Transform_t3275118058 * get_m_FillTransform_25() const { return ___m_FillTransform_25; }
	inline Transform_t3275118058 ** get_address_of_m_FillTransform_25() { return &___m_FillTransform_25; }
	inline void set_m_FillTransform_25(Transform_t3275118058 * value)
	{
		___m_FillTransform_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillTransform_25, value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_26() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_FillContainerRect_26)); }
	inline RectTransform_t3349966182 * get_m_FillContainerRect_26() const { return ___m_FillContainerRect_26; }
	inline RectTransform_t3349966182 ** get_address_of_m_FillContainerRect_26() { return &___m_FillContainerRect_26; }
	inline void set_m_FillContainerRect_26(RectTransform_t3349966182 * value)
	{
		___m_FillContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillContainerRect_26, value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_27() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_HandleTransform_27)); }
	inline Transform_t3275118058 * get_m_HandleTransform_27() const { return ___m_HandleTransform_27; }
	inline Transform_t3275118058 ** get_address_of_m_HandleTransform_27() { return &___m_HandleTransform_27; }
	inline void set_m_HandleTransform_27(Transform_t3275118058 * value)
	{
		___m_HandleTransform_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleTransform_27, value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_HandleContainerRect_28)); }
	inline RectTransform_t3349966182 * get_m_HandleContainerRect_28() const { return ___m_HandleContainerRect_28; }
	inline RectTransform_t3349966182 ** get_address_of_m_HandleContainerRect_28() { return &___m_HandleContainerRect_28; }
	inline void set_m_HandleContainerRect_28(RectTransform_t3349966182 * value)
	{
		___m_HandleContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleContainerRect_28, value);
	}

	inline static int32_t get_offset_of_m_Offset_29() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_Offset_29)); }
	inline Vector2_t2243707579  get_m_Offset_29() const { return ___m_Offset_29; }
	inline Vector2_t2243707579 * get_address_of_m_Offset_29() { return &___m_Offset_29; }
	inline void set_m_Offset_29(Vector2_t2243707579  value)
	{
		___m_Offset_29 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_30() { return static_cast<int32_t>(offsetof(Slider_t297367283, ___m_Tracker_30)); }
	inline DrivenRectTransformTracker_t154385424  get_m_Tracker_30() const { return ___m_Tracker_30; }
	inline DrivenRectTransformTracker_t154385424 * get_address_of_m_Tracker_30() { return &___m_Tracker_30; }
	inline void set_m_Tracker_30(DrivenRectTransformTracker_t154385424  value)
	{
		___m_Tracker_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
