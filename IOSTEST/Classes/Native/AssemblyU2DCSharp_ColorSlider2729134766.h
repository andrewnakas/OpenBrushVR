#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ColorValues3063098635.h"

// ColorPicker
struct ColorPicker_t3035206225;
// UnityEngine.UI.Slider
struct Slider_t297367283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSlider
struct  ColorSlider_t2729134766  : public MonoBehaviour_t1158329972
{
public:
	// ColorPicker ColorSlider::hsvpicker
	ColorPicker_t3035206225 * ___hsvpicker_2;
	// ColorValues ColorSlider::type
	int32_t ___type_3;
	// UnityEngine.UI.Slider ColorSlider::slider
	Slider_t297367283 * ___slider_4;
	// System.Boolean ColorSlider::listen
	bool ___listen_5;

public:
	inline static int32_t get_offset_of_hsvpicker_2() { return static_cast<int32_t>(offsetof(ColorSlider_t2729134766, ___hsvpicker_2)); }
	inline ColorPicker_t3035206225 * get_hsvpicker_2() const { return ___hsvpicker_2; }
	inline ColorPicker_t3035206225 ** get_address_of_hsvpicker_2() { return &___hsvpicker_2; }
	inline void set_hsvpicker_2(ColorPicker_t3035206225 * value)
	{
		___hsvpicker_2 = value;
		Il2CppCodeGenWriteBarrier(&___hsvpicker_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ColorSlider_t2729134766, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(ColorSlider_t2729134766, ___slider_4)); }
	inline Slider_t297367283 * get_slider_4() const { return ___slider_4; }
	inline Slider_t297367283 ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_t297367283 * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier(&___slider_4, value);
	}

	inline static int32_t get_offset_of_listen_5() { return static_cast<int32_t>(offsetof(ColorSlider_t2729134766, ___listen_5)); }
	inline bool get_listen_5() const { return ___listen_5; }
	inline bool* get_address_of_listen_5() { return &___listen_5; }
	inline void set_listen_5(bool value)
	{
		___listen_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
