#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t936711909;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t1013133725;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2265014744;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t2463923611  : public Il2CppObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t2491843768 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	Il2CppObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	Il2CppObject * ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t1642385972* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t3030399641* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t1013133725* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t2265014744* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	Il2CppObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___reader_0)); }
	inline BinaryReader_t2491843768 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2491843768 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2491843768 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier(&___reader_0, value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___readerLock_1)); }
	inline Il2CppObject * get_readerLock_1() const { return ___readerLock_1; }
	inline Il2CppObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(Il2CppObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier(&___readerLock_1, value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___formatter_2)); }
	inline Il2CppObject * get_formatter_2() const { return ___formatter_2; }
	inline Il2CppObject ** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(Il2CppObject * value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier(&___formatter_2, value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___typeNames_5)); }
	inline StringU5BU5D_t1642385972* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t1642385972** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t1642385972* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___typeNames_5, value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___hashes_6)); }
	inline Int32U5BU5D_t3030399641* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t3030399641* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier(&___hashes_6, value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___infos_7)); }
	inline ResourceInfoU5BU5D_t1013133725* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t1013133725** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t1013133725* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier(&___infos_7, value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t2265014744* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t2265014744** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t2265014744* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier(&___cache_11, value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___cache_lock_12)); }
	inline Il2CppObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline Il2CppObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(Il2CppObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier(&___cache_lock_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
