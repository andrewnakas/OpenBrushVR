#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdMatrix34_664273062.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.RenderModel_ComponentState_t
struct  RenderModel_ComponentState_t_t2032012879 
{
public:
	// Valve.VR.HmdMatrix34_t Valve.VR.RenderModel_ComponentState_t::mTrackingToComponentRenderModel
	HmdMatrix34_t_t664273062  ___mTrackingToComponentRenderModel_0;
	// Valve.VR.HmdMatrix34_t Valve.VR.RenderModel_ComponentState_t::mTrackingToComponentLocal
	HmdMatrix34_t_t664273062  ___mTrackingToComponentLocal_1;
	// System.UInt32 Valve.VR.RenderModel_ComponentState_t::uProperties
	uint32_t ___uProperties_2;

public:
	inline static int32_t get_offset_of_mTrackingToComponentRenderModel_0() { return static_cast<int32_t>(offsetof(RenderModel_ComponentState_t_t2032012879, ___mTrackingToComponentRenderModel_0)); }
	inline HmdMatrix34_t_t664273062  get_mTrackingToComponentRenderModel_0() const { return ___mTrackingToComponentRenderModel_0; }
	inline HmdMatrix34_t_t664273062 * get_address_of_mTrackingToComponentRenderModel_0() { return &___mTrackingToComponentRenderModel_0; }
	inline void set_mTrackingToComponentRenderModel_0(HmdMatrix34_t_t664273062  value)
	{
		___mTrackingToComponentRenderModel_0 = value;
	}

	inline static int32_t get_offset_of_mTrackingToComponentLocal_1() { return static_cast<int32_t>(offsetof(RenderModel_ComponentState_t_t2032012879, ___mTrackingToComponentLocal_1)); }
	inline HmdMatrix34_t_t664273062  get_mTrackingToComponentLocal_1() const { return ___mTrackingToComponentLocal_1; }
	inline HmdMatrix34_t_t664273062 * get_address_of_mTrackingToComponentLocal_1() { return &___mTrackingToComponentLocal_1; }
	inline void set_mTrackingToComponentLocal_1(HmdMatrix34_t_t664273062  value)
	{
		___mTrackingToComponentLocal_1 = value;
	}

	inline static int32_t get_offset_of_uProperties_2() { return static_cast<int32_t>(offsetof(RenderModel_ComponentState_t_t2032012879, ___uProperties_2)); }
	inline uint32_t get_uProperties_2() const { return ___uProperties_2; }
	inline uint32_t* get_address_of_uProperties_2() { return &___uProperties_2; }
	inline void set_uProperties_2(uint32_t value)
	{
		___uProperties_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
