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
// Mono.Security.X509.X509Store
struct X509Store_t4028973563;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t3001420398  : public Il2CppObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t4028973563 * ____trusted_1;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t3001420398, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier(&____storePath_0, value);
	}

	inline static int32_t get_offset_of__trusted_1() { return static_cast<int32_t>(offsetof(X509Stores_t3001420398, ____trusted_1)); }
	inline X509Store_t4028973563 * get__trusted_1() const { return ____trusted_1; }
	inline X509Store_t4028973563 ** get_address_of__trusted_1() { return &____trusted_1; }
	inline void set__trusted_1(X509Store_t4028973563 * value)
	{
		____trusted_1 = value;
		Il2CppCodeGenWriteBarrier(&____trusted_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
