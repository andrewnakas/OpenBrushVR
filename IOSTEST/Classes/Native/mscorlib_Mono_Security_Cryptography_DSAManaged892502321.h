#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_DSA903174880.h"

// Mono.Math.BigInteger
struct BigInteger_t925946152;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2001522803;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t892502321  : public DSA_t903174880
{
public:
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_2;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_3;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t925946152 * ___p_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t925946152 * ___q_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t925946152 * ___g_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t925946152 * ___x_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t925946152 * ___y_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t925946152 * ___j_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t925946152 * ___seed_10;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_11;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_12;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t2510243513 * ___rng_13;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t2001522803 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_keypairGenerated_2() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___keypairGenerated_2)); }
	inline bool get_keypairGenerated_2() const { return ___keypairGenerated_2; }
	inline bool* get_address_of_keypairGenerated_2() { return &___keypairGenerated_2; }
	inline void set_keypairGenerated_2(bool value)
	{
		___keypairGenerated_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_p_4() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___p_4)); }
	inline BigInteger_t925946152 * get_p_4() const { return ___p_4; }
	inline BigInteger_t925946152 ** get_address_of_p_4() { return &___p_4; }
	inline void set_p_4(BigInteger_t925946152 * value)
	{
		___p_4 = value;
		Il2CppCodeGenWriteBarrier(&___p_4, value);
	}

	inline static int32_t get_offset_of_q_5() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___q_5)); }
	inline BigInteger_t925946152 * get_q_5() const { return ___q_5; }
	inline BigInteger_t925946152 ** get_address_of_q_5() { return &___q_5; }
	inline void set_q_5(BigInteger_t925946152 * value)
	{
		___q_5 = value;
		Il2CppCodeGenWriteBarrier(&___q_5, value);
	}

	inline static int32_t get_offset_of_g_6() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___g_6)); }
	inline BigInteger_t925946152 * get_g_6() const { return ___g_6; }
	inline BigInteger_t925946152 ** get_address_of_g_6() { return &___g_6; }
	inline void set_g_6(BigInteger_t925946152 * value)
	{
		___g_6 = value;
		Il2CppCodeGenWriteBarrier(&___g_6, value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___x_7)); }
	inline BigInteger_t925946152 * get_x_7() const { return ___x_7; }
	inline BigInteger_t925946152 ** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(BigInteger_t925946152 * value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier(&___x_7, value);
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___y_8)); }
	inline BigInteger_t925946152 * get_y_8() const { return ___y_8; }
	inline BigInteger_t925946152 ** get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(BigInteger_t925946152 * value)
	{
		___y_8 = value;
		Il2CppCodeGenWriteBarrier(&___y_8, value);
	}

	inline static int32_t get_offset_of_j_9() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___j_9)); }
	inline BigInteger_t925946152 * get_j_9() const { return ___j_9; }
	inline BigInteger_t925946152 ** get_address_of_j_9() { return &___j_9; }
	inline void set_j_9(BigInteger_t925946152 * value)
	{
		___j_9 = value;
		Il2CppCodeGenWriteBarrier(&___j_9, value);
	}

	inline static int32_t get_offset_of_seed_10() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___seed_10)); }
	inline BigInteger_t925946152 * get_seed_10() const { return ___seed_10; }
	inline BigInteger_t925946152 ** get_address_of_seed_10() { return &___seed_10; }
	inline void set_seed_10(BigInteger_t925946152 * value)
	{
		___seed_10 = value;
		Il2CppCodeGenWriteBarrier(&___seed_10, value);
	}

	inline static int32_t get_offset_of_counter_11() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___counter_11)); }
	inline int32_t get_counter_11() const { return ___counter_11; }
	inline int32_t* get_address_of_counter_11() { return &___counter_11; }
	inline void set_counter_11(int32_t value)
	{
		___counter_11 = value;
	}

	inline static int32_t get_offset_of_j_missing_12() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___j_missing_12)); }
	inline bool get_j_missing_12() const { return ___j_missing_12; }
	inline bool* get_address_of_j_missing_12() { return &___j_missing_12; }
	inline void set_j_missing_12(bool value)
	{
		___j_missing_12 = value;
	}

	inline static int32_t get_offset_of_rng_13() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___rng_13)); }
	inline RandomNumberGenerator_t2510243513 * get_rng_13() const { return ___rng_13; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_rng_13() { return &___rng_13; }
	inline void set_rng_13(RandomNumberGenerator_t2510243513 * value)
	{
		___rng_13 = value;
		Il2CppCodeGenWriteBarrier(&___rng_13, value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t2001522803 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t2001522803 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t2001522803 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier(&___KeyGenerated_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
