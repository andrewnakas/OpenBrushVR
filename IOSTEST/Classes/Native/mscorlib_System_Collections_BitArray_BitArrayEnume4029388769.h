#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.BitArray
struct BitArray_t4180138994;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.BitArray/BitArrayEnumerator
struct  BitArrayEnumerator_t4029388769  : public Il2CppObject
{
public:
	// System.Collections.BitArray System.Collections.BitArray/BitArrayEnumerator::_bitArray
	BitArray_t4180138994 * ____bitArray_0;
	// System.Boolean System.Collections.BitArray/BitArrayEnumerator::_current
	bool ____current_1;
	// System.Int32 System.Collections.BitArray/BitArrayEnumerator::_index
	int32_t ____index_2;
	// System.Int32 System.Collections.BitArray/BitArrayEnumerator::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__bitArray_0() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t4029388769, ____bitArray_0)); }
	inline BitArray_t4180138994 * get__bitArray_0() const { return ____bitArray_0; }
	inline BitArray_t4180138994 ** get_address_of__bitArray_0() { return &____bitArray_0; }
	inline void set__bitArray_0(BitArray_t4180138994 * value)
	{
		____bitArray_0 = value;
		Il2CppCodeGenWriteBarrier(&____bitArray_0, value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t4029388769, ____current_1)); }
	inline bool get__current_1() const { return ____current_1; }
	inline bool* get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(bool value)
	{
		____current_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t4029388769, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t4029388769, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
