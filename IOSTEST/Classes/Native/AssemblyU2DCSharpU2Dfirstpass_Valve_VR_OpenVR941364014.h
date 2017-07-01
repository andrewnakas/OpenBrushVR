#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Valve.VR.OpenVR/COpenVRContext
struct COpenVRContext_t2969167613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.OpenVR
struct  OpenVR_t941364014  : public Il2CppObject
{
public:

public:
};

struct OpenVR_t941364014_StaticFields
{
public:
	// System.UInt32 Valve.VR.OpenVR::<VRToken>k__BackingField
	uint32_t ___U3CVRTokenU3Ek__BackingField_147;
	// Valve.VR.OpenVR/COpenVRContext Valve.VR.OpenVR::_OpenVRInternal_ModuleContext
	COpenVRContext_t2969167613 * ____OpenVRInternal_ModuleContext_149;

public:
	inline static int32_t get_offset_of_U3CVRTokenU3Ek__BackingField_147() { return static_cast<int32_t>(offsetof(OpenVR_t941364014_StaticFields, ___U3CVRTokenU3Ek__BackingField_147)); }
	inline uint32_t get_U3CVRTokenU3Ek__BackingField_147() const { return ___U3CVRTokenU3Ek__BackingField_147; }
	inline uint32_t* get_address_of_U3CVRTokenU3Ek__BackingField_147() { return &___U3CVRTokenU3Ek__BackingField_147; }
	inline void set_U3CVRTokenU3Ek__BackingField_147(uint32_t value)
	{
		___U3CVRTokenU3Ek__BackingField_147 = value;
	}

	inline static int32_t get_offset_of__OpenVRInternal_ModuleContext_149() { return static_cast<int32_t>(offsetof(OpenVR_t941364014_StaticFields, ____OpenVRInternal_ModuleContext_149)); }
	inline COpenVRContext_t2969167613 * get__OpenVRInternal_ModuleContext_149() const { return ____OpenVRInternal_ModuleContext_149; }
	inline COpenVRContext_t2969167613 ** get_address_of__OpenVRInternal_ModuleContext_149() { return &____OpenVRInternal_ModuleContext_149; }
	inline void set__OpenVRInternal_ModuleContext_149(COpenVRContext_t2969167613 * value)
	{
		____OpenVRInternal_ModuleContext_149 = value;
		Il2CppCodeGenWriteBarrier(&____OpenVRInternal_ModuleContext_149, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
