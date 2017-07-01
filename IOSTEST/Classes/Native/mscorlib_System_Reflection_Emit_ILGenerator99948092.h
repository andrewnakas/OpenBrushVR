#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t4103159791;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t4181946617;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t2807174223;
// System.Reflection.Module
struct Module_t4282841206;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t4150817334;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t99948092  : public Il2CppObject
{
public:
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t3397334013* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_5;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t4103159791* ___token_fixups_6;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t4181946617* ___labels_7;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t2807174223* ___fixups_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_9;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t4282841206 * ___module_10;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	Il2CppObject * ___token_gen_11;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___code_1)); }
	inline ByteU5BU5D_t3397334013* get_code_1() const { return ___code_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(ByteU5BU5D_t3397334013* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier(&___code_1, value);
	}

	inline static int32_t get_offset_of_code_len_2() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___code_len_2)); }
	inline int32_t get_code_len_2() const { return ___code_len_2; }
	inline int32_t* get_address_of_code_len_2() { return &___code_len_2; }
	inline void set_code_len_2(int32_t value)
	{
		___code_len_2 = value;
	}

	inline static int32_t get_offset_of_max_stack_3() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___max_stack_3)); }
	inline int32_t get_max_stack_3() const { return ___max_stack_3; }
	inline int32_t* get_address_of_max_stack_3() { return &___max_stack_3; }
	inline void set_max_stack_3(int32_t value)
	{
		___max_stack_3 = value;
	}

	inline static int32_t get_offset_of_cur_stack_4() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___cur_stack_4)); }
	inline int32_t get_cur_stack_4() const { return ___cur_stack_4; }
	inline int32_t* get_address_of_cur_stack_4() { return &___cur_stack_4; }
	inline void set_cur_stack_4(int32_t value)
	{
		___cur_stack_4 = value;
	}

	inline static int32_t get_offset_of_num_token_fixups_5() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___num_token_fixups_5)); }
	inline int32_t get_num_token_fixups_5() const { return ___num_token_fixups_5; }
	inline int32_t* get_address_of_num_token_fixups_5() { return &___num_token_fixups_5; }
	inline void set_num_token_fixups_5(int32_t value)
	{
		___num_token_fixups_5 = value;
	}

	inline static int32_t get_offset_of_token_fixups_6() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___token_fixups_6)); }
	inline ILTokenInfoU5BU5D_t4103159791* get_token_fixups_6() const { return ___token_fixups_6; }
	inline ILTokenInfoU5BU5D_t4103159791** get_address_of_token_fixups_6() { return &___token_fixups_6; }
	inline void set_token_fixups_6(ILTokenInfoU5BU5D_t4103159791* value)
	{
		___token_fixups_6 = value;
		Il2CppCodeGenWriteBarrier(&___token_fixups_6, value);
	}

	inline static int32_t get_offset_of_labels_7() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___labels_7)); }
	inline LabelDataU5BU5D_t4181946617* get_labels_7() const { return ___labels_7; }
	inline LabelDataU5BU5D_t4181946617** get_address_of_labels_7() { return &___labels_7; }
	inline void set_labels_7(LabelDataU5BU5D_t4181946617* value)
	{
		___labels_7 = value;
		Il2CppCodeGenWriteBarrier(&___labels_7, value);
	}

	inline static int32_t get_offset_of_fixups_8() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___fixups_8)); }
	inline LabelFixupU5BU5D_t2807174223* get_fixups_8() const { return ___fixups_8; }
	inline LabelFixupU5BU5D_t2807174223** get_address_of_fixups_8() { return &___fixups_8; }
	inline void set_fixups_8(LabelFixupU5BU5D_t2807174223* value)
	{
		___fixups_8 = value;
		Il2CppCodeGenWriteBarrier(&___fixups_8, value);
	}

	inline static int32_t get_offset_of_num_fixups_9() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___num_fixups_9)); }
	inline int32_t get_num_fixups_9() const { return ___num_fixups_9; }
	inline int32_t* get_address_of_num_fixups_9() { return &___num_fixups_9; }
	inline void set_num_fixups_9(int32_t value)
	{
		___num_fixups_9 = value;
	}

	inline static int32_t get_offset_of_module_10() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___module_10)); }
	inline Module_t4282841206 * get_module_10() const { return ___module_10; }
	inline Module_t4282841206 ** get_address_of_module_10() { return &___module_10; }
	inline void set_module_10(Module_t4282841206 * value)
	{
		___module_10 = value;
		Il2CppCodeGenWriteBarrier(&___module_10, value);
	}

	inline static int32_t get_offset_of_token_gen_11() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092, ___token_gen_11)); }
	inline Il2CppObject * get_token_gen_11() const { return ___token_gen_11; }
	inline Il2CppObject ** get_address_of_token_gen_11() { return &___token_gen_11; }
	inline void set_token_gen_11(Il2CppObject * value)
	{
		___token_gen_11 = value;
		Il2CppCodeGenWriteBarrier(&___token_gen_11, value);
	}
};

struct ILGenerator_t99948092_StaticFields
{
public:
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;

public:
	inline static int32_t get_offset_of_void_type_0() { return static_cast<int32_t>(offsetof(ILGenerator_t99948092_StaticFields, ___void_type_0)); }
	inline Type_t * get_void_type_0() const { return ___void_type_0; }
	inline Type_t ** get_address_of_void_type_0() { return &___void_type_0; }
	inline void set_void_type_0(Type_t * value)
	{
		___void_type_0 = value;
		Il2CppCodeGenWriteBarrier(&___void_type_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
