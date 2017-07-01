#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1541361196.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"

// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t2122994367;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t358971386;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t644187984  : public MethodInfo_t
{
public:
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t1664964607* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t3397334013* ___code_5;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t99948092 * ___ilgen_6;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t3308873219 * ___type_7;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t2122994367* ___pinfo_8;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_9;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_10;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t358971386* ___generic_params_11;

public:
	inline static int32_t get_offset_of_rtype_0() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___rtype_0)); }
	inline Type_t * get_rtype_0() const { return ___rtype_0; }
	inline Type_t ** get_address_of_rtype_0() { return &___rtype_0; }
	inline void set_rtype_0(Type_t * value)
	{
		___rtype_0 = value;
		Il2CppCodeGenWriteBarrier(&___rtype_0, value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___parameters_1)); }
	inline TypeU5BU5D_t1664964607* get_parameters_1() const { return ___parameters_1; }
	inline TypeU5BU5D_t1664964607** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(TypeU5BU5D_t1664964607* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_1, value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_code_5() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___code_5)); }
	inline ByteU5BU5D_t3397334013* get_code_5() const { return ___code_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_code_5() { return &___code_5; }
	inline void set_code_5(ByteU5BU5D_t3397334013* value)
	{
		___code_5 = value;
		Il2CppCodeGenWriteBarrier(&___code_5, value);
	}

	inline static int32_t get_offset_of_ilgen_6() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___ilgen_6)); }
	inline ILGenerator_t99948092 * get_ilgen_6() const { return ___ilgen_6; }
	inline ILGenerator_t99948092 ** get_address_of_ilgen_6() { return &___ilgen_6; }
	inline void set_ilgen_6(ILGenerator_t99948092 * value)
	{
		___ilgen_6 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_6, value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___type_7)); }
	inline TypeBuilder_t3308873219 * get_type_7() const { return ___type_7; }
	inline TypeBuilder_t3308873219 ** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(TypeBuilder_t3308873219 * value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier(&___type_7, value);
	}

	inline static int32_t get_offset_of_pinfo_8() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___pinfo_8)); }
	inline ParameterBuilderU5BU5D_t2122994367* get_pinfo_8() const { return ___pinfo_8; }
	inline ParameterBuilderU5BU5D_t2122994367** get_address_of_pinfo_8() { return &___pinfo_8; }
	inline void set_pinfo_8(ParameterBuilderU5BU5D_t2122994367* value)
	{
		___pinfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___pinfo_8, value);
	}

	inline static int32_t get_offset_of_override_method_9() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___override_method_9)); }
	inline MethodInfo_t * get_override_method_9() const { return ___override_method_9; }
	inline MethodInfo_t ** get_address_of_override_method_9() { return &___override_method_9; }
	inline void set_override_method_9(MethodInfo_t * value)
	{
		___override_method_9 = value;
		Il2CppCodeGenWriteBarrier(&___override_method_9, value);
	}

	inline static int32_t get_offset_of_call_conv_10() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___call_conv_10)); }
	inline int32_t get_call_conv_10() const { return ___call_conv_10; }
	inline int32_t* get_address_of_call_conv_10() { return &___call_conv_10; }
	inline void set_call_conv_10(int32_t value)
	{
		___call_conv_10 = value;
	}

	inline static int32_t get_offset_of_generic_params_11() { return static_cast<int32_t>(offsetof(MethodBuilder_t644187984, ___generic_params_11)); }
	inline GenericTypeParameterBuilderU5BU5D_t358971386* get_generic_params_11() const { return ___generic_params_11; }
	inline GenericTypeParameterBuilderU5BU5D_t358971386** get_address_of_generic_params_11() { return &___generic_params_11; }
	inline void set_generic_params_11(GenericTypeParameterBuilderU5BU5D_t358971386* value)
	{
		___generic_params_11 = value;
		Il2CppCodeGenWriteBarrier(&___generic_params_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
