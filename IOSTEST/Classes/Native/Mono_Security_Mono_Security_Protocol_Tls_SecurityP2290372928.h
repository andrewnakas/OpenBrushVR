#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t491456551;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityParameters
struct  SecurityParameters_t2290372928  : public Il2CppObject
{
public:
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t491456551 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t3397334013* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t3397334013* ___serverWriteMAC_2;

public:
	inline static int32_t get_offset_of_cipher_0() { return static_cast<int32_t>(offsetof(SecurityParameters_t2290372928, ___cipher_0)); }
	inline CipherSuite_t491456551 * get_cipher_0() const { return ___cipher_0; }
	inline CipherSuite_t491456551 ** get_address_of_cipher_0() { return &___cipher_0; }
	inline void set_cipher_0(CipherSuite_t491456551 * value)
	{
		___cipher_0 = value;
		Il2CppCodeGenWriteBarrier(&___cipher_0, value);
	}

	inline static int32_t get_offset_of_clientWriteMAC_1() { return static_cast<int32_t>(offsetof(SecurityParameters_t2290372928, ___clientWriteMAC_1)); }
	inline ByteU5BU5D_t3397334013* get_clientWriteMAC_1() const { return ___clientWriteMAC_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientWriteMAC_1() { return &___clientWriteMAC_1; }
	inline void set_clientWriteMAC_1(ByteU5BU5D_t3397334013* value)
	{
		___clientWriteMAC_1 = value;
		Il2CppCodeGenWriteBarrier(&___clientWriteMAC_1, value);
	}

	inline static int32_t get_offset_of_serverWriteMAC_2() { return static_cast<int32_t>(offsetof(SecurityParameters_t2290372928, ___serverWriteMAC_2)); }
	inline ByteU5BU5D_t3397334013* get_serverWriteMAC_2() const { return ___serverWriteMAC_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverWriteMAC_2() { return &___serverWriteMAC_2; }
	inline void set_serverWriteMAC_2(ByteU5BU5D_t3397334013* value)
	{
		___serverWriteMAC_2 = value;
		Il2CppCodeGenWriteBarrier(&___serverWriteMAC_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
