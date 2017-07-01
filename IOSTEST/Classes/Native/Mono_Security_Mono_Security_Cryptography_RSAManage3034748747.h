#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// Mono.Math.BigInteger
struct BigInteger_t925946153;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t108853710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t3034748748  : public RSA_t3719518354
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t925946153 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t925946153 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t925946153 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t925946153 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t925946153 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t925946153 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t925946153 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t925946153 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t108853710 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___d_6)); }
	inline BigInteger_t925946153 * get_d_6() const { return ___d_6; }
	inline BigInteger_t925946153 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t925946153 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier(&___d_6, value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___p_7)); }
	inline BigInteger_t925946153 * get_p_7() const { return ___p_7; }
	inline BigInteger_t925946153 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t925946153 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier(&___p_7, value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___q_8)); }
	inline BigInteger_t925946153 * get_q_8() const { return ___q_8; }
	inline BigInteger_t925946153 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t925946153 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier(&___q_8, value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___dp_9)); }
	inline BigInteger_t925946153 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t925946153 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t925946153 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier(&___dp_9, value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___dq_10)); }
	inline BigInteger_t925946153 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t925946153 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t925946153 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier(&___dq_10, value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___qInv_11)); }
	inline BigInteger_t925946153 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t925946153 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t925946153 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier(&___qInv_11, value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___n_12)); }
	inline BigInteger_t925946153 * get_n_12() const { return ___n_12; }
	inline BigInteger_t925946153 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t925946153 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier(&___n_12, value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___e_13)); }
	inline BigInteger_t925946153 * get_e_13() const { return ___e_13; }
	inline BigInteger_t925946153 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t925946153 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier(&___e_13, value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748748, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t108853710 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t108853710 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t108853710 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier(&___KeyGenerated_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
