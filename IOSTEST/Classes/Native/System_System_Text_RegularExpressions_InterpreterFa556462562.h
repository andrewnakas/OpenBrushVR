#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.InterpreterFactory
struct  InterpreterFactory_t556462562  : public Il2CppObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::mapping
	Il2CppObject * ___mapping_0;
	// System.UInt16[] System.Text.RegularExpressions.InterpreterFactory::pattern
	UInt16U5BU5D_t2527266722* ___pattern_1;
	// System.String[] System.Text.RegularExpressions.InterpreterFactory::namesMapping
	StringU5BU5D_t1642385972* ___namesMapping_2;
	// System.Int32 System.Text.RegularExpressions.InterpreterFactory::gap
	int32_t ___gap_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___mapping_0)); }
	inline Il2CppObject * get_mapping_0() const { return ___mapping_0; }
	inline Il2CppObject ** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(Il2CppObject * value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_0, value);
	}

	inline static int32_t get_offset_of_pattern_1() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___pattern_1)); }
	inline UInt16U5BU5D_t2527266722* get_pattern_1() const { return ___pattern_1; }
	inline UInt16U5BU5D_t2527266722** get_address_of_pattern_1() { return &___pattern_1; }
	inline void set_pattern_1(UInt16U5BU5D_t2527266722* value)
	{
		___pattern_1 = value;
		Il2CppCodeGenWriteBarrier(&___pattern_1, value);
	}

	inline static int32_t get_offset_of_namesMapping_2() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___namesMapping_2)); }
	inline StringU5BU5D_t1642385972* get_namesMapping_2() const { return ___namesMapping_2; }
	inline StringU5BU5D_t1642385972** get_address_of_namesMapping_2() { return &___namesMapping_2; }
	inline void set_namesMapping_2(StringU5BU5D_t1642385972* value)
	{
		___namesMapping_2 = value;
		Il2CppCodeGenWriteBarrier(&___namesMapping_2, value);
	}

	inline static int32_t get_offset_of_gap_3() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___gap_3)); }
	inline int32_t get_gap_3() const { return ___gap_3; }
	inline int32_t* get_address_of_gap_3() { return &___gap_3; }
	inline void set_gap_3(int32_t value)
	{
		___gap_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
