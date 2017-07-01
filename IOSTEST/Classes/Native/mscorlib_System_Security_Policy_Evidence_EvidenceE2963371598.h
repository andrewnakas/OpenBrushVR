#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t2963371598  : public Il2CppObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	Il2CppObject * ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	Il2CppObject * ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	Il2CppObject * ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2963371598, ___currentEnum_0)); }
	inline Il2CppObject * get_currentEnum_0() const { return ___currentEnum_0; }
	inline Il2CppObject ** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(Il2CppObject * value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentEnum_0, value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2963371598, ___hostEnum_1)); }
	inline Il2CppObject * get_hostEnum_1() const { return ___hostEnum_1; }
	inline Il2CppObject ** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(Il2CppObject * value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier(&___hostEnum_1, value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2963371598, ___assemblyEnum_2)); }
	inline Il2CppObject * get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline Il2CppObject ** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(Il2CppObject * value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyEnum_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
