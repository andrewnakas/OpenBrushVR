#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"
#include "UnityEngine_UI_UnityEngine_UI_ContentSizeFitter_Fi4030874534.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker154385424.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ContentSizeFitter
struct  ContentSizeFitter_t1325211874  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_2;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_3;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t3349966182 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t154385424  ___m_Tracker_5;

public:
	inline static int32_t get_offset_of_m_HorizontalFit_2() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t1325211874, ___m_HorizontalFit_2)); }
	inline int32_t get_m_HorizontalFit_2() const { return ___m_HorizontalFit_2; }
	inline int32_t* get_address_of_m_HorizontalFit_2() { return &___m_HorizontalFit_2; }
	inline void set_m_HorizontalFit_2(int32_t value)
	{
		___m_HorizontalFit_2 = value;
	}

	inline static int32_t get_offset_of_m_VerticalFit_3() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t1325211874, ___m_VerticalFit_3)); }
	inline int32_t get_m_VerticalFit_3() const { return ___m_VerticalFit_3; }
	inline int32_t* get_address_of_m_VerticalFit_3() { return &___m_VerticalFit_3; }
	inline void set_m_VerticalFit_3(int32_t value)
	{
		___m_VerticalFit_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t1325211874, ___m_Rect_4)); }
	inline RectTransform_t3349966182 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3349966182 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3349966182 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rect_4, value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t1325211874, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t154385424  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t154385424 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t154385424  value)
	{
		___m_Tracker_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
