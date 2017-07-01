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
// System.Type[]
struct TypeU5BU5D_t1664964607;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2607082565  : public Il2CppObject
{
public:

public:
};

struct Convert_t2607082565_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	Il2CppObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t1664964607* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t2607082565_StaticFields, ___DBNull_0)); }
	inline Il2CppObject * get_DBNull_0() const { return ___DBNull_0; }
	inline Il2CppObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(Il2CppObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier(&___DBNull_0, value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t2607082565_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t1664964607* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t1664964607** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t1664964607* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier(&___conversionTable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
