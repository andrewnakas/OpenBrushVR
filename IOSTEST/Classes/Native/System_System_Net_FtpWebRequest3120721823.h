#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_WebRequest1365124353.h"

// System.Uri
struct Uri_t19570940;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest
struct  FtpWebRequest_t3120721823  : public WebRequest_t1365124353
{
public:
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t19570940 * ___requestUri_6;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Il2CppObject * ___proxy_7;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_8;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_9;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_10;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_11;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_12;
	// System.Object System.Net.FtpWebRequest::locker
	Il2CppObject * ___locker_13;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t2756269959 * ___callback_15;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___requestUri_6)); }
	inline Uri_t19570940 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t19570940 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t19570940 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier(&___requestUri_6, value);
	}

	inline static int32_t get_offset_of_proxy_7() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___proxy_7)); }
	inline Il2CppObject * get_proxy_7() const { return ___proxy_7; }
	inline Il2CppObject ** get_address_of_proxy_7() { return &___proxy_7; }
	inline void set_proxy_7(Il2CppObject * value)
	{
		___proxy_7 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_7, value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___timeout_8)); }
	inline int32_t get_timeout_8() const { return ___timeout_8; }
	inline int32_t* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(int32_t value)
	{
		___timeout_8 = value;
	}

	inline static int32_t get_offset_of_rwTimeout_9() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___rwTimeout_9)); }
	inline int32_t get_rwTimeout_9() const { return ___rwTimeout_9; }
	inline int32_t* get_address_of_rwTimeout_9() { return &___rwTimeout_9; }
	inline void set_rwTimeout_9(int32_t value)
	{
		___rwTimeout_9 = value;
	}

	inline static int32_t get_offset_of_binary_10() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___binary_10)); }
	inline bool get_binary_10() const { return ___binary_10; }
	inline bool* get_address_of_binary_10() { return &___binary_10; }
	inline void set_binary_10(bool value)
	{
		___binary_10 = value;
	}

	inline static int32_t get_offset_of_usePassive_11() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___usePassive_11)); }
	inline bool get_usePassive_11() const { return ___usePassive_11; }
	inline bool* get_address_of_usePassive_11() { return &___usePassive_11; }
	inline void set_usePassive_11(bool value)
	{
		___usePassive_11 = value;
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___method_12)); }
	inline String_t* get_method_12() const { return ___method_12; }
	inline String_t** get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(String_t* value)
	{
		___method_12 = value;
		Il2CppCodeGenWriteBarrier(&___method_12, value);
	}

	inline static int32_t get_offset_of_locker_13() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___locker_13)); }
	inline Il2CppObject * get_locker_13() const { return ___locker_13; }
	inline Il2CppObject ** get_address_of_locker_13() { return &___locker_13; }
	inline void set_locker_13(Il2CppObject * value)
	{
		___locker_13 = value;
		Il2CppCodeGenWriteBarrier(&___locker_13, value);
	}

	inline static int32_t get_offset_of_callback_15() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___callback_15)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_callback_15() const { return ___callback_15; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_callback_15() { return &___callback_15; }
	inline void set_callback_15(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___callback_15 = value;
		Il2CppCodeGenWriteBarrier(&___callback_15, value);
	}
};

struct FtpWebRequest_t3120721823_StaticFields
{
public:
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t1642385972* ___supportedCommands_14;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache1C_16;

public:
	inline static int32_t get_offset_of_supportedCommands_14() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823_StaticFields, ___supportedCommands_14)); }
	inline StringU5BU5D_t1642385972* get_supportedCommands_14() const { return ___supportedCommands_14; }
	inline StringU5BU5D_t1642385972** get_address_of_supportedCommands_14() { return &___supportedCommands_14; }
	inline void set_supportedCommands_14(StringU5BU5D_t1642385972* value)
	{
		___supportedCommands_14 = value;
		Il2CppCodeGenWriteBarrier(&___supportedCommands_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_16() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823_StaticFields, ___U3CU3Ef__amU24cache1C_16)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache1C_16() const { return ___U3CU3Ef__amU24cache1C_16; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache1C_16() { return &___U3CU3Ef__amU24cache1C_16; }
	inline void set_U3CU3Ef__amU24cache1C_16(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache1C_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
