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
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorImage
struct  ColorImage_t3157136356  : public MonoBehaviour_t1158329972
{
public:
	// ColorPicker ColorImage::picker
	ColorPicker_t3035206225 * ___picker_2;
	// UnityEngine.UI.Image ColorImage::image
	Image_t2042527209 * ___image_3;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(ColorImage_t3157136356, ___picker_2)); }
	inline ColorPicker_t3035206225 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t3035206225 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t3035206225 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier(&___picker_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(ColorImage_t3157136356, ___image_3)); }
	inline Image_t2042527209 * get_image_3() const { return ___image_3; }
	inline Image_t2042527209 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Image_t2042527209 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
