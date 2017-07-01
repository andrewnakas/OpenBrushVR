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
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t644187984;
// System.String
struct String_t;
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t1370236603  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t3308873219 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t644187984 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_11;

public:
	inline static int32_t get_offset_of_tbuilder_8() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1370236603, ___tbuilder_8)); }
	inline TypeBuilder_t3308873219 * get_tbuilder_8() const { return ___tbuilder_8; }
	inline TypeBuilder_t3308873219 ** get_address_of_tbuilder_8() { return &___tbuilder_8; }
	inline void set_tbuilder_8(TypeBuilder_t3308873219 * value)
	{
		___tbuilder_8 = value;
		Il2CppCodeGenWriteBarrier(&___tbuilder_8, value);
	}

	inline static int32_t get_offset_of_mbuilder_9() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1370236603, ___mbuilder_9)); }
	inline MethodBuilder_t644187984 * get_mbuilder_9() const { return ___mbuilder_9; }
	inline MethodBuilder_t644187984 ** get_address_of_mbuilder_9() { return &___mbuilder_9; }
	inline void set_mbuilder_9(MethodBuilder_t644187984 * value)
	{
		___mbuilder_9 = value;
		Il2CppCodeGenWriteBarrier(&___mbuilder_9, value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1370236603, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier(&___name_10, value);
	}

	inline static int32_t get_offset_of_base_type_11() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1370236603, ___base_type_11)); }
	inline Type_t * get_base_type_11() const { return ___base_type_11; }
	inline Type_t ** get_address_of_base_type_11() { return &___base_type_11; }
	inline void set_base_type_11(Type_t * value)
	{
		___base_type_11 = value;
		Il2CppCodeGenWriteBarrier(&___base_type_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
