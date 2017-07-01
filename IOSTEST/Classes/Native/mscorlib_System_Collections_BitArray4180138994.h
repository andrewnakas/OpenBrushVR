#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.BitArray
struct  BitArray_t4180138994  : public Il2CppObject
{
public:
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t3030399641* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(BitArray_t4180138994, ___m_array_0)); }
	inline Int32U5BU5D_t3030399641* get_m_array_0() const { return ___m_array_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(Int32U5BU5D_t3030399641* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_array_0, value);
	}

	inline static int32_t get_offset_of_m_length_1() { return static_cast<int32_t>(offsetof(BitArray_t4180138994, ___m_length_1)); }
	inline int32_t get_m_length_1() const { return ___m_length_1; }
	inline int32_t* get_address_of_m_length_1() { return &___m_length_1; }
	inline void set_m_length_1(int32_t value)
	{
		___m_length_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(BitArray_t4180138994, ____version_2)); }
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
