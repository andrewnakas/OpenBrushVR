#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.BlockProcessor
struct  BlockProcessor_t3158419191  : public Il2CppObject
{
public:
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.BlockProcessor::transform
	Il2CppObject * ___transform_0;
	// System.Byte[] Mono.Security.Cryptography.BlockProcessor::block
	ByteU5BU5D_t3397334013* ___block_1;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockSize
	int32_t ___blockSize_2;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockCount
	int32_t ___blockCount_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(BlockProcessor_t3158419191, ___transform_0)); }
	inline Il2CppObject * get_transform_0() const { return ___transform_0; }
	inline Il2CppObject ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Il2CppObject * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier(&___transform_0, value);
	}

	inline static int32_t get_offset_of_block_1() { return static_cast<int32_t>(offsetof(BlockProcessor_t3158419191, ___block_1)); }
	inline ByteU5BU5D_t3397334013* get_block_1() const { return ___block_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_block_1() { return &___block_1; }
	inline void set_block_1(ByteU5BU5D_t3397334013* value)
	{
		___block_1 = value;
		Il2CppCodeGenWriteBarrier(&___block_1, value);
	}

	inline static int32_t get_offset_of_blockSize_2() { return static_cast<int32_t>(offsetof(BlockProcessor_t3158419191, ___blockSize_2)); }
	inline int32_t get_blockSize_2() const { return ___blockSize_2; }
	inline int32_t* get_address_of_blockSize_2() { return &___blockSize_2; }
	inline void set_blockSize_2(int32_t value)
	{
		___blockSize_2 = value;
	}

	inline static int32_t get_offset_of_blockCount_3() { return static_cast<int32_t>(offsetof(BlockProcessor_t3158419191, ___blockCount_3)); }
	inline int32_t get_blockCount_3() const { return ___blockCount_3; }
	inline int32_t* get_address_of_blockCount_3() { return &___blockCount_3; }
	inline void set_blockCount_3(int32_t value)
	{
		___blockCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
