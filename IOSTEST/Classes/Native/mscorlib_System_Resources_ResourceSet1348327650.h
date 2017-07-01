#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Resources.IResourceReader
struct IResourceReader_t3222588482;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t1348327650  : public Il2CppObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	Il2CppObject * ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t909839986 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Reader_0)); }
	inline Il2CppObject * get_Reader_0() const { return ___Reader_0; }
	inline Il2CppObject ** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(Il2CppObject * value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier(&___Reader_0, value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Table_1)); }
	inline Hashtable_t909839986 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t909839986 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t909839986 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier(&___Table_1, value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
