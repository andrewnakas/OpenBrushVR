#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Delegate
struct Delegate_t3022476291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t753405077  : public Il2CppObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t3022476291 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t753405077, ____delegate_0)); }
	inline Delegate_t3022476291 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t3022476291 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t3022476291 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
