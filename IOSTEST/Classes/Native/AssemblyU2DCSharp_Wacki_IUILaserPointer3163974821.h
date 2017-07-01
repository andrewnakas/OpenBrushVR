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

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wacki.IUILaserPointer
struct  IUILaserPointer_t3163974821  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Wacki.IUILaserPointer::laserThickness
	float ___laserThickness_2;
	// System.Single Wacki.IUILaserPointer::laserHitScale
	float ___laserHitScale_3;
	// System.Boolean Wacki.IUILaserPointer::laserAlwaysOn
	bool ___laserAlwaysOn_4;
	// UnityEngine.Color Wacki.IUILaserPointer::color
	Color_t2020392075  ___color_5;
	// UnityEngine.GameObject Wacki.IUILaserPointer::hitPoint
	GameObject_t1756533147 * ___hitPoint_6;
	// UnityEngine.GameObject Wacki.IUILaserPointer::pointer
	GameObject_t1756533147 * ___pointer_7;
	// System.Single Wacki.IUILaserPointer::_distanceLimit
	float ____distanceLimit_8;

public:
	inline static int32_t get_offset_of_laserThickness_2() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ___laserThickness_2)); }
	inline float get_laserThickness_2() const { return ___laserThickness_2; }
	inline float* get_address_of_laserThickness_2() { return &___laserThickness_2; }
	inline void set_laserThickness_2(float value)
	{
		___laserThickness_2 = value;
	}

	inline static int32_t get_offset_of_laserHitScale_3() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ___laserHitScale_3)); }
	inline float get_laserHitScale_3() const { return ___laserHitScale_3; }
	inline float* get_address_of_laserHitScale_3() { return &___laserHitScale_3; }
	inline void set_laserHitScale_3(float value)
	{
		___laserHitScale_3 = value;
	}

	inline static int32_t get_offset_of_laserAlwaysOn_4() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ___laserAlwaysOn_4)); }
	inline bool get_laserAlwaysOn_4() const { return ___laserAlwaysOn_4; }
	inline bool* get_address_of_laserAlwaysOn_4() { return &___laserAlwaysOn_4; }
	inline void set_laserAlwaysOn_4(bool value)
	{
		___laserAlwaysOn_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ___color_5)); }
	inline Color_t2020392075  get_color_5() const { return ___color_5; }
	inline Color_t2020392075 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(Color_t2020392075  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_hitPoint_6() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ___hitPoint_6)); }
	inline GameObject_t1756533147 * get_hitPoint_6() const { return ___hitPoint_6; }
	inline GameObject_t1756533147 ** get_address_of_hitPoint_6() { return &___hitPoint_6; }
	inline void set_hitPoint_6(GameObject_t1756533147 * value)
	{
		___hitPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___hitPoint_6, value);
	}

	inline static int32_t get_offset_of_pointer_7() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ___pointer_7)); }
	inline GameObject_t1756533147 * get_pointer_7() const { return ___pointer_7; }
	inline GameObject_t1756533147 ** get_address_of_pointer_7() { return &___pointer_7; }
	inline void set_pointer_7(GameObject_t1756533147 * value)
	{
		___pointer_7 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_7, value);
	}

	inline static int32_t get_offset_of__distanceLimit_8() { return static_cast<int32_t>(offsetof(IUILaserPointer_t3163974821, ____distanceLimit_8)); }
	inline float get__distanceLimit_8() const { return ____distanceLimit_8; }
	inline float* get_address_of__distanceLimit_8() { return &____distanceLimit_8; }
	inline void set__distanceLimit_8(float value)
	{
		____distanceLimit_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
