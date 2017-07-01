#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Wacki.IUILaserPointer
struct IUILaserPointer_t3163974821;
// Wacki.LaserPointerInputModule/ControllerData
struct ControllerData_t2739001716;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Wacki.IUILaserPointer,Wacki.LaserPointerInputModule/ControllerData>
struct  KeyValuePair_2_t3630393004 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IUILaserPointer_t3163974821 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ControllerData_t2739001716 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3630393004, ___key_0)); }
	inline IUILaserPointer_t3163974821 * get_key_0() const { return ___key_0; }
	inline IUILaserPointer_t3163974821 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IUILaserPointer_t3163974821 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3630393004, ___value_1)); }
	inline ControllerData_t2739001716 * get_value_1() const { return ___value_1; }
	inline ControllerData_t2739001716 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ControllerData_t2739001716 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
