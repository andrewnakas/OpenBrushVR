#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_SecurityProtocolType3099771628.h"

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t290043810;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1916536542;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager
struct  ServicePointManager_t745663000  : public Il2CppObject
{
public:

public:
};

struct ServicePointManager_t745663000_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t290043810 * ___servicePoints_0;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	Il2CppObject * ___policy_1;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_2;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_3;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_4;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_5;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_6;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_7;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_8;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::server_cert_cb
	RemoteCertificateValidationCallback_t2756269959 * ___server_cert_cb_9;

public:
	inline static int32_t get_offset_of_servicePoints_0() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___servicePoints_0)); }
	inline HybridDictionary_t290043810 * get_servicePoints_0() const { return ___servicePoints_0; }
	inline HybridDictionary_t290043810 ** get_address_of_servicePoints_0() { return &___servicePoints_0; }
	inline void set_servicePoints_0(HybridDictionary_t290043810 * value)
	{
		___servicePoints_0 = value;
		Il2CppCodeGenWriteBarrier(&___servicePoints_0, value);
	}

	inline static int32_t get_offset_of_policy_1() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___policy_1)); }
	inline Il2CppObject * get_policy_1() const { return ___policy_1; }
	inline Il2CppObject ** get_address_of_policy_1() { return &___policy_1; }
	inline void set_policy_1(Il2CppObject * value)
	{
		___policy_1 = value;
		Il2CppCodeGenWriteBarrier(&___policy_1, value);
	}

	inline static int32_t get_offset_of_defaultConnectionLimit_2() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___defaultConnectionLimit_2)); }
	inline int32_t get_defaultConnectionLimit_2() const { return ___defaultConnectionLimit_2; }
	inline int32_t* get_address_of_defaultConnectionLimit_2() { return &___defaultConnectionLimit_2; }
	inline void set_defaultConnectionLimit_2(int32_t value)
	{
		___defaultConnectionLimit_2 = value;
	}

	inline static int32_t get_offset_of_maxServicePointIdleTime_3() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___maxServicePointIdleTime_3)); }
	inline int32_t get_maxServicePointIdleTime_3() const { return ___maxServicePointIdleTime_3; }
	inline int32_t* get_address_of_maxServicePointIdleTime_3() { return &___maxServicePointIdleTime_3; }
	inline void set_maxServicePointIdleTime_3(int32_t value)
	{
		___maxServicePointIdleTime_3 = value;
	}

	inline static int32_t get_offset_of_maxServicePoints_4() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___maxServicePoints_4)); }
	inline int32_t get_maxServicePoints_4() const { return ___maxServicePoints_4; }
	inline int32_t* get_address_of_maxServicePoints_4() { return &___maxServicePoints_4; }
	inline void set_maxServicePoints_4(int32_t value)
	{
		___maxServicePoints_4 = value;
	}

	inline static int32_t get_offset_of__checkCRL_5() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ____checkCRL_5)); }
	inline bool get__checkCRL_5() const { return ____checkCRL_5; }
	inline bool* get_address_of__checkCRL_5() { return &____checkCRL_5; }
	inline void set__checkCRL_5(bool value)
	{
		____checkCRL_5 = value;
	}

	inline static int32_t get_offset_of__securityProtocol_6() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ____securityProtocol_6)); }
	inline int32_t get__securityProtocol_6() const { return ____securityProtocol_6; }
	inline int32_t* get_address_of__securityProtocol_6() { return &____securityProtocol_6; }
	inline void set__securityProtocol_6(int32_t value)
	{
		____securityProtocol_6 = value;
	}

	inline static int32_t get_offset_of_expectContinue_7() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___expectContinue_7)); }
	inline bool get_expectContinue_7() const { return ___expectContinue_7; }
	inline bool* get_address_of_expectContinue_7() { return &___expectContinue_7; }
	inline void set_expectContinue_7(bool value)
	{
		___expectContinue_7 = value;
	}

	inline static int32_t get_offset_of_useNagle_8() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___useNagle_8)); }
	inline bool get_useNagle_8() const { return ___useNagle_8; }
	inline bool* get_address_of_useNagle_8() { return &___useNagle_8; }
	inline void set_useNagle_8(bool value)
	{
		___useNagle_8 = value;
	}

	inline static int32_t get_offset_of_server_cert_cb_9() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___server_cert_cb_9)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_server_cert_cb_9() const { return ___server_cert_cb_9; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_server_cert_cb_9() { return &___server_cert_cb_9; }
	inline void set_server_cert_cb_9(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___server_cert_cb_9 = value;
		Il2CppCodeGenWriteBarrier(&___server_cert_cb_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
