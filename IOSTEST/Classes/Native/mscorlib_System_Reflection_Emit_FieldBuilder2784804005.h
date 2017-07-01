#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_FieldAttributes1122705193.h"

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4270021860;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t2784804005  : public FieldInfo_t
{
public:
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t3308873219 * ___typeb_3;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t4270021860 * ___marshal_info_4;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_typeb_3() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___typeb_3)); }
	inline TypeBuilder_t3308873219 * get_typeb_3() const { return ___typeb_3; }
	inline TypeBuilder_t3308873219 ** get_address_of_typeb_3() { return &___typeb_3; }
	inline void set_typeb_3(TypeBuilder_t3308873219 * value)
	{
		___typeb_3 = value;
		Il2CppCodeGenWriteBarrier(&___typeb_3, value);
	}

	inline static int32_t get_offset_of_marshal_info_4() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___marshal_info_4)); }
	inline UnmanagedMarshal_t4270021860 * get_marshal_info_4() const { return ___marshal_info_4; }
	inline UnmanagedMarshal_t4270021860 ** get_address_of_marshal_info_4() { return &___marshal_info_4; }
	inline void set_marshal_info_4(UnmanagedMarshal_t4270021860 * value)
	{
		___marshal_info_4 = value;
		Il2CppCodeGenWriteBarrier(&___marshal_info_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
