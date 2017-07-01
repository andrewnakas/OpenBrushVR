#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdVector3_2255224910.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.RenderModel_Vertex_t
struct  RenderModel_Vertex_t_t3505223259 
{
public:
	// Valve.VR.HmdVector3_t Valve.VR.RenderModel_Vertex_t::vPosition
	HmdVector3_t_t2255224910  ___vPosition_0;
	// Valve.VR.HmdVector3_t Valve.VR.RenderModel_Vertex_t::vNormal
	HmdVector3_t_t2255224910  ___vNormal_1;
	// System.Single Valve.VR.RenderModel_Vertex_t::rfTextureCoord0
	float ___rfTextureCoord0_2;
	// System.Single Valve.VR.RenderModel_Vertex_t::rfTextureCoord1
	float ___rfTextureCoord1_3;

public:
	inline static int32_t get_offset_of_vPosition_0() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t3505223259, ___vPosition_0)); }
	inline HmdVector3_t_t2255224910  get_vPosition_0() const { return ___vPosition_0; }
	inline HmdVector3_t_t2255224910 * get_address_of_vPosition_0() { return &___vPosition_0; }
	inline void set_vPosition_0(HmdVector3_t_t2255224910  value)
	{
		___vPosition_0 = value;
	}

	inline static int32_t get_offset_of_vNormal_1() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t3505223259, ___vNormal_1)); }
	inline HmdVector3_t_t2255224910  get_vNormal_1() const { return ___vNormal_1; }
	inline HmdVector3_t_t2255224910 * get_address_of_vNormal_1() { return &___vNormal_1; }
	inline void set_vNormal_1(HmdVector3_t_t2255224910  value)
	{
		___vNormal_1 = value;
	}

	inline static int32_t get_offset_of_rfTextureCoord0_2() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t3505223259, ___rfTextureCoord0_2)); }
	inline float get_rfTextureCoord0_2() const { return ___rfTextureCoord0_2; }
	inline float* get_address_of_rfTextureCoord0_2() { return &___rfTextureCoord0_2; }
	inline void set_rfTextureCoord0_2(float value)
	{
		___rfTextureCoord0_2 = value;
	}

	inline static int32_t get_offset_of_rfTextureCoord1_3() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t3505223259, ___rfTextureCoord1_3)); }
	inline float get_rfTextureCoord1_3() const { return ___rfTextureCoord1_3; }
	inline float* get_address_of_rfTextureCoord1_3() { return &___rfTextureCoord1_3; }
	inline void set_rfTextureCoord1_3(float value)
	{
		___rfTextureCoord1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
