#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.AppDomain
struct AppDomain_t2719102437;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t1002202659 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t2719102437 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t1941658161 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t1941658161 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t1941658161 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t1002202659, ____domain_0)); }
	inline AppDomain_t2719102437 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t2719102437 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t2719102437 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier(&____domain_0, value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t1002202659, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier(&____method_1, value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t1002202659, ____assert_2)); }
	inline PermissionSet_t1941658161 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t1941658161 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t1941658161 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier(&____assert_2, value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t1002202659, ____deny_3)); }
	inline PermissionSet_t1941658161 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t1941658161 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t1941658161 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier(&____deny_3, value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t1002202659, ____permitonly_4)); }
	inline PermissionSet_t1941658161 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t1941658161 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t1941658161 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier(&____permitonly_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1002202659_marshaled_pinvoke
{
	AppDomain_t2719102437 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1941658161 * ____assert_2;
	PermissionSet_t1941658161 * ____deny_3;
	PermissionSet_t1941658161 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1002202659_marshaled_com
{
	AppDomain_t2719102437 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1941658161 * ____assert_2;
	PermissionSet_t1941658161 * ____deny_3;
	PermissionSet_t1941658161 * ____permitonly_4;
};
