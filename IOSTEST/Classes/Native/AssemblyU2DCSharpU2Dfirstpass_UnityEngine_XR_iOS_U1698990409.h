#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t3114965901;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t218994990;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t191549612;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t1698990409  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t3114965901* ___runOptions_2;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t218994990* ___alignmentOptions_3;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t191549612* ___planeOptions_4;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_7;

public:
	inline static int32_t get_offset_of_runOptions_2() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1698990409, ___runOptions_2)); }
	inline UnityARSessionRunOptionU5BU5D_t3114965901* get_runOptions_2() const { return ___runOptions_2; }
	inline UnityARSessionRunOptionU5BU5D_t3114965901** get_address_of_runOptions_2() { return &___runOptions_2; }
	inline void set_runOptions_2(UnityARSessionRunOptionU5BU5D_t3114965901* value)
	{
		___runOptions_2 = value;
		Il2CppCodeGenWriteBarrier(&___runOptions_2, value);
	}

	inline static int32_t get_offset_of_alignmentOptions_3() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1698990409, ___alignmentOptions_3)); }
	inline UnityARAlignmentU5BU5D_t218994990* get_alignmentOptions_3() const { return ___alignmentOptions_3; }
	inline UnityARAlignmentU5BU5D_t218994990** get_address_of_alignmentOptions_3() { return &___alignmentOptions_3; }
	inline void set_alignmentOptions_3(UnityARAlignmentU5BU5D_t218994990* value)
	{
		___alignmentOptions_3 = value;
		Il2CppCodeGenWriteBarrier(&___alignmentOptions_3, value);
	}

	inline static int32_t get_offset_of_planeOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1698990409, ___planeOptions_4)); }
	inline UnityARPlaneDetectionU5BU5D_t191549612* get_planeOptions_4() const { return ___planeOptions_4; }
	inline UnityARPlaneDetectionU5BU5D_t191549612** get_address_of_planeOptions_4() { return &___planeOptions_4; }
	inline void set_planeOptions_4(UnityARPlaneDetectionU5BU5D_t191549612* value)
	{
		___planeOptions_4 = value;
		Il2CppCodeGenWriteBarrier(&___planeOptions_4, value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1698990409, ___currentOptionIndex_5)); }
	inline int32_t get_currentOptionIndex_5() const { return ___currentOptionIndex_5; }
	inline int32_t* get_address_of_currentOptionIndex_5() { return &___currentOptionIndex_5; }
	inline void set_currentOptionIndex_5(int32_t value)
	{
		___currentOptionIndex_5 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1698990409, ___currentAlignmentIndex_6)); }
	inline int32_t get_currentAlignmentIndex_6() const { return ___currentAlignmentIndex_6; }
	inline int32_t* get_address_of_currentAlignmentIndex_6() { return &___currentAlignmentIndex_6; }
	inline void set_currentAlignmentIndex_6(int32_t value)
	{
		___currentAlignmentIndex_6 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1698990409, ___currentPlaneIndex_7)); }
	inline int32_t get_currentPlaneIndex_7() const { return ___currentPlaneIndex_7; }
	inline int32_t* get_address_of_currentPlaneIndex_7() { return &___currentPlaneIndex_7; }
	inline void set_currentPlaneIndex_7(int32_t value)
	{
		___currentPlaneIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
