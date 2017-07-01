#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t1761494505;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t4268412390  : public Il2CppObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t1761494505 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t1407710183 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t1941658161 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t1941658161 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t1941658161 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t1941658161 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t1941658161 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t1761494505 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t1761494505 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t1761494505 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier(&___resolve_event_holder_1, value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____evidence_2)); }
	inline Evidence_t1407710183 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t1407710183 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t1407710183 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier(&____evidence_2, value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____minimum_3)); }
	inline PermissionSet_t1941658161 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t1941658161 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t1941658161 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier(&____minimum_3, value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____optional_4)); }
	inline PermissionSet_t1941658161 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t1941658161 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t1941658161 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier(&____optional_4, value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____refuse_5)); }
	inline PermissionSet_t1941658161 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t1941658161 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t1941658161 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier(&____refuse_5, value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____granted_6)); }
	inline PermissionSet_t1941658161 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t1941658161 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t1941658161 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier(&____granted_6, value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____denied_7)); }
	inline PermissionSet_t1941658161 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t1941658161 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t1941658161 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier(&____denied_7, value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyName_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
