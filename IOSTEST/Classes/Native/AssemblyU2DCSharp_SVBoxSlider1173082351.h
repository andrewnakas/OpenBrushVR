#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ColorPicker
struct ColorPicker_t3035206225;
// UnityEngine.UI.BoxSlider
struct BoxSlider_t1871650694;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SVBoxSlider
struct  SVBoxSlider_t1173082351  : public MonoBehaviour_t1158329972
{
public:
	// ColorPicker SVBoxSlider::picker
	ColorPicker_t3035206225 * ___picker_2;
	// UnityEngine.UI.BoxSlider SVBoxSlider::slider
	BoxSlider_t1871650694 * ___slider_3;
	// UnityEngine.UI.RawImage SVBoxSlider::image
	RawImage_t2749640213 * ___image_4;
	// System.Single SVBoxSlider::lastH
	float ___lastH_5;
	// System.Boolean SVBoxSlider::listen
	bool ___listen_6;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1173082351, ___picker_2)); }
	inline ColorPicker_t3035206225 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t3035206225 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t3035206225 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier(&___picker_2, value);
	}

	inline static int32_t get_offset_of_slider_3() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1173082351, ___slider_3)); }
	inline BoxSlider_t1871650694 * get_slider_3() const { return ___slider_3; }
	inline BoxSlider_t1871650694 ** get_address_of_slider_3() { return &___slider_3; }
	inline void set_slider_3(BoxSlider_t1871650694 * value)
	{
		___slider_3 = value;
		Il2CppCodeGenWriteBarrier(&___slider_3, value);
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1173082351, ___image_4)); }
	inline RawImage_t2749640213 * get_image_4() const { return ___image_4; }
	inline RawImage_t2749640213 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(RawImage_t2749640213 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier(&___image_4, value);
	}

	inline static int32_t get_offset_of_lastH_5() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1173082351, ___lastH_5)); }
	inline float get_lastH_5() const { return ___lastH_5; }
	inline float* get_address_of_lastH_5() { return &___lastH_5; }
	inline void set_lastH_5(float value)
	{
		___lastH_5 = value;
	}

	inline static int32_t get_offset_of_listen_6() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1173082351, ___listen_6)); }
	inline bool get_listen_6() const { return ___listen_6; }
	inline bool* get_address_of_listen_6() { return &___listen_6; }
	inline void set_listen_6(bool value)
	{
		___listen_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
