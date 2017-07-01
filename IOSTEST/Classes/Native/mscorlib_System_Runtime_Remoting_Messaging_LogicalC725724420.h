#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t2648008188;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t725724420  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t909839986 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t2648008188 * ____remotingData_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t725724420, ____data_0)); }
	inline Hashtable_t909839986 * get__data_0() const { return ____data_0; }
	inline Hashtable_t909839986 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Hashtable_t909839986 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier(&____data_0, value);
	}

	inline static int32_t get_offset_of__remotingData_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t725724420, ____remotingData_1)); }
	inline CallContextRemotingData_t2648008188 * get__remotingData_1() const { return ____remotingData_1; }
	inline CallContextRemotingData_t2648008188 ** get_address_of__remotingData_1() { return &____remotingData_1; }
	inline void set__remotingData_1(CallContextRemotingData_t2648008188 * value)
	{
		____remotingData_1 = value;
		Il2CppCodeGenWriteBarrier(&____remotingData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
