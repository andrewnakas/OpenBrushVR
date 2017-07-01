#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t3597577401;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>
struct  Collection_1_t2598381554  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::list
	Il2CppObject* ___list_0;
	// System.Object System.Collections.ObjectModel.Collection`1::syncRoot
	Il2CppObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Collection_1_t2598381554, ___list_0)); }
	inline Il2CppObject* get_list_0() const { return ___list_0; }
	inline Il2CppObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(Il2CppObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t2598381554, ___syncRoot_1)); }
	inline Il2CppObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline Il2CppObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(Il2CppObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
