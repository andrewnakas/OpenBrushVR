#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3244489099;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2034248631  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t909839986 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t3244489099 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t4252133567 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	Il2CppObject * ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	Il2CppObject * ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t228987430 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t633582367 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	Il2CppObject * ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_ItemsContainer_0)); }
	inline Hashtable_t909839986 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t909839986 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t909839986 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ItemsContainer_0, value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_NullKeyItem_1)); }
	inline _Item_t3244489099 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t3244489099 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t3244489099 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_NullKeyItem_1, value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_ItemsArray_2)); }
	inline ArrayList_t4252133567 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t4252133567 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t4252133567 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ItemsArray_2, value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_hashprovider_3)); }
	inline Il2CppObject * get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline Il2CppObject ** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(Il2CppObject * value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_hashprovider_3, value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_comparer_4)); }
	inline Il2CppObject * get_m_comparer_4() const { return ___m_comparer_4; }
	inline Il2CppObject ** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(Il2CppObject * value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_comparer_4, value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___infoCopy_7)); }
	inline SerializationInfo_t228987430 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t228987430 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t228987430 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier(&___infoCopy_7, value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___keyscoll_8)); }
	inline KeysCollection_t633582367 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t633582367 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t633582367 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier(&___keyscoll_8, value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ___equality_comparer_9)); }
	inline Il2CppObject * get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline Il2CppObject ** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(Il2CppObject * value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier(&___equality_comparer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
