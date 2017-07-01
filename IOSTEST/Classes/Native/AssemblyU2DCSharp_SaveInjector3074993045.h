#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveInjector
struct  SaveInjector_t3074993045  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SaveInjector::saveNumber
	int32_t ___saveNumber_2;
	// System.String SaveInjector::fileName
	String_t* ___fileName_3;
	// System.Boolean SaveInjector::saveTangents
	bool ___saveTangents_4;
	// System.Byte[] SaveInjector::feedSave
	ByteU5BU5D_t3397334013* ___feedSave_5;

public:
	inline static int32_t get_offset_of_saveNumber_2() { return static_cast<int32_t>(offsetof(SaveInjector_t3074993045, ___saveNumber_2)); }
	inline int32_t get_saveNumber_2() const { return ___saveNumber_2; }
	inline int32_t* get_address_of_saveNumber_2() { return &___saveNumber_2; }
	inline void set_saveNumber_2(int32_t value)
	{
		___saveNumber_2 = value;
	}

	inline static int32_t get_offset_of_fileName_3() { return static_cast<int32_t>(offsetof(SaveInjector_t3074993045, ___fileName_3)); }
	inline String_t* get_fileName_3() const { return ___fileName_3; }
	inline String_t** get_address_of_fileName_3() { return &___fileName_3; }
	inline void set_fileName_3(String_t* value)
	{
		___fileName_3 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_3, value);
	}

	inline static int32_t get_offset_of_saveTangents_4() { return static_cast<int32_t>(offsetof(SaveInjector_t3074993045, ___saveTangents_4)); }
	inline bool get_saveTangents_4() const { return ___saveTangents_4; }
	inline bool* get_address_of_saveTangents_4() { return &___saveTangents_4; }
	inline void set_saveTangents_4(bool value)
	{
		___saveTangents_4 = value;
	}

	inline static int32_t get_offset_of_feedSave_5() { return static_cast<int32_t>(offsetof(SaveInjector_t3074993045, ___feedSave_5)); }
	inline ByteU5BU5D_t3397334013* get_feedSave_5() const { return ___feedSave_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_feedSave_5() { return &___feedSave_5; }
	inline void set_feedSave_5(ByteU5BU5D_t3397334013* value)
	{
		___feedSave_5 = value;
		Il2CppCodeGenWriteBarrier(&___feedSave_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
