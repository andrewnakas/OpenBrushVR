#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown/OptionData
struct  OptionData_t2420267500  : public Il2CppObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t309593783 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t2420267500, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_0, value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t2420267500, ___m_Image_1)); }
	inline Sprite_t309593783 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t309593783 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t309593783 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
