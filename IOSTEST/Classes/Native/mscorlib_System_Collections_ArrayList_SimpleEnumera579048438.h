#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SimpleEnumerator
struct  SimpleEnumerator_t579048438  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/SimpleEnumerator::list
	ArrayList_t4252133567 * ___list_0;
	// System.Int32 System.Collections.ArrayList/SimpleEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/SimpleEnumerator::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/SimpleEnumerator::currentElement
	Il2CppObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t579048438, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t579048438, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t579048438, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t579048438, ___currentElement_3)); }
	inline Il2CppObject * get_currentElement_3() const { return ___currentElement_3; }
	inline Il2CppObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(Il2CppObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentElement_3, value);
	}
};

struct SimpleEnumerator_t579048438_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/SimpleEnumerator::endFlag
	Il2CppObject * ___endFlag_4;

public:
	inline static int32_t get_offset_of_endFlag_4() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t579048438_StaticFields, ___endFlag_4)); }
	inline Il2CppObject * get_endFlag_4() const { return ___endFlag_4; }
	inline Il2CppObject ** get_address_of_endFlag_4() { return &___endFlag_4; }
	inline void set_endFlag_4(Il2CppObject * value)
	{
		___endFlag_4 = value;
		Il2CppCodeGenWriteBarrier(&___endFlag_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
