#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyPairPersistence
struct  KeyPairPersistence_t3637935872  : public Il2CppObject
{
public:
	// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::_params
	CspParameters_t46065560 * ____params_4;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_keyvalue
	String_t* ____keyvalue_5;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_filename
	String_t* ____filename_6;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_container
	String_t* ____container_7;

public:
	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____params_4)); }
	inline CspParameters_t46065560 * get__params_4() const { return ____params_4; }
	inline CspParameters_t46065560 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(CspParameters_t46065560 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier(&____params_4, value);
	}

	inline static int32_t get_offset_of__keyvalue_5() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____keyvalue_5)); }
	inline String_t* get__keyvalue_5() const { return ____keyvalue_5; }
	inline String_t** get_address_of__keyvalue_5() { return &____keyvalue_5; }
	inline void set__keyvalue_5(String_t* value)
	{
		____keyvalue_5 = value;
		Il2CppCodeGenWriteBarrier(&____keyvalue_5, value);
	}

	inline static int32_t get_offset_of__filename_6() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____filename_6)); }
	inline String_t* get__filename_6() const { return ____filename_6; }
	inline String_t** get_address_of__filename_6() { return &____filename_6; }
	inline void set__filename_6(String_t* value)
	{
		____filename_6 = value;
		Il2CppCodeGenWriteBarrier(&____filename_6, value);
	}

	inline static int32_t get_offset_of__container_7() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____container_7)); }
	inline String_t* get__container_7() const { return ____container_7; }
	inline String_t** get_address_of__container_7() { return &____container_7; }
	inline void set__container_7(String_t* value)
	{
		____container_7 = value;
		Il2CppCodeGenWriteBarrier(&____container_7, value);
	}
};

struct KeyPairPersistence_t3637935872_StaticFields
{
public:
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_userPathExists
	bool ____userPathExists_0;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_userPath
	String_t* ____userPath_1;
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_machinePathExists
	bool ____machinePathExists_2;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_machinePath
	String_t* ____machinePath_3;
	// System.Object Mono.Security.Cryptography.KeyPairPersistence::lockobj
	Il2CppObject * ___lockobj_8;

public:
	inline static int32_t get_offset_of__userPathExists_0() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____userPathExists_0)); }
	inline bool get__userPathExists_0() const { return ____userPathExists_0; }
	inline bool* get_address_of__userPathExists_0() { return &____userPathExists_0; }
	inline void set__userPathExists_0(bool value)
	{
		____userPathExists_0 = value;
	}

	inline static int32_t get_offset_of__userPath_1() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____userPath_1)); }
	inline String_t* get__userPath_1() const { return ____userPath_1; }
	inline String_t** get_address_of__userPath_1() { return &____userPath_1; }
	inline void set__userPath_1(String_t* value)
	{
		____userPath_1 = value;
		Il2CppCodeGenWriteBarrier(&____userPath_1, value);
	}

	inline static int32_t get_offset_of__machinePathExists_2() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____machinePathExists_2)); }
	inline bool get__machinePathExists_2() const { return ____machinePathExists_2; }
	inline bool* get_address_of__machinePathExists_2() { return &____machinePathExists_2; }
	inline void set__machinePathExists_2(bool value)
	{
		____machinePathExists_2 = value;
	}

	inline static int32_t get_offset_of__machinePath_3() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____machinePath_3)); }
	inline String_t* get__machinePath_3() const { return ____machinePath_3; }
	inline String_t** get_address_of__machinePath_3() { return &____machinePath_3; }
	inline void set__machinePath_3(String_t* value)
	{
		____machinePath_3 = value;
		Il2CppCodeGenWriteBarrier(&____machinePath_3, value);
	}

	inline static int32_t get_offset_of_lockobj_8() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ___lockobj_8)); }
	inline Il2CppObject * get_lockobj_8() const { return ___lockobj_8; }
	inline Il2CppObject ** get_address_of_lockobj_8() { return &___lockobj_8; }
	inline void set_lockobj_8(Il2CppObject * value)
	{
		___lockobj_8 = value;
		Il2CppCodeGenWriteBarrier(&___lockobj_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
