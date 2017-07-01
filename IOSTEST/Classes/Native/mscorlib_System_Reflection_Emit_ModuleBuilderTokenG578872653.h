#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t578872653  : public Il2CppObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t4156028127 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t578872653, ___mb_0)); }
	inline ModuleBuilder_t4156028127 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t4156028127 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t4156028127 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier(&___mb_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
