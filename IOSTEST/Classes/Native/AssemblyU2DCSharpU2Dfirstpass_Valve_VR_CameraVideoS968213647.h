#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_EVRTrackedC2003723073.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_TrackedDevi1668551120.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.CameraVideoStreamFrameHeader_t
struct  CameraVideoStreamFrameHeader_t_t968213647 
{
public:
	// Valve.VR.EVRTrackedCameraFrameType Valve.VR.CameraVideoStreamFrameHeader_t::eFrameType
	int32_t ___eFrameType_0;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nWidth
	uint32_t ___nWidth_1;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nHeight
	uint32_t ___nHeight_2;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nBytesPerPixel
	uint32_t ___nBytesPerPixel_3;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nFrameSequence
	uint32_t ___nFrameSequence_4;
	// Valve.VR.TrackedDevicePose_t Valve.VR.CameraVideoStreamFrameHeader_t::standingTrackedDevicePose
	TrackedDevicePose_t_t1668551120  ___standingTrackedDevicePose_5;

public:
	inline static int32_t get_offset_of_eFrameType_0() { return static_cast<int32_t>(offsetof(CameraVideoStreamFrameHeader_t_t968213647, ___eFrameType_0)); }
	inline int32_t get_eFrameType_0() const { return ___eFrameType_0; }
	inline int32_t* get_address_of_eFrameType_0() { return &___eFrameType_0; }
	inline void set_eFrameType_0(int32_t value)
	{
		___eFrameType_0 = value;
	}

	inline static int32_t get_offset_of_nWidth_1() { return static_cast<int32_t>(offsetof(CameraVideoStreamFrameHeader_t_t968213647, ___nWidth_1)); }
	inline uint32_t get_nWidth_1() const { return ___nWidth_1; }
	inline uint32_t* get_address_of_nWidth_1() { return &___nWidth_1; }
	inline void set_nWidth_1(uint32_t value)
	{
		___nWidth_1 = value;
	}

	inline static int32_t get_offset_of_nHeight_2() { return static_cast<int32_t>(offsetof(CameraVideoStreamFrameHeader_t_t968213647, ___nHeight_2)); }
	inline uint32_t get_nHeight_2() const { return ___nHeight_2; }
	inline uint32_t* get_address_of_nHeight_2() { return &___nHeight_2; }
	inline void set_nHeight_2(uint32_t value)
	{
		___nHeight_2 = value;
	}

	inline static int32_t get_offset_of_nBytesPerPixel_3() { return static_cast<int32_t>(offsetof(CameraVideoStreamFrameHeader_t_t968213647, ___nBytesPerPixel_3)); }
	inline uint32_t get_nBytesPerPixel_3() const { return ___nBytesPerPixel_3; }
	inline uint32_t* get_address_of_nBytesPerPixel_3() { return &___nBytesPerPixel_3; }
	inline void set_nBytesPerPixel_3(uint32_t value)
	{
		___nBytesPerPixel_3 = value;
	}

	inline static int32_t get_offset_of_nFrameSequence_4() { return static_cast<int32_t>(offsetof(CameraVideoStreamFrameHeader_t_t968213647, ___nFrameSequence_4)); }
	inline uint32_t get_nFrameSequence_4() const { return ___nFrameSequence_4; }
	inline uint32_t* get_address_of_nFrameSequence_4() { return &___nFrameSequence_4; }
	inline void set_nFrameSequence_4(uint32_t value)
	{
		___nFrameSequence_4 = value;
	}

	inline static int32_t get_offset_of_standingTrackedDevicePose_5() { return static_cast<int32_t>(offsetof(CameraVideoStreamFrameHeader_t_t968213647, ___standingTrackedDevicePose_5)); }
	inline TrackedDevicePose_t_t1668551120  get_standingTrackedDevicePose_5() const { return ___standingTrackedDevicePose_5; }
	inline TrackedDevicePose_t_t1668551120 * get_address_of_standingTrackedDevicePose_5() { return &___standingTrackedDevicePose_5; }
	inline void set_standingTrackedDevicePose_5(TrackedDevicePose_t_t1668551120  value)
	{
		___standingTrackedDevicePose_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
