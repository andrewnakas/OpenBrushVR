#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Slot
struct  Slot_t2022531261 
{
public:
	// System.Object System.Collections.Hashtable/Slot::key
	Il2CppObject * ___key_0;
	// System.Object System.Collections.Hashtable/Slot::value
	Il2CppObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t2022531261, ___key_0)); }
	inline Il2CppObject * get_key_0() const { return ___key_0; }
	inline Il2CppObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Il2CppObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t2022531261, ___value_1)); }
	inline Il2CppObject * get_value_1() const { return ___value_1; }
	inline Il2CppObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/Slot
struct Slot_t2022531261_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.Hashtable/Slot
struct Slot_t2022531261_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
