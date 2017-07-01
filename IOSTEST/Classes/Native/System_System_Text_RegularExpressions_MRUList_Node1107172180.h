#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t1107172180;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t1107172180  : public Il2CppObject
{
public:
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	Il2CppObject * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t1107172180 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t1107172180 * ___next_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_t1107172180, ___value_0)); }
	inline Il2CppObject * get_value_0() const { return ___value_0; }
	inline Il2CppObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Il2CppObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Node_t1107172180, ___previous_1)); }
	inline Node_t1107172180 * get_previous_1() const { return ___previous_1; }
	inline Node_t1107172180 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Node_t1107172180 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier(&___previous_1, value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(Node_t1107172180, ___next_2)); }
	inline Node_t1107172180 * get_next_2() const { return ___next_2; }
	inline Node_t1107172180 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(Node_t1107172180 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier(&___next_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
