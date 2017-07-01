#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4081201584;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1073906970;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t4233480993;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t2838259787;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Byte
struct Byte_t3683104436;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator
struct  SimpleCollator_t4081201584  : public Il2CppObject
{
public:
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t3620182823 * ___textInfo_2;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort_3;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable_4;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table_5;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t1073906970 * ___cjkIndexer_6;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table_7;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t1073906970 * ___cjkLv2Indexer_8;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid_9;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t4233480993* ___contractions_10;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t2838259787* ___level2Maps_11;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t3397334013* ___unsafeFlags_12;

public:
	inline static int32_t get_offset_of_textInfo_2() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___textInfo_2)); }
	inline TextInfo_t3620182823 * get_textInfo_2() const { return ___textInfo_2; }
	inline TextInfo_t3620182823 ** get_address_of_textInfo_2() { return &___textInfo_2; }
	inline void set_textInfo_2(TextInfo_t3620182823 * value)
	{
		___textInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___textInfo_2, value);
	}

	inline static int32_t get_offset_of_frenchSort_3() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___frenchSort_3)); }
	inline bool get_frenchSort_3() const { return ___frenchSort_3; }
	inline bool* get_address_of_frenchSort_3() { return &___frenchSort_3; }
	inline void set_frenchSort_3(bool value)
	{
		___frenchSort_3 = value;
	}

	inline static int32_t get_offset_of_cjkCatTable_4() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkCatTable_4)); }
	inline uint8_t* get_cjkCatTable_4() const { return ___cjkCatTable_4; }
	inline uint8_t** get_address_of_cjkCatTable_4() { return &___cjkCatTable_4; }
	inline void set_cjkCatTable_4(uint8_t* value)
	{
		___cjkCatTable_4 = value;
	}

	inline static int32_t get_offset_of_cjkLv1Table_5() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv1Table_5)); }
	inline uint8_t* get_cjkLv1Table_5() const { return ___cjkLv1Table_5; }
	inline uint8_t** get_address_of_cjkLv1Table_5() { return &___cjkLv1Table_5; }
	inline void set_cjkLv1Table_5(uint8_t* value)
	{
		___cjkLv1Table_5 = value;
	}

	inline static int32_t get_offset_of_cjkIndexer_6() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkIndexer_6)); }
	inline CodePointIndexer_t1073906970 * get_cjkIndexer_6() const { return ___cjkIndexer_6; }
	inline CodePointIndexer_t1073906970 ** get_address_of_cjkIndexer_6() { return &___cjkIndexer_6; }
	inline void set_cjkIndexer_6(CodePointIndexer_t1073906970 * value)
	{
		___cjkIndexer_6 = value;
		Il2CppCodeGenWriteBarrier(&___cjkIndexer_6, value);
	}

	inline static int32_t get_offset_of_cjkLv2Table_7() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv2Table_7)); }
	inline uint8_t* get_cjkLv2Table_7() const { return ___cjkLv2Table_7; }
	inline uint8_t** get_address_of_cjkLv2Table_7() { return &___cjkLv2Table_7; }
	inline void set_cjkLv2Table_7(uint8_t* value)
	{
		___cjkLv2Table_7 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Indexer_8() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv2Indexer_8)); }
	inline CodePointIndexer_t1073906970 * get_cjkLv2Indexer_8() const { return ___cjkLv2Indexer_8; }
	inline CodePointIndexer_t1073906970 ** get_address_of_cjkLv2Indexer_8() { return &___cjkLv2Indexer_8; }
	inline void set_cjkLv2Indexer_8(CodePointIndexer_t1073906970 * value)
	{
		___cjkLv2Indexer_8 = value;
		Il2CppCodeGenWriteBarrier(&___cjkLv2Indexer_8, value);
	}

	inline static int32_t get_offset_of_lcid_9() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___lcid_9)); }
	inline int32_t get_lcid_9() const { return ___lcid_9; }
	inline int32_t* get_address_of_lcid_9() { return &___lcid_9; }
	inline void set_lcid_9(int32_t value)
	{
		___lcid_9 = value;
	}

	inline static int32_t get_offset_of_contractions_10() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___contractions_10)); }
	inline ContractionU5BU5D_t4233480993* get_contractions_10() const { return ___contractions_10; }
	inline ContractionU5BU5D_t4233480993** get_address_of_contractions_10() { return &___contractions_10; }
	inline void set_contractions_10(ContractionU5BU5D_t4233480993* value)
	{
		___contractions_10 = value;
		Il2CppCodeGenWriteBarrier(&___contractions_10, value);
	}

	inline static int32_t get_offset_of_level2Maps_11() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___level2Maps_11)); }
	inline Level2MapU5BU5D_t2838259787* get_level2Maps_11() const { return ___level2Maps_11; }
	inline Level2MapU5BU5D_t2838259787** get_address_of_level2Maps_11() { return &___level2Maps_11; }
	inline void set_level2Maps_11(Level2MapU5BU5D_t2838259787* value)
	{
		___level2Maps_11 = value;
		Il2CppCodeGenWriteBarrier(&___level2Maps_11, value);
	}

	inline static int32_t get_offset_of_unsafeFlags_12() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___unsafeFlags_12)); }
	inline ByteU5BU5D_t3397334013* get_unsafeFlags_12() const { return ___unsafeFlags_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_unsafeFlags_12() { return &___unsafeFlags_12; }
	inline void set_unsafeFlags_12(ByteU5BU5D_t3397334013* value)
	{
		___unsafeFlags_12 = value;
		Il2CppCodeGenWriteBarrier(&___unsafeFlags_12, value);
	}
};

struct SimpleCollator_t4081201584_StaticFields
{
public:
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled_0;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t4081201584 * ___invariant_1;

public:
	inline static int32_t get_offset_of_QuickCheckDisabled_0() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584_StaticFields, ___QuickCheckDisabled_0)); }
	inline bool get_QuickCheckDisabled_0() const { return ___QuickCheckDisabled_0; }
	inline bool* get_address_of_QuickCheckDisabled_0() { return &___QuickCheckDisabled_0; }
	inline void set_QuickCheckDisabled_0(bool value)
	{
		___QuickCheckDisabled_0 = value;
	}

	inline static int32_t get_offset_of_invariant_1() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584_StaticFields, ___invariant_1)); }
	inline SimpleCollator_t4081201584 * get_invariant_1() const { return ___invariant_1; }
	inline SimpleCollator_t4081201584 ** get_address_of_invariant_1() { return &___invariant_1; }
	inline void set_invariant_1(SimpleCollator_t4081201584 * value)
	{
		___invariant_1 = value;
		Il2CppCodeGenWriteBarrier(&___invariant_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
