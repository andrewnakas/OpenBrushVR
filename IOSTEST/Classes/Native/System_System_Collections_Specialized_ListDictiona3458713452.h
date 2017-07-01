#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2725637098;
// System.Collections.IComparer
struct IComparer_t3952557350;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t3458713452  : public Il2CppObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2725637098 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	Il2CppObject * ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___head_2)); }
	inline DictionaryNode_t2725637098 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t2725637098 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t2725637098 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier(&___head_2, value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___comparer_3)); }
	inline Il2CppObject * get_comparer_3() const { return ___comparer_3; }
	inline Il2CppObject ** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(Il2CppObject * value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
