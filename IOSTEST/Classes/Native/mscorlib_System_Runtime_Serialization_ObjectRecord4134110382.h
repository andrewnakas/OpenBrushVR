#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord1923758778.h"

// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1282780357;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3171032996;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t4134110382  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	Il2CppObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	Il2CppObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t228987430 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	Il2CppObject * ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	Il2CppObject * ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t3030399641* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t3171032996 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t3171032996 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t4134110382 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___OriginalObject_1)); }
	inline Il2CppObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline Il2CppObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(Il2CppObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___OriginalObject_1, value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___ObjectInstance_2)); }
	inline Il2CppObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline Il2CppObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(Il2CppObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectInstance_2, value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___Info_4)); }
	inline SerializationInfo_t228987430 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t228987430 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t228987430 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier(&___Info_4, value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___Surrogate_6)); }
	inline Il2CppObject * get_Surrogate_6() const { return ___Surrogate_6; }
	inline Il2CppObject ** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(Il2CppObject * value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier(&___Surrogate_6, value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___SurrogateSelector_7)); }
	inline Il2CppObject * get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline Il2CppObject ** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(Il2CppObject * value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier(&___SurrogateSelector_7, value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier(&___Member_8, value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t3030399641* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t3030399641** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t3030399641* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier(&___ArrayIndex_9, value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t3171032996 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t3171032996 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t3171032996 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier(&___FixupChainAsContainer_10, value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t3171032996 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t3171032996 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t3171032996 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier(&___FixupChainAsRequired_11, value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t4134110382, ___Next_12)); }
	inline ObjectRecord_t4134110382 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t4134110382 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t4134110382 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier(&___Next_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
