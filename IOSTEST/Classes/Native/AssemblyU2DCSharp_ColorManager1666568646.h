#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// ColorManager
struct ColorManager_t1666568646;
// ColorPicker
struct ColorPicker_t3035206225;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorManager
struct  ColorManager_t1666568646  : public MonoBehaviour_t1158329972
{
public:
	// ColorPicker ColorManager::picker
	ColorPicker_t3035206225 * ___picker_3;
	// UnityEngine.Color ColorManager::col
	Color_t2020392075  ___col_4;
	// UnityEngine.Color ColorManager::color
	Color_t2020392075  ___color_5;

public:
	inline static int32_t get_offset_of_picker_3() { return static_cast<int32_t>(offsetof(ColorManager_t1666568646, ___picker_3)); }
	inline ColorPicker_t3035206225 * get_picker_3() const { return ___picker_3; }
	inline ColorPicker_t3035206225 ** get_address_of_picker_3() { return &___picker_3; }
	inline void set_picker_3(ColorPicker_t3035206225 * value)
	{
		___picker_3 = value;
		Il2CppCodeGenWriteBarrier(&___picker_3, value);
	}

	inline static int32_t get_offset_of_col_4() { return static_cast<int32_t>(offsetof(ColorManager_t1666568646, ___col_4)); }
	inline Color_t2020392075  get_col_4() const { return ___col_4; }
	inline Color_t2020392075 * get_address_of_col_4() { return &___col_4; }
	inline void set_col_4(Color_t2020392075  value)
	{
		___col_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(ColorManager_t1666568646, ___color_5)); }
	inline Color_t2020392075  get_color_5() const { return ___color_5; }
	inline Color_t2020392075 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(Color_t2020392075  value)
	{
		___color_5 = value;
	}
};

struct ColorManager_t1666568646_StaticFields
{
public:
	// ColorManager ColorManager::Instance
	ColorManager_t1666568646 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(ColorManager_t1666568646_StaticFields, ___Instance_2)); }
	inline ColorManager_t1666568646 * get_Instance_2() const { return ___Instance_2; }
	inline ColorManager_t1666568646 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(ColorManager_t1666568646 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
