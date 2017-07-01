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
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HexColorField
struct  HexColorField_t4192118964  : public MonoBehaviour_t1158329972
{
public:
	// ColorPicker HexColorField::hsvpicker
	ColorPicker_t3035206225 * ___hsvpicker_2;
	// System.Boolean HexColorField::displayAlpha
	bool ___displayAlpha_3;
	// UnityEngine.UI.InputField HexColorField::hexInputField
	InputField_t1631627530 * ___hexInputField_4;

public:
	inline static int32_t get_offset_of_hsvpicker_2() { return static_cast<int32_t>(offsetof(HexColorField_t4192118964, ___hsvpicker_2)); }
	inline ColorPicker_t3035206225 * get_hsvpicker_2() const { return ___hsvpicker_2; }
	inline ColorPicker_t3035206225 ** get_address_of_hsvpicker_2() { return &___hsvpicker_2; }
	inline void set_hsvpicker_2(ColorPicker_t3035206225 * value)
	{
		___hsvpicker_2 = value;
		Il2CppCodeGenWriteBarrier(&___hsvpicker_2, value);
	}

	inline static int32_t get_offset_of_displayAlpha_3() { return static_cast<int32_t>(offsetof(HexColorField_t4192118964, ___displayAlpha_3)); }
	inline bool get_displayAlpha_3() const { return ___displayAlpha_3; }
	inline bool* get_address_of_displayAlpha_3() { return &___displayAlpha_3; }
	inline void set_displayAlpha_3(bool value)
	{
		___displayAlpha_3 = value;
	}

	inline static int32_t get_offset_of_hexInputField_4() { return static_cast<int32_t>(offsetof(HexColorField_t4192118964, ___hexInputField_4)); }
	inline InputField_t1631627530 * get_hexInputField_4() const { return ___hexInputField_4; }
	inline InputField_t1631627530 ** get_address_of_hexInputField_4() { return &___hexInputField_4; }
	inline void set_hexInputField_4(InputField_t1631627530 * value)
	{
		___hexInputField_4 = value;
		Il2CppCodeGenWriteBarrier(&___hexInputField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
