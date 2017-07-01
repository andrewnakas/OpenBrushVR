#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_AsymmetricKe3339648384.h"

// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t4167037264  : public AsymmetricKeyExchangeFormatter_t3339648384
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t3719518354 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t2510243513 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t4167037264, ___rsa_0)); }
	inline RSA_t3719518354 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3719518354 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3719518354 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_0, value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t4167037264, ___random_1)); }
	inline RandomNumberGenerator_t2510243513 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t2510243513 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier(&___random_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
