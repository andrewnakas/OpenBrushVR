#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"

// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.Net.IPAddress
struct IPAddress_t1399971723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t1399971723  : public Il2CppObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2527266722* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t2527266722* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t2527266722** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t2527266722* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Numbers_2, value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}
};

struct IPAddress_t1399971723_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t1399971723 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t1399971723 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t1399971723 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t1399971723 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t1399971723 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t1399971723 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t1399971723 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___Any_4)); }
	inline IPAddress_t1399971723 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t1399971723 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t1399971723 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier(&___Any_4, value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t1399971723 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t1399971723 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t1399971723 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier(&___Broadcast_5, value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___Loopback_6)); }
	inline IPAddress_t1399971723 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t1399971723 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t1399971723 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier(&___Loopback_6, value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___None_7)); }
	inline IPAddress_t1399971723 * get_None_7() const { return ___None_7; }
	inline IPAddress_t1399971723 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t1399971723 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier(&___None_7, value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t1399971723 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t1399971723 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t1399971723 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier(&___IPv6Any_8, value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t1399971723 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t1399971723 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t1399971723 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier(&___IPv6Loopback_9, value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t1399971723_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t1399971723 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t1399971723 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t1399971723 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier(&___IPv6None_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
