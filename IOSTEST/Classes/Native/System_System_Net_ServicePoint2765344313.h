#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Uri
struct Uri_t19570940;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePoint
struct  ServicePoint_t2765344313  : public Il2CppObject
{
public:
	// System.Uri System.Net.ServicePoint::uri
	Uri_t19570940 * ___uri_0;
	// System.Int32 System.Net.ServicePoint::connectionLimit
	int32_t ___connectionLimit_1;
	// System.Int32 System.Net.ServicePoint::maxIdleTime
	int32_t ___maxIdleTime_2;
	// System.Int32 System.Net.ServicePoint::currentConnections
	int32_t ___currentConnections_3;
	// System.DateTime System.Net.ServicePoint::idleSince
	DateTime_t693205669  ___idleSince_4;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy_5;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue_6;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect_7;
	// System.Object System.Net.ServicePoint::locker
	Il2CppObject * ___locker_8;
	// System.Object System.Net.ServicePoint::hostE
	Il2CppObject * ___hostE_9;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle_10;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___uri_0)); }
	inline Uri_t19570940 * get_uri_0() const { return ___uri_0; }
	inline Uri_t19570940 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t19570940 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier(&___uri_0, value);
	}

	inline static int32_t get_offset_of_connectionLimit_1() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___connectionLimit_1)); }
	inline int32_t get_connectionLimit_1() const { return ___connectionLimit_1; }
	inline int32_t* get_address_of_connectionLimit_1() { return &___connectionLimit_1; }
	inline void set_connectionLimit_1(int32_t value)
	{
		___connectionLimit_1 = value;
	}

	inline static int32_t get_offset_of_maxIdleTime_2() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___maxIdleTime_2)); }
	inline int32_t get_maxIdleTime_2() const { return ___maxIdleTime_2; }
	inline int32_t* get_address_of_maxIdleTime_2() { return &___maxIdleTime_2; }
	inline void set_maxIdleTime_2(int32_t value)
	{
		___maxIdleTime_2 = value;
	}

	inline static int32_t get_offset_of_currentConnections_3() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___currentConnections_3)); }
	inline int32_t get_currentConnections_3() const { return ___currentConnections_3; }
	inline int32_t* get_address_of_currentConnections_3() { return &___currentConnections_3; }
	inline void set_currentConnections_3(int32_t value)
	{
		___currentConnections_3 = value;
	}

	inline static int32_t get_offset_of_idleSince_4() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___idleSince_4)); }
	inline DateTime_t693205669  get_idleSince_4() const { return ___idleSince_4; }
	inline DateTime_t693205669 * get_address_of_idleSince_4() { return &___idleSince_4; }
	inline void set_idleSince_4(DateTime_t693205669  value)
	{
		___idleSince_4 = value;
	}

	inline static int32_t get_offset_of_usesProxy_5() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___usesProxy_5)); }
	inline bool get_usesProxy_5() const { return ___usesProxy_5; }
	inline bool* get_address_of_usesProxy_5() { return &___usesProxy_5; }
	inline void set_usesProxy_5(bool value)
	{
		___usesProxy_5 = value;
	}

	inline static int32_t get_offset_of_sendContinue_6() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___sendContinue_6)); }
	inline bool get_sendContinue_6() const { return ___sendContinue_6; }
	inline bool* get_address_of_sendContinue_6() { return &___sendContinue_6; }
	inline void set_sendContinue_6(bool value)
	{
		___sendContinue_6 = value;
	}

	inline static int32_t get_offset_of_useConnect_7() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___useConnect_7)); }
	inline bool get_useConnect_7() const { return ___useConnect_7; }
	inline bool* get_address_of_useConnect_7() { return &___useConnect_7; }
	inline void set_useConnect_7(bool value)
	{
		___useConnect_7 = value;
	}

	inline static int32_t get_offset_of_locker_8() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___locker_8)); }
	inline Il2CppObject * get_locker_8() const { return ___locker_8; }
	inline Il2CppObject ** get_address_of_locker_8() { return &___locker_8; }
	inline void set_locker_8(Il2CppObject * value)
	{
		___locker_8 = value;
		Il2CppCodeGenWriteBarrier(&___locker_8, value);
	}

	inline static int32_t get_offset_of_hostE_9() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___hostE_9)); }
	inline Il2CppObject * get_hostE_9() const { return ___hostE_9; }
	inline Il2CppObject ** get_address_of_hostE_9() { return &___hostE_9; }
	inline void set_hostE_9(Il2CppObject * value)
	{
		___hostE_9 = value;
		Il2CppCodeGenWriteBarrier(&___hostE_9, value);
	}

	inline static int32_t get_offset_of_useNagle_10() { return static_cast<int32_t>(offsetof(ServicePoint_t2765344313, ___useNagle_10)); }
	inline bool get_useNagle_10() const { return ___useNagle_10; }
	inline bool* get_address_of_useNagle_10() { return &___useNagle_10; }
	inline void set_useNagle_10(bool value)
	{
		___useNagle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
