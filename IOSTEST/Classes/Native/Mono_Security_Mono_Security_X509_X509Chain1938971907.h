#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2843686920.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t1938971907  : public Il2CppObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t3592472866 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t3592472866 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t324051958 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t3592472866 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ___roots_0)); }
	inline X509CertificateCollection_t3592472866 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t3592472866 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t3592472866 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier(&___roots_0, value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ___certs_1)); }
	inline X509CertificateCollection_t3592472866 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t3592472866 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t3592472866 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier(&___certs_1, value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ____root_2)); }
	inline X509Certificate_t324051958 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t324051958 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t324051958 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier(&____root_2, value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ____chain_3)); }
	inline X509CertificateCollection_t3592472866 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t3592472866 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t3592472866 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier(&____chain_3, value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
