#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Runtime_Serialization_BaseFixupRec3171032996.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t691510385  : public BaseFixupRecord_t3171032996
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t3030399641* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t691510385, ____indices_4)); }
	inline Int32U5BU5D_t3030399641* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t3030399641** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t3030399641* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier(&____indices_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
