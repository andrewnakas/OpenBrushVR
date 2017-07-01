#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3777177449;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Object>
struct  Enumerator_t132208513 
{
public:
	// System.Collections.Generic.Stack`1<T> System.Collections.Generic.Stack`1/Enumerator::parent
	Stack_1_t3777177449 * ___parent_0;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Enumerator_t132208513, ___parent_0)); }
	inline Stack_1_t3777177449 * get_parent_0() const { return ___parent_0; }
	inline Stack_1_t3777177449 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Stack_1_t3777177449 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier(&___parent_0, value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(Enumerator_t132208513, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t132208513, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
