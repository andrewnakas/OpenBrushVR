#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2189618969;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.EnvoyInfo
struct  EnvoyInfo_t815109115  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::envoySinks
	Il2CppObject * ___envoySinks_0;

public:
	inline static int32_t get_offset_of_envoySinks_0() { return static_cast<int32_t>(offsetof(EnvoyInfo_t815109115, ___envoySinks_0)); }
	inline Il2CppObject * get_envoySinks_0() const { return ___envoySinks_0; }
	inline Il2CppObject ** get_address_of_envoySinks_0() { return &___envoySinks_0; }
	inline void set_envoySinks_0(Il2CppObject * value)
	{
		___envoySinks_0 = value;
		Il2CppCodeGenWriteBarrier(&___envoySinks_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
