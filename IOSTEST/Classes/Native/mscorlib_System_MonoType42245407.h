#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Type1303803226.h"

// System.MonoTypeInfo
struct MonoTypeInfo_t1976057079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t1976057079 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t1976057079 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t1976057079 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t1976057079 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier(&___type_info_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
