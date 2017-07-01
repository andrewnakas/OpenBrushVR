#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t2681437964  : public Il2CppObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t4268412390 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t3397334013* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t2681437964, ___assembly_0)); }
	inline Assembly_t4268412390 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t4268412390 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t4268412390 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier(&___assembly_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t2681437964, ___data_1)); }
	inline ByteU5BU5D_t3397334013* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3397334013* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
