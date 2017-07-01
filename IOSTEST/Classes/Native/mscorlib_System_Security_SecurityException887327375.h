#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_SystemException3877406272.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t887327375  : public SystemException_t3877406272
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	Il2CppObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	Il2CppObject * ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t1407710183 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier(&___permissionState_11, value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier(&___permissionType_12, value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier(&____granted_13, value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier(&____refused_14, value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____demanded_15)); }
	inline Il2CppObject * get__demanded_15() const { return ____demanded_15; }
	inline Il2CppObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(Il2CppObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier(&____demanded_15, value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____firstperm_16)); }
	inline Il2CppObject * get__firstperm_16() const { return ____firstperm_16; }
	inline Il2CppObject ** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(Il2CppObject * value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier(&____firstperm_16, value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier(&____method_17, value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____evidence_18)); }
	inline Evidence_t1407710183 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t1407710183 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t1407710183 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier(&____evidence_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
