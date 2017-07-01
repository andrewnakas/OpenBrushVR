#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_Assembly4268412390.h"

// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t3642333382;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3593287923;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t117835354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1646117627  : public Assembly_t4268412390
{
public:
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t3642333382* ___modules_10;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t3593287923* ___loaded_modules_11;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_12;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_13;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_14;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t117835354 * ___sn_15;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_16;

public:
	inline static int32_t get_offset_of_modules_10() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___modules_10)); }
	inline ModuleBuilderU5BU5D_t3642333382* get_modules_10() const { return ___modules_10; }
	inline ModuleBuilderU5BU5D_t3642333382** get_address_of_modules_10() { return &___modules_10; }
	inline void set_modules_10(ModuleBuilderU5BU5D_t3642333382* value)
	{
		___modules_10 = value;
		Il2CppCodeGenWriteBarrier(&___modules_10, value);
	}

	inline static int32_t get_offset_of_loaded_modules_11() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___loaded_modules_11)); }
	inline ModuleU5BU5D_t3593287923* get_loaded_modules_11() const { return ___loaded_modules_11; }
	inline ModuleU5BU5D_t3593287923** get_address_of_loaded_modules_11() { return &___loaded_modules_11; }
	inline void set_loaded_modules_11(ModuleU5BU5D_t3593287923* value)
	{
		___loaded_modules_11 = value;
		Il2CppCodeGenWriteBarrier(&___loaded_modules_11, value);
	}

	inline static int32_t get_offset_of_corlib_object_type_12() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_object_type_12)); }
	inline Type_t * get_corlib_object_type_12() const { return ___corlib_object_type_12; }
	inline Type_t ** get_address_of_corlib_object_type_12() { return &___corlib_object_type_12; }
	inline void set_corlib_object_type_12(Type_t * value)
	{
		___corlib_object_type_12 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_object_type_12, value);
	}

	inline static int32_t get_offset_of_corlib_value_type_13() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_value_type_13)); }
	inline Type_t * get_corlib_value_type_13() const { return ___corlib_value_type_13; }
	inline Type_t ** get_address_of_corlib_value_type_13() { return &___corlib_value_type_13; }
	inline void set_corlib_value_type_13(Type_t * value)
	{
		___corlib_value_type_13 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_value_type_13, value);
	}

	inline static int32_t get_offset_of_corlib_enum_type_14() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_enum_type_14)); }
	inline Type_t * get_corlib_enum_type_14() const { return ___corlib_enum_type_14; }
	inline Type_t ** get_address_of_corlib_enum_type_14() { return &___corlib_enum_type_14; }
	inline void set_corlib_enum_type_14(Type_t * value)
	{
		___corlib_enum_type_14 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_enum_type_14, value);
	}

	inline static int32_t get_offset_of_sn_15() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___sn_15)); }
	inline StrongName_t117835354 * get_sn_15() const { return ___sn_15; }
	inline StrongName_t117835354 ** get_address_of_sn_15() { return &___sn_15; }
	inline void set_sn_15(StrongName_t117835354 * value)
	{
		___sn_15 = value;
		Il2CppCodeGenWriteBarrier(&___sn_15, value);
	}

	inline static int32_t get_offset_of_is_compiler_context_16() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___is_compiler_context_16)); }
	inline bool get_is_compiler_context_16() const { return ___is_compiler_context_16; }
	inline bool* get_address_of_is_compiler_context_16() { return &___is_compiler_context_16; }
	inline void set_is_compiler_context_16(bool value)
	{
		___is_compiler_context_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
