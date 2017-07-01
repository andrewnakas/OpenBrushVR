#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_AsymmetricSi4058014248.h"

// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t925064184  : public AsymmetricSignatureFormatter_t4058014248
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3719518354 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t2624936259 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t925064184, ___rsa_0)); }
	inline RSA_t3719518354 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3719518354 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3719518354 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_0, value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t925064184, ___hash_1)); }
	inline HashAlgorithm_t2624936259 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t2624936259 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t2624936259 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier(&___hash_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
