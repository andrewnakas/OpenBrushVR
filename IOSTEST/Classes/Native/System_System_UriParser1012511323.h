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
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t1012511323  : public Il2CppObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t1012511323, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier(&___scheme_name_2, value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t1012511323, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t1012511323_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	Il2CppObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t909839986 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t1803876613 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t1803876613 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___lock_object_0)); }
	inline Il2CppObject * get_lock_object_0() const { return ___lock_object_0; }
	inline Il2CppObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(Il2CppObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier(&___lock_object_0, value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___table_1)); }
	inline Hashtable_t909839986 * get_table_1() const { return ___table_1; }
	inline Hashtable_t909839986 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t909839986 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___uri_regex_4)); }
	inline Regex_t1803876613 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t1803876613 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t1803876613 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier(&___uri_regex_4, value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___auth_regex_5)); }
	inline Regex_t1803876613 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t1803876613 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t1803876613 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier(&___auth_regex_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
