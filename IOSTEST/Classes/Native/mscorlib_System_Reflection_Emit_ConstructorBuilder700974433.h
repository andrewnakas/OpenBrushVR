#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1541361196.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t2122994367;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2318378278;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ConstructorBuilder
struct  ConstructorBuilder_t700974433  : public ConstructorInfo_t2851816542
{
public:
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::ilgen
	ILGenerator_t99948092 * ___ilgen_2;
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t1664964607* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_4;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::iattrs
	int32_t ___iattrs_5;
	// System.Int32 System.Reflection.Emit.ConstructorBuilder::table_idx
	int32_t ___table_idx_6;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t3308873219 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t2122994367* ___pinfo_9;
	// System.Boolean System.Reflection.Emit.ConstructorBuilder::init_locals
	bool ___init_locals_10;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModReq
	TypeU5BU5DU5BU5D_t2318378278* ___paramModReq_11;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t2318378278* ___paramModOpt_12;

public:
	inline static int32_t get_offset_of_ilgen_2() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___ilgen_2)); }
	inline ILGenerator_t99948092 * get_ilgen_2() const { return ___ilgen_2; }
	inline ILGenerator_t99948092 ** get_address_of_ilgen_2() { return &___ilgen_2; }
	inline void set_ilgen_2(ILGenerator_t99948092 * value)
	{
		___ilgen_2 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_2, value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___parameters_3)); }
	inline TypeU5BU5D_t1664964607* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t1664964607* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}

	inline static int32_t get_offset_of_iattrs_5() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___iattrs_5)); }
	inline int32_t get_iattrs_5() const { return ___iattrs_5; }
	inline int32_t* get_address_of_iattrs_5() { return &___iattrs_5; }
	inline void set_iattrs_5(int32_t value)
	{
		___iattrs_5 = value;
	}

	inline static int32_t get_offset_of_table_idx_6() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___table_idx_6)); }
	inline int32_t get_table_idx_6() const { return ___table_idx_6; }
	inline int32_t* get_address_of_table_idx_6() { return &___table_idx_6; }
	inline void set_table_idx_6(int32_t value)
	{
		___table_idx_6 = value;
	}

	inline static int32_t get_offset_of_call_conv_7() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___call_conv_7)); }
	inline int32_t get_call_conv_7() const { return ___call_conv_7; }
	inline int32_t* get_address_of_call_conv_7() { return &___call_conv_7; }
	inline void set_call_conv_7(int32_t value)
	{
		___call_conv_7 = value;
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___type_8)); }
	inline TypeBuilder_t3308873219 * get_type_8() const { return ___type_8; }
	inline TypeBuilder_t3308873219 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeBuilder_t3308873219 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier(&___type_8, value);
	}

	inline static int32_t get_offset_of_pinfo_9() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___pinfo_9)); }
	inline ParameterBuilderU5BU5D_t2122994367* get_pinfo_9() const { return ___pinfo_9; }
	inline ParameterBuilderU5BU5D_t2122994367** get_address_of_pinfo_9() { return &___pinfo_9; }
	inline void set_pinfo_9(ParameterBuilderU5BU5D_t2122994367* value)
	{
		___pinfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___pinfo_9, value);
	}

	inline static int32_t get_offset_of_init_locals_10() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___init_locals_10)); }
	inline bool get_init_locals_10() const { return ___init_locals_10; }
	inline bool* get_address_of_init_locals_10() { return &___init_locals_10; }
	inline void set_init_locals_10(bool value)
	{
		___init_locals_10 = value;
	}

	inline static int32_t get_offset_of_paramModReq_11() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___paramModReq_11)); }
	inline TypeU5BU5DU5BU5D_t2318378278* get_paramModReq_11() const { return ___paramModReq_11; }
	inline TypeU5BU5DU5BU5D_t2318378278** get_address_of_paramModReq_11() { return &___paramModReq_11; }
	inline void set_paramModReq_11(TypeU5BU5DU5BU5D_t2318378278* value)
	{
		___paramModReq_11 = value;
		Il2CppCodeGenWriteBarrier(&___paramModReq_11, value);
	}

	inline static int32_t get_offset_of_paramModOpt_12() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t700974433, ___paramModOpt_12)); }
	inline TypeU5BU5DU5BU5D_t2318378278* get_paramModOpt_12() const { return ___paramModOpt_12; }
	inline TypeU5BU5DU5BU5D_t2318378278** get_address_of_paramModOpt_12() { return &___paramModOpt_12; }
	inline void set_paramModOpt_12(TypeU5BU5DU5BU5D_t2318378278* value)
	{
		___paramModOpt_12 = value;
		Il2CppCodeGenWriteBarrier(&___paramModOpt_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
