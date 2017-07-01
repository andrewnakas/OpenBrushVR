#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t3166395312;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t187688763;
// System.Collections.Hashtable/HashValues
struct HashValues_t2390200547;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t909839986  : public Il2CppObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t3166395312* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t3030399641* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t187688763 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t2390200547 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	Il2CppObject * ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	Il2CppObject * ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t228987430 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	Il2CppObject * ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___table_4)); }
	inline SlotU5BU5D_t3166395312* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t3166395312** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t3166395312* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier(&___table_4, value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hashes_5)); }
	inline Int32U5BU5D_t3030399641* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t3030399641* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier(&___hashes_5, value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hashKeys_7)); }
	inline HashKeys_t187688763 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t187688763 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t187688763 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier(&___hashKeys_7, value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hashValues_8)); }
	inline HashValues_t2390200547 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t2390200547 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t2390200547 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier(&___hashValues_8, value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hcpRef_9)); }
	inline Il2CppObject * get_hcpRef_9() const { return ___hcpRef_9; }
	inline Il2CppObject ** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(Il2CppObject * value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier(&___hcpRef_9, value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___comparerRef_10)); }
	inline Il2CppObject * get_comparerRef_10() const { return ___comparerRef_10; }
	inline Il2CppObject ** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(Il2CppObject * value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier(&___comparerRef_10, value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___serializationInfo_11)); }
	inline SerializationInfo_t228987430 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t228987430 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t228987430 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier(&___serializationInfo_11, value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___equalityComparer_12)); }
	inline Il2CppObject * get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline Il2CppObject ** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(Il2CppObject * value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier(&___equalityComparer_12, value);
	}
};

struct Hashtable_t909839986_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t3030399641* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t909839986_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t3030399641* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t3030399641** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t3030399641* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier(&___primeTbl_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
