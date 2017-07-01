#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Type1303803226.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EnumBuilder
struct  EnumBuilder_t2808714468  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t3308873219 * ____tb_8;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType_9;

public:
	inline static int32_t get_offset_of__tb_8() { return static_cast<int32_t>(offsetof(EnumBuilder_t2808714468, ____tb_8)); }
	inline TypeBuilder_t3308873219 * get__tb_8() const { return ____tb_8; }
	inline TypeBuilder_t3308873219 ** get_address_of__tb_8() { return &____tb_8; }
	inline void set__tb_8(TypeBuilder_t3308873219 * value)
	{
		____tb_8 = value;
		Il2CppCodeGenWriteBarrier(&____tb_8, value);
	}

	inline static int32_t get_offset_of__underlyingType_9() { return static_cast<int32_t>(offsetof(EnumBuilder_t2808714468, ____underlyingType_9)); }
	inline Type_t * get__underlyingType_9() const { return ____underlyingType_9; }
	inline Type_t ** get_address_of__underlyingType_9() { return &____underlyingType_9; }
	inline void set__underlyingType_9(Type_t * value)
	{
		____underlyingType_9 = value;
		Il2CppCodeGenWriteBarrier(&____underlyingType_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
