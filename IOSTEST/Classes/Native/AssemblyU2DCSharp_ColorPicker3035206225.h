#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ColorChangedEvent
struct ColorChangedEvent_t2990895397;
// HSVChangedEvent
struct HSVChangedEvent_t1170297569;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPicker
struct  ColorPicker_t3035206225  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ColorPicker::_hue
	float ____hue_2;
	// System.Single ColorPicker::_saturation
	float ____saturation_3;
	// System.Single ColorPicker::_brightness
	float ____brightness_4;
	// System.Single ColorPicker::_red
	float ____red_5;
	// System.Single ColorPicker::_green
	float ____green_6;
	// System.Single ColorPicker::_blue
	float ____blue_7;
	// System.Single ColorPicker::_alpha
	float ____alpha_8;
	// ColorChangedEvent ColorPicker::onValueChanged
	ColorChangedEvent_t2990895397 * ___onValueChanged_9;
	// HSVChangedEvent ColorPicker::onHSVChanged
	HSVChangedEvent_t1170297569 * ___onHSVChanged_10;

public:
	inline static int32_t get_offset_of__hue_2() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____hue_2)); }
	inline float get__hue_2() const { return ____hue_2; }
	inline float* get_address_of__hue_2() { return &____hue_2; }
	inline void set__hue_2(float value)
	{
		____hue_2 = value;
	}

	inline static int32_t get_offset_of__saturation_3() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____saturation_3)); }
	inline float get__saturation_3() const { return ____saturation_3; }
	inline float* get_address_of__saturation_3() { return &____saturation_3; }
	inline void set__saturation_3(float value)
	{
		____saturation_3 = value;
	}

	inline static int32_t get_offset_of__brightness_4() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____brightness_4)); }
	inline float get__brightness_4() const { return ____brightness_4; }
	inline float* get_address_of__brightness_4() { return &____brightness_4; }
	inline void set__brightness_4(float value)
	{
		____brightness_4 = value;
	}

	inline static int32_t get_offset_of__red_5() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____red_5)); }
	inline float get__red_5() const { return ____red_5; }
	inline float* get_address_of__red_5() { return &____red_5; }
	inline void set__red_5(float value)
	{
		____red_5 = value;
	}

	inline static int32_t get_offset_of__green_6() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____green_6)); }
	inline float get__green_6() const { return ____green_6; }
	inline float* get_address_of__green_6() { return &____green_6; }
	inline void set__green_6(float value)
	{
		____green_6 = value;
	}

	inline static int32_t get_offset_of__blue_7() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____blue_7)); }
	inline float get__blue_7() const { return ____blue_7; }
	inline float* get_address_of__blue_7() { return &____blue_7; }
	inline void set__blue_7(float value)
	{
		____blue_7 = value;
	}

	inline static int32_t get_offset_of__alpha_8() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ____alpha_8)); }
	inline float get__alpha_8() const { return ____alpha_8; }
	inline float* get_address_of__alpha_8() { return &____alpha_8; }
	inline void set__alpha_8(float value)
	{
		____alpha_8 = value;
	}

	inline static int32_t get_offset_of_onValueChanged_9() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ___onValueChanged_9)); }
	inline ColorChangedEvent_t2990895397 * get_onValueChanged_9() const { return ___onValueChanged_9; }
	inline ColorChangedEvent_t2990895397 ** get_address_of_onValueChanged_9() { return &___onValueChanged_9; }
	inline void set_onValueChanged_9(ColorChangedEvent_t2990895397 * value)
	{
		___onValueChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___onValueChanged_9, value);
	}

	inline static int32_t get_offset_of_onHSVChanged_10() { return static_cast<int32_t>(offsetof(ColorPicker_t3035206225, ___onHSVChanged_10)); }
	inline HSVChangedEvent_t1170297569 * get_onHSVChanged_10() const { return ___onHSVChanged_10; }
	inline HSVChangedEvent_t1170297569 ** get_address_of_onHSVChanged_10() { return &___onHSVChanged_10; }
	inline void set_onHSVChanged_10(HSVChangedEvent_t1170297569 * value)
	{
		___onHSVChanged_10 = value;
		Il2CppCodeGenWriteBarrier(&___onHSVChanged_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
