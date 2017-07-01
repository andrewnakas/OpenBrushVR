#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_T1182459634.h"

// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t1476095226  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	Il2CppObject * ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t1417235061  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t3985864818 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t2645893724 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t909839986 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t909839986 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	Il2CppObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t3397334013* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____surrogateSelector_0)); }
	inline Il2CppObject * get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline Il2CppObject ** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(Il2CppObject * value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier(&____surrogateSelector_0, value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____context_1)); }
	inline StreamingContext_t1417235061  get__context_1() const { return ____context_1; }
	inline StreamingContext_t1417235061 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t1417235061  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____binder_2)); }
	inline SerializationBinder_t3985864818 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t3985864818 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t3985864818 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier(&____binder_2, value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____manager_4)); }
	inline ObjectManager_t2645893724 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t2645893724 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t2645893724 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier(&____manager_4, value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____registeredAssemblies_5)); }
	inline Hashtable_t909839986 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t909839986 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t909839986 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier(&____registeredAssemblies_5, value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____typeMetadataCache_6)); }
	inline Hashtable_t909839986 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t909839986 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t909839986 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier(&____typeMetadataCache_6, value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____lastObject_7)); }
	inline Il2CppObject * get__lastObject_7() const { return ____lastObject_7; }
	inline Il2CppObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(Il2CppObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier(&____lastObject_7, value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t3397334013* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t3397334013* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___arrayBuffer_10, value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t1476095226, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
