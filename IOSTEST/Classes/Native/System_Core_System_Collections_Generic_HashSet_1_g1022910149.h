#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t3597933550;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t1022910149  : public Il2CppObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t3030399641* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t3597933550* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	ObjectU5BU5D_t3614634134* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	Il2CppObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t228987430 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___table_4)); }
	inline Int32U5BU5D_t3030399641* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t3030399641* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier(&___table_4, value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___links_5)); }
	inline LinkU5BU5D_t3597933550* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t3597933550** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t3597933550* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier(&___links_5, value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___slots_6)); }
	inline ObjectU5BU5D_t3614634134* get_slots_6() const { return ___slots_6; }
	inline ObjectU5BU5D_t3614634134** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(ObjectU5BU5D_t3614634134* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier(&___slots_6, value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___comparer_11)); }
	inline Il2CppObject* get_comparer_11() const { return ___comparer_11; }
	inline Il2CppObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(Il2CppObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_11, value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___si_12)); }
	inline SerializationInfo_t228987430 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t228987430 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t228987430 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier(&___si_12, value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1022910149, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
