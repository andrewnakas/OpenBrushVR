#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSaturationBrightnessPicker
struct  ColorSaturationBrightnessPicker_t179188806  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material ColorSaturationBrightnessPicker::backgroundMaterial
	Material_t193706927 * ___backgroundMaterial_2;

public:
	inline static int32_t get_offset_of_backgroundMaterial_2() { return static_cast<int32_t>(offsetof(ColorSaturationBrightnessPicker_t179188806, ___backgroundMaterial_2)); }
	inline Material_t193706927 * get_backgroundMaterial_2() const { return ___backgroundMaterial_2; }
	inline Material_t193706927 ** get_address_of_backgroundMaterial_2() { return &___backgroundMaterial_2; }
	inline void set_backgroundMaterial_2(Material_t193706927 * value)
	{
		___backgroundMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundMaterial_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
