#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_AsymmetricSi3580832979.h"

// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t389653629  : public AsymmetricSignatureDeformatter_t3580832979
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t3719518354 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t2624936259 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t389653629, ___key_0)); }
	inline RSA_t3719518354 * get_key_0() const { return ___key_0; }
	inline RSA_t3719518354 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t3719518354 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t389653629, ___hash_1)); }
	inline HashAlgorithm_t2624936259 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t2624936259 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t2624936259 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier(&___hash_1, value);
	}
};

struct RSASslSignatureDeformatter_t389653629_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map15_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_2() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t389653629_StaticFields, ___U3CU3Ef__switchU24map15_2)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map15_2() const { return ___U3CU3Ef__switchU24map15_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map15_2() { return &___U3CU3Ef__switchU24map15_2; }
	inline void set_U3CU3Ef__switchU24map15_2(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map15_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map15_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
