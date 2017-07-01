#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_EGraphicsAP1794133197.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_EColorSpace2848861630.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.Texture_t
struct  Texture_t_t3277130850 
{
public:
	// System.IntPtr Valve.VR.Texture_t::handle
	IntPtr_t ___handle_0;
	// Valve.VR.EGraphicsAPIConvention Valve.VR.Texture_t::eType
	int32_t ___eType_1;
	// Valve.VR.EColorSpace Valve.VR.Texture_t::eColorSpace
	int32_t ___eColorSpace_2;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Texture_t_t3277130850, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_eType_1() { return static_cast<int32_t>(offsetof(Texture_t_t3277130850, ___eType_1)); }
	inline int32_t get_eType_1() const { return ___eType_1; }
	inline int32_t* get_address_of_eType_1() { return &___eType_1; }
	inline void set_eType_1(int32_t value)
	{
		___eType_1 = value;
	}

	inline static int32_t get_offset_of_eColorSpace_2() { return static_cast<int32_t>(offsetof(Texture_t_t3277130850, ___eColorSpace_2)); }
	inline int32_t get_eColorSpace_2() const { return ___eColorSpace_2; }
	inline int32_t* get_address_of_eColorSpace_2() { return &___eColorSpace_2; }
	inline void set_eColorSpace_2(int32_t value)
	{
		___eColorSpace_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
