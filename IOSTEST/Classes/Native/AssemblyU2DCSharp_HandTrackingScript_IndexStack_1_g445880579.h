#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object[]
struct ObjectU5BU5D_t3614634134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandTrackingScript/IndexStack`1<System.Object>
struct  IndexStack_1_t445880579  : public Il2CppObject
{
public:
	// T[] HandTrackingScript/IndexStack`1::array
	ObjectU5BU5D_t3614634134* ___array_0;
	// System.Int32 HandTrackingScript/IndexStack`1::size
	int32_t ___size_1;
	// System.Int32 HandTrackingScript/IndexStack`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(IndexStack_1_t445880579, ___array_0)); }
	inline ObjectU5BU5D_t3614634134* get_array_0() const { return ___array_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ObjectU5BU5D_t3614634134* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(IndexStack_1_t445880579, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(IndexStack_1_t445880579, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
