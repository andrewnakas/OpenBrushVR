#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_TrackedDevi1668551120.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.Compositor_FrameTiming
struct  Compositor_FrameTiming_t2839634313 
{
public:
	// System.UInt32 Valve.VR.Compositor_FrameTiming::m_nSize
	uint32_t ___m_nSize_0;
	// System.UInt32 Valve.VR.Compositor_FrameTiming::m_nFrameIndex
	uint32_t ___m_nFrameIndex_1;
	// System.UInt32 Valve.VR.Compositor_FrameTiming::m_nNumFramePresents
	uint32_t ___m_nNumFramePresents_2;
	// System.UInt32 Valve.VR.Compositor_FrameTiming::m_nNumDroppedFrames
	uint32_t ___m_nNumDroppedFrames_3;
	// System.UInt32 Valve.VR.Compositor_FrameTiming::m_nReprojectionFlags
	uint32_t ___m_nReprojectionFlags_4;
	// System.Double Valve.VR.Compositor_FrameTiming::m_flSystemTimeInSeconds
	double ___m_flSystemTimeInSeconds_5;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flPreSubmitGpuMs
	float ___m_flPreSubmitGpuMs_6;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flPostSubmitGpuMs
	float ___m_flPostSubmitGpuMs_7;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flTotalRenderGpuMs
	float ___m_flTotalRenderGpuMs_8;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flCompositorRenderGpuMs
	float ___m_flCompositorRenderGpuMs_9;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flCompositorRenderCpuMs
	float ___m_flCompositorRenderCpuMs_10;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flCompositorIdleCpuMs
	float ___m_flCompositorIdleCpuMs_11;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flClientFrameIntervalMs
	float ___m_flClientFrameIntervalMs_12;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flPresentCallCpuMs
	float ___m_flPresentCallCpuMs_13;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flWaitForPresentCpuMs
	float ___m_flWaitForPresentCpuMs_14;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flSubmitFrameMs
	float ___m_flSubmitFrameMs_15;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flWaitGetPosesCalledMs
	float ___m_flWaitGetPosesCalledMs_16;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flNewPosesReadyMs
	float ___m_flNewPosesReadyMs_17;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flNewFrameReadyMs
	float ___m_flNewFrameReadyMs_18;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flCompositorUpdateStartMs
	float ___m_flCompositorUpdateStartMs_19;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flCompositorUpdateEndMs
	float ___m_flCompositorUpdateEndMs_20;
	// System.Single Valve.VR.Compositor_FrameTiming::m_flCompositorRenderStartMs
	float ___m_flCompositorRenderStartMs_21;
	// Valve.VR.TrackedDevicePose_t Valve.VR.Compositor_FrameTiming::m_HmdPose
	TrackedDevicePose_t_t1668551120  ___m_HmdPose_22;

public:
	inline static int32_t get_offset_of_m_nSize_0() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_nSize_0)); }
	inline uint32_t get_m_nSize_0() const { return ___m_nSize_0; }
	inline uint32_t* get_address_of_m_nSize_0() { return &___m_nSize_0; }
	inline void set_m_nSize_0(uint32_t value)
	{
		___m_nSize_0 = value;
	}

	inline static int32_t get_offset_of_m_nFrameIndex_1() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_nFrameIndex_1)); }
	inline uint32_t get_m_nFrameIndex_1() const { return ___m_nFrameIndex_1; }
	inline uint32_t* get_address_of_m_nFrameIndex_1() { return &___m_nFrameIndex_1; }
	inline void set_m_nFrameIndex_1(uint32_t value)
	{
		___m_nFrameIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_nNumFramePresents_2() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_nNumFramePresents_2)); }
	inline uint32_t get_m_nNumFramePresents_2() const { return ___m_nNumFramePresents_2; }
	inline uint32_t* get_address_of_m_nNumFramePresents_2() { return &___m_nNumFramePresents_2; }
	inline void set_m_nNumFramePresents_2(uint32_t value)
	{
		___m_nNumFramePresents_2 = value;
	}

	inline static int32_t get_offset_of_m_nNumDroppedFrames_3() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_nNumDroppedFrames_3)); }
	inline uint32_t get_m_nNumDroppedFrames_3() const { return ___m_nNumDroppedFrames_3; }
	inline uint32_t* get_address_of_m_nNumDroppedFrames_3() { return &___m_nNumDroppedFrames_3; }
	inline void set_m_nNumDroppedFrames_3(uint32_t value)
	{
		___m_nNumDroppedFrames_3 = value;
	}

	inline static int32_t get_offset_of_m_nReprojectionFlags_4() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_nReprojectionFlags_4)); }
	inline uint32_t get_m_nReprojectionFlags_4() const { return ___m_nReprojectionFlags_4; }
	inline uint32_t* get_address_of_m_nReprojectionFlags_4() { return &___m_nReprojectionFlags_4; }
	inline void set_m_nReprojectionFlags_4(uint32_t value)
	{
		___m_nReprojectionFlags_4 = value;
	}

	inline static int32_t get_offset_of_m_flSystemTimeInSeconds_5() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flSystemTimeInSeconds_5)); }
	inline double get_m_flSystemTimeInSeconds_5() const { return ___m_flSystemTimeInSeconds_5; }
	inline double* get_address_of_m_flSystemTimeInSeconds_5() { return &___m_flSystemTimeInSeconds_5; }
	inline void set_m_flSystemTimeInSeconds_5(double value)
	{
		___m_flSystemTimeInSeconds_5 = value;
	}

	inline static int32_t get_offset_of_m_flPreSubmitGpuMs_6() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flPreSubmitGpuMs_6)); }
	inline float get_m_flPreSubmitGpuMs_6() const { return ___m_flPreSubmitGpuMs_6; }
	inline float* get_address_of_m_flPreSubmitGpuMs_6() { return &___m_flPreSubmitGpuMs_6; }
	inline void set_m_flPreSubmitGpuMs_6(float value)
	{
		___m_flPreSubmitGpuMs_6 = value;
	}

	inline static int32_t get_offset_of_m_flPostSubmitGpuMs_7() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flPostSubmitGpuMs_7)); }
	inline float get_m_flPostSubmitGpuMs_7() const { return ___m_flPostSubmitGpuMs_7; }
	inline float* get_address_of_m_flPostSubmitGpuMs_7() { return &___m_flPostSubmitGpuMs_7; }
	inline void set_m_flPostSubmitGpuMs_7(float value)
	{
		___m_flPostSubmitGpuMs_7 = value;
	}

	inline static int32_t get_offset_of_m_flTotalRenderGpuMs_8() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flTotalRenderGpuMs_8)); }
	inline float get_m_flTotalRenderGpuMs_8() const { return ___m_flTotalRenderGpuMs_8; }
	inline float* get_address_of_m_flTotalRenderGpuMs_8() { return &___m_flTotalRenderGpuMs_8; }
	inline void set_m_flTotalRenderGpuMs_8(float value)
	{
		___m_flTotalRenderGpuMs_8 = value;
	}

	inline static int32_t get_offset_of_m_flCompositorRenderGpuMs_9() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flCompositorRenderGpuMs_9)); }
	inline float get_m_flCompositorRenderGpuMs_9() const { return ___m_flCompositorRenderGpuMs_9; }
	inline float* get_address_of_m_flCompositorRenderGpuMs_9() { return &___m_flCompositorRenderGpuMs_9; }
	inline void set_m_flCompositorRenderGpuMs_9(float value)
	{
		___m_flCompositorRenderGpuMs_9 = value;
	}

	inline static int32_t get_offset_of_m_flCompositorRenderCpuMs_10() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flCompositorRenderCpuMs_10)); }
	inline float get_m_flCompositorRenderCpuMs_10() const { return ___m_flCompositorRenderCpuMs_10; }
	inline float* get_address_of_m_flCompositorRenderCpuMs_10() { return &___m_flCompositorRenderCpuMs_10; }
	inline void set_m_flCompositorRenderCpuMs_10(float value)
	{
		___m_flCompositorRenderCpuMs_10 = value;
	}

	inline static int32_t get_offset_of_m_flCompositorIdleCpuMs_11() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flCompositorIdleCpuMs_11)); }
	inline float get_m_flCompositorIdleCpuMs_11() const { return ___m_flCompositorIdleCpuMs_11; }
	inline float* get_address_of_m_flCompositorIdleCpuMs_11() { return &___m_flCompositorIdleCpuMs_11; }
	inline void set_m_flCompositorIdleCpuMs_11(float value)
	{
		___m_flCompositorIdleCpuMs_11 = value;
	}

	inline static int32_t get_offset_of_m_flClientFrameIntervalMs_12() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flClientFrameIntervalMs_12)); }
	inline float get_m_flClientFrameIntervalMs_12() const { return ___m_flClientFrameIntervalMs_12; }
	inline float* get_address_of_m_flClientFrameIntervalMs_12() { return &___m_flClientFrameIntervalMs_12; }
	inline void set_m_flClientFrameIntervalMs_12(float value)
	{
		___m_flClientFrameIntervalMs_12 = value;
	}

	inline static int32_t get_offset_of_m_flPresentCallCpuMs_13() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flPresentCallCpuMs_13)); }
	inline float get_m_flPresentCallCpuMs_13() const { return ___m_flPresentCallCpuMs_13; }
	inline float* get_address_of_m_flPresentCallCpuMs_13() { return &___m_flPresentCallCpuMs_13; }
	inline void set_m_flPresentCallCpuMs_13(float value)
	{
		___m_flPresentCallCpuMs_13 = value;
	}

	inline static int32_t get_offset_of_m_flWaitForPresentCpuMs_14() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flWaitForPresentCpuMs_14)); }
	inline float get_m_flWaitForPresentCpuMs_14() const { return ___m_flWaitForPresentCpuMs_14; }
	inline float* get_address_of_m_flWaitForPresentCpuMs_14() { return &___m_flWaitForPresentCpuMs_14; }
	inline void set_m_flWaitForPresentCpuMs_14(float value)
	{
		___m_flWaitForPresentCpuMs_14 = value;
	}

	inline static int32_t get_offset_of_m_flSubmitFrameMs_15() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flSubmitFrameMs_15)); }
	inline float get_m_flSubmitFrameMs_15() const { return ___m_flSubmitFrameMs_15; }
	inline float* get_address_of_m_flSubmitFrameMs_15() { return &___m_flSubmitFrameMs_15; }
	inline void set_m_flSubmitFrameMs_15(float value)
	{
		___m_flSubmitFrameMs_15 = value;
	}

	inline static int32_t get_offset_of_m_flWaitGetPosesCalledMs_16() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flWaitGetPosesCalledMs_16)); }
	inline float get_m_flWaitGetPosesCalledMs_16() const { return ___m_flWaitGetPosesCalledMs_16; }
	inline float* get_address_of_m_flWaitGetPosesCalledMs_16() { return &___m_flWaitGetPosesCalledMs_16; }
	inline void set_m_flWaitGetPosesCalledMs_16(float value)
	{
		___m_flWaitGetPosesCalledMs_16 = value;
	}

	inline static int32_t get_offset_of_m_flNewPosesReadyMs_17() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flNewPosesReadyMs_17)); }
	inline float get_m_flNewPosesReadyMs_17() const { return ___m_flNewPosesReadyMs_17; }
	inline float* get_address_of_m_flNewPosesReadyMs_17() { return &___m_flNewPosesReadyMs_17; }
	inline void set_m_flNewPosesReadyMs_17(float value)
	{
		___m_flNewPosesReadyMs_17 = value;
	}

	inline static int32_t get_offset_of_m_flNewFrameReadyMs_18() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flNewFrameReadyMs_18)); }
	inline float get_m_flNewFrameReadyMs_18() const { return ___m_flNewFrameReadyMs_18; }
	inline float* get_address_of_m_flNewFrameReadyMs_18() { return &___m_flNewFrameReadyMs_18; }
	inline void set_m_flNewFrameReadyMs_18(float value)
	{
		___m_flNewFrameReadyMs_18 = value;
	}

	inline static int32_t get_offset_of_m_flCompositorUpdateStartMs_19() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flCompositorUpdateStartMs_19)); }
	inline float get_m_flCompositorUpdateStartMs_19() const { return ___m_flCompositorUpdateStartMs_19; }
	inline float* get_address_of_m_flCompositorUpdateStartMs_19() { return &___m_flCompositorUpdateStartMs_19; }
	inline void set_m_flCompositorUpdateStartMs_19(float value)
	{
		___m_flCompositorUpdateStartMs_19 = value;
	}

	inline static int32_t get_offset_of_m_flCompositorUpdateEndMs_20() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flCompositorUpdateEndMs_20)); }
	inline float get_m_flCompositorUpdateEndMs_20() const { return ___m_flCompositorUpdateEndMs_20; }
	inline float* get_address_of_m_flCompositorUpdateEndMs_20() { return &___m_flCompositorUpdateEndMs_20; }
	inline void set_m_flCompositorUpdateEndMs_20(float value)
	{
		___m_flCompositorUpdateEndMs_20 = value;
	}

	inline static int32_t get_offset_of_m_flCompositorRenderStartMs_21() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_flCompositorRenderStartMs_21)); }
	inline float get_m_flCompositorRenderStartMs_21() const { return ___m_flCompositorRenderStartMs_21; }
	inline float* get_address_of_m_flCompositorRenderStartMs_21() { return &___m_flCompositorRenderStartMs_21; }
	inline void set_m_flCompositorRenderStartMs_21(float value)
	{
		___m_flCompositorRenderStartMs_21 = value;
	}

	inline static int32_t get_offset_of_m_HmdPose_22() { return static_cast<int32_t>(offsetof(Compositor_FrameTiming_t2839634313, ___m_HmdPose_22)); }
	inline TrackedDevicePose_t_t1668551120  get_m_HmdPose_22() const { return ___m_HmdPose_22; }
	inline TrackedDevicePose_t_t1668551120 * get_address_of_m_HmdPose_22() { return &___m_HmdPose_22; }
	inline void set_m_HmdPose_22(TrackedDevicePose_t_t1668551120  value)
	{
		___m_HmdPose_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
