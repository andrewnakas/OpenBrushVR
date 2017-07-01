#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1108166522;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MACAlgorithm
struct  MACAlgorithm_t2739465458  : public Il2CppObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.MACAlgorithm::algo
	SymmetricAlgorithm_t1108166522 * ___algo_0;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.MACAlgorithm::enc
	Il2CppObject * ___enc_1;
	// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::block
	ByteU5BU5D_t3397334013* ___block_2;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockSize
	int32_t ___blockSize_3;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockCount
	int32_t ___blockCount_4;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2739465458, ___algo_0)); }
	inline SymmetricAlgorithm_t1108166522 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t1108166522 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t1108166522 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier(&___algo_0, value);
	}

	inline static int32_t get_offset_of_enc_1() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2739465458, ___enc_1)); }
	inline Il2CppObject * get_enc_1() const { return ___enc_1; }
	inline Il2CppObject ** get_address_of_enc_1() { return &___enc_1; }
	inline void set_enc_1(Il2CppObject * value)
	{
		___enc_1 = value;
		Il2CppCodeGenWriteBarrier(&___enc_1, value);
	}

	inline static int32_t get_offset_of_block_2() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2739465458, ___block_2)); }
	inline ByteU5BU5D_t3397334013* get_block_2() const { return ___block_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_block_2() { return &___block_2; }
	inline void set_block_2(ByteU5BU5D_t3397334013* value)
	{
		___block_2 = value;
		Il2CppCodeGenWriteBarrier(&___block_2, value);
	}

	inline static int32_t get_offset_of_blockSize_3() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2739465458, ___blockSize_3)); }
	inline int32_t get_blockSize_3() const { return ___blockSize_3; }
	inline int32_t* get_address_of_blockSize_3() { return &___blockSize_3; }
	inline void set_blockSize_3(int32_t value)
	{
		___blockSize_3 = value;
	}

	inline static int32_t get_offset_of_blockCount_4() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2739465458, ___blockCount_4)); }
	inline int32_t get_blockCount_4() const { return ___blockCount_4; }
	inline int32_t* get_address_of_blockCount_4() { return &___blockCount_4; }
	inline void set_blockCount_4(int32_t value)
	{
		___blockCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
