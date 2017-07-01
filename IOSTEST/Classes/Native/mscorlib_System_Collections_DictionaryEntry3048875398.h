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

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3048875398 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	Il2CppObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	Il2CppObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3048875398, ____key_0)); }
	inline Il2CppObject * get__key_0() const { return ____key_0; }
	inline Il2CppObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(Il2CppObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier(&____key_0, value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3048875398, ____value_1)); }
	inline Il2CppObject * get__value_1() const { return ____value_1; }
	inline Il2CppObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(Il2CppObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier(&____value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3048875398_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3048875398_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
