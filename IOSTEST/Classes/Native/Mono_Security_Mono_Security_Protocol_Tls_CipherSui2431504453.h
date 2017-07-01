#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t2431504453  : public Il2CppObject
{
public:
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t4252133567 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;

public:
	inline static int32_t get_offset_of_cipherSuites_0() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t2431504453, ___cipherSuites_0)); }
	inline ArrayList_t4252133567 * get_cipherSuites_0() const { return ___cipherSuites_0; }
	inline ArrayList_t4252133567 ** get_address_of_cipherSuites_0() { return &___cipherSuites_0; }
	inline void set_cipherSuites_0(ArrayList_t4252133567 * value)
	{
		___cipherSuites_0 = value;
		Il2CppCodeGenWriteBarrier(&___cipherSuites_0, value);
	}

	inline static int32_t get_offset_of_protocol_1() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t2431504453, ___protocol_1)); }
	inline int32_t get_protocol_1() const { return ___protocol_1; }
	inline int32_t* get_address_of_protocol_1() { return &___protocol_1; }
	inline void set_protocol_1(int32_t value)
	{
		___protocol_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
