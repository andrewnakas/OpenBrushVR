#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// ColorPicker
struct ColorPicker_t3035206225;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPickerTester
struct  ColorPickerTester_t1006114474  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer ColorPickerTester::renderer
	Renderer_t257310565 * ___renderer_2;
	// ColorPicker ColorPickerTester::picker
	ColorPicker_t3035206225 * ___picker_3;

public:
	inline static int32_t get_offset_of_renderer_2() { return static_cast<int32_t>(offsetof(ColorPickerTester_t1006114474, ___renderer_2)); }
	inline Renderer_t257310565 * get_renderer_2() const { return ___renderer_2; }
	inline Renderer_t257310565 ** get_address_of_renderer_2() { return &___renderer_2; }
	inline void set_renderer_2(Renderer_t257310565 * value)
	{
		___renderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___renderer_2, value);
	}

	inline static int32_t get_offset_of_picker_3() { return static_cast<int32_t>(offsetof(ColorPickerTester_t1006114474, ___picker_3)); }
	inline ColorPicker_t3035206225 * get_picker_3() const { return ___picker_3; }
	inline ColorPicker_t3035206225 ** get_address_of_picker_3() { return &___picker_3; }
	inline void set_picker_3(ColorPicker_t3035206225 * value)
	{
		___picker_3 = value;
		Il2CppCodeGenWriteBarrier(&___picker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
