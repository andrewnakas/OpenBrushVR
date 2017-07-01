#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Runtime_Remoting_Messaging_MethodD1742974787.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t981009581  : public MethodDictionary_t1742974787
{
public:

public:
};

struct MethodReturnDictionary_t981009581_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t1642385972* ___InternalReturnKeys_6;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t1642385972* ___InternalExceptionKeys_7;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_6() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t981009581_StaticFields, ___InternalReturnKeys_6)); }
	inline StringU5BU5D_t1642385972* get_InternalReturnKeys_6() const { return ___InternalReturnKeys_6; }
	inline StringU5BU5D_t1642385972** get_address_of_InternalReturnKeys_6() { return &___InternalReturnKeys_6; }
	inline void set_InternalReturnKeys_6(StringU5BU5D_t1642385972* value)
	{
		___InternalReturnKeys_6 = value;
		Il2CppCodeGenWriteBarrier(&___InternalReturnKeys_6, value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_7() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t981009581_StaticFields, ___InternalExceptionKeys_7)); }
	inline StringU5BU5D_t1642385972* get_InternalExceptionKeys_7() const { return ___InternalExceptionKeys_7; }
	inline StringU5BU5D_t1642385972** get_address_of_InternalExceptionKeys_7() { return &___InternalExceptionKeys_7; }
	inline void set_InternalExceptionKeys_7(StringU5BU5D_t1642385972* value)
	{
		___InternalExceptionKeys_7 = value;
		Il2CppCodeGenWriteBarrier(&___InternalExceptionKeys_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
