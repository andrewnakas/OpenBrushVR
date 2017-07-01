#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName
struct  StrongName_t117835354  : public Il2CppObject
{
public:
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t3719518354 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t3397334013* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t3397334013* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___rsa_0)); }
	inline RSA_t3719518354 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3719518354 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3719518354 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_0, value);
	}

	inline static int32_t get_offset_of_publicKey_1() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___publicKey_1)); }
	inline ByteU5BU5D_t3397334013* get_publicKey_1() const { return ___publicKey_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_publicKey_1() { return &___publicKey_1; }
	inline void set_publicKey_1(ByteU5BU5D_t3397334013* value)
	{
		___publicKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___publicKey_1, value);
	}

	inline static int32_t get_offset_of_keyToken_2() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___keyToken_2)); }
	inline ByteU5BU5D_t3397334013* get_keyToken_2() const { return ___keyToken_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyToken_2() { return &___keyToken_2; }
	inline void set_keyToken_2(ByteU5BU5D_t3397334013* value)
	{
		___keyToken_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyToken_2, value);
	}

	inline static int32_t get_offset_of_tokenAlgorithm_3() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___tokenAlgorithm_3)); }
	inline String_t* get_tokenAlgorithm_3() const { return ___tokenAlgorithm_3; }
	inline String_t** get_address_of_tokenAlgorithm_3() { return &___tokenAlgorithm_3; }
	inline void set_tokenAlgorithm_3(String_t* value)
	{
		___tokenAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier(&___tokenAlgorithm_3, value);
	}
};

struct StrongName_t117835354_StaticFields
{
public:
	// System.Object Mono.Security.StrongName::lockObject
	Il2CppObject * ___lockObject_4;
	// System.Boolean Mono.Security.StrongName::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(StrongName_t117835354_StaticFields, ___lockObject_4)); }
	inline Il2CppObject * get_lockObject_4() const { return ___lockObject_4; }
	inline Il2CppObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(Il2CppObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_4, value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(StrongName_t117835354_StaticFields, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
