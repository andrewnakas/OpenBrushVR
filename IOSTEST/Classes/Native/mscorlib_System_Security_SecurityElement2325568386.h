#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t2325568386  : public Il2CppObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t4252133567 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t4252133567 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier(&___tag_1, value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386, ___attributes_2)); }
	inline ArrayList_t4252133567 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t4252133567 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t4252133567 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_2, value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386, ___children_3)); }
	inline ArrayList_t4252133567 * get_children_3() const { return ___children_3; }
	inline ArrayList_t4252133567 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t4252133567 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier(&___children_3, value);
	}
};

struct SecurityElement_t2325568386_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t1328083999* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t1328083999* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t1328083999* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t1328083999* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t1328083999* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t1328083999* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t1328083999** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t1328083999* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier(&___invalid_tag_chars_4, value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t1328083999* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t1328083999** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t1328083999* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier(&___invalid_text_chars_5, value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t1328083999* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t1328083999** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t1328083999* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier(&___invalid_attr_name_chars_6, value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t1328083999* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t1328083999** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t1328083999* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier(&___invalid_attr_value_chars_7, value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t2325568386_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t1328083999* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t1328083999** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t1328083999* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier(&___invalid_chars_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
