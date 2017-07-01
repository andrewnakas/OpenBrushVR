#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.Net.IPv6Address
struct IPv6Address_t2596635879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPv6Address
struct  IPv6Address_t2596635879  : public Il2CppObject
{
public:
	// System.UInt16[] System.Net.IPv6Address::address
	UInt16U5BU5D_t2527266722* ___address_0;
	// System.Int32 System.Net.IPv6Address::prefixLength
	int32_t ___prefixLength_1;
	// System.Int64 System.Net.IPv6Address::scopeId
	int64_t ___scopeId_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPv6Address_t2596635879, ___address_0)); }
	inline UInt16U5BU5D_t2527266722* get_address_0() const { return ___address_0; }
	inline UInt16U5BU5D_t2527266722** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(UInt16U5BU5D_t2527266722* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_prefixLength_1() { return static_cast<int32_t>(offsetof(IPv6Address_t2596635879, ___prefixLength_1)); }
	inline int32_t get_prefixLength_1() const { return ___prefixLength_1; }
	inline int32_t* get_address_of_prefixLength_1() { return &___prefixLength_1; }
	inline void set_prefixLength_1(int32_t value)
	{
		___prefixLength_1 = value;
	}

	inline static int32_t get_offset_of_scopeId_2() { return static_cast<int32_t>(offsetof(IPv6Address_t2596635879, ___scopeId_2)); }
	inline int64_t get_scopeId_2() const { return ___scopeId_2; }
	inline int64_t* get_address_of_scopeId_2() { return &___scopeId_2; }
	inline void set_scopeId_2(int64_t value)
	{
		___scopeId_2 = value;
	}
};

struct IPv6Address_t2596635879_StaticFields
{
public:
	// System.Net.IPv6Address System.Net.IPv6Address::Loopback
	IPv6Address_t2596635879 * ___Loopback_3;
	// System.Net.IPv6Address System.Net.IPv6Address::Unspecified
	IPv6Address_t2596635879 * ___Unspecified_4;

public:
	inline static int32_t get_offset_of_Loopback_3() { return static_cast<int32_t>(offsetof(IPv6Address_t2596635879_StaticFields, ___Loopback_3)); }
	inline IPv6Address_t2596635879 * get_Loopback_3() const { return ___Loopback_3; }
	inline IPv6Address_t2596635879 ** get_address_of_Loopback_3() { return &___Loopback_3; }
	inline void set_Loopback_3(IPv6Address_t2596635879 * value)
	{
		___Loopback_3 = value;
		Il2CppCodeGenWriteBarrier(&___Loopback_3, value);
	}

	inline static int32_t get_offset_of_Unspecified_4() { return static_cast<int32_t>(offsetof(IPv6Address_t2596635879_StaticFields, ___Unspecified_4)); }
	inline IPv6Address_t2596635879 * get_Unspecified_4() const { return ___Unspecified_4; }
	inline IPv6Address_t2596635879 ** get_address_of_Unspecified_4() { return &___Unspecified_4; }
	inline void set_Unspecified_4(IPv6Address_t2596635879 * value)
	{
		___Unspecified_4 = value;
		Il2CppCodeGenWriteBarrier(&___Unspecified_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
