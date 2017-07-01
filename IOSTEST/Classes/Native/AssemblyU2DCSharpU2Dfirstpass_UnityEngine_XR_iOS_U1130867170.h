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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_U4198559457.h"

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t496507918;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t2646854145;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3886071158;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t142665927;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t872580813;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3296518558;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1622117597;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t3705772742;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3189755211;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t1130867170  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	IntPtr_t ___m_NativeARSession_5;

public:
	inline static int32_t get_offset_of_m_NativeARSession_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170, ___m_NativeARSession_5)); }
	inline IntPtr_t get_m_NativeARSession_5() const { return ___m_NativeARSession_5; }
	inline IntPtr_t* get_address_of_m_NativeARSession_5() { return &___m_NativeARSession_5; }
	inline void set_m_NativeARSession_5(IntPtr_t value)
	{
		___m_NativeARSession_5 = value;
	}
};

struct UnityARSessionNativeInterface_t1130867170_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t496507918 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t2646854145 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3886071158 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t142665927 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t872580813 * ___ARSessionFailedEvent_4;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4198559457  ___s_Camera_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t1130867170 * ___s_UnityARSessionNativeInterface_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3296518558 * ___U3CU3Ef__mgU24cache0_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	internal_ARAnchorAdded_t1622117597 * ___U3CU3Ef__mgU24cache1_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	internal_ARAnchorUpdated_t3705772742 * ___U3CU3Ef__mgU24cache2_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	internal_ARAnchorRemoved_t3189755211 * ___U3CU3Ef__mgU24cache3_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	ARSessionFailed_t872580813 * ___U3CU3Ef__mgU24cache4_12;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t496507918 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t496507918 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t496507918 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___ARFrameUpdatedEvent_0, value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t2646854145 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t2646854145 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t2646854145 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorAddedEvent_1, value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3886071158 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3886071158 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3886071158 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorUpdatedEvent_2, value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t142665927 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t142665927 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t142665927 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorRemovedEvent_3, value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionFailedEvent_4)); }
	inline ARSessionFailed_t872580813 * get_ARSessionFailedEvent_4() const { return ___ARSessionFailedEvent_4; }
	inline ARSessionFailed_t872580813 ** get_address_of_ARSessionFailedEvent_4() { return &___ARSessionFailedEvent_4; }
	inline void set_ARSessionFailedEvent_4(ARSessionFailed_t872580813 * value)
	{
		___ARSessionFailedEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionFailedEvent_4, value);
	}

	inline static int32_t get_offset_of_s_Camera_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___s_Camera_6)); }
	inline UnityARCamera_t4198559457  get_s_Camera_6() const { return ___s_Camera_6; }
	inline UnityARCamera_t4198559457 * get_address_of_s_Camera_6() { return &___s_Camera_6; }
	inline void set_s_Camera_6(UnityARCamera_t4198559457  value)
	{
		___s_Camera_6 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___s_UnityARSessionNativeInterface_7)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_s_UnityARSessionNativeInterface_7() const { return ___s_UnityARSessionNativeInterface_7; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_s_UnityARSessionNativeInterface_7() { return &___s_UnityARSessionNativeInterface_7; }
	inline void set_s_UnityARSessionNativeInterface_7(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___s_UnityARSessionNativeInterface_7 = value;
		Il2CppCodeGenWriteBarrier(&___s_UnityARSessionNativeInterface_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline internal_ARFrameUpdate_t3296518558 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline internal_ARFrameUpdate_t3296518558 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(internal_ARFrameUpdate_t3296518558 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline internal_ARAnchorAdded_t1622117597 * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline internal_ARAnchorAdded_t1622117597 ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(internal_ARAnchorAdded_t1622117597 * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache2_10)); }
	inline internal_ARAnchorUpdated_t3705772742 * get_U3CU3Ef__mgU24cache2_10() const { return ___U3CU3Ef__mgU24cache2_10; }
	inline internal_ARAnchorUpdated_t3705772742 ** get_address_of_U3CU3Ef__mgU24cache2_10() { return &___U3CU3Ef__mgU24cache2_10; }
	inline void set_U3CU3Ef__mgU24cache2_10(internal_ARAnchorUpdated_t3705772742 * value)
	{
		___U3CU3Ef__mgU24cache2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache3_11)); }
	inline internal_ARAnchorRemoved_t3189755211 * get_U3CU3Ef__mgU24cache3_11() const { return ___U3CU3Ef__mgU24cache3_11; }
	inline internal_ARAnchorRemoved_t3189755211 ** get_address_of_U3CU3Ef__mgU24cache3_11() { return &___U3CU3Ef__mgU24cache3_11; }
	inline void set_U3CU3Ef__mgU24cache3_11(internal_ARAnchorRemoved_t3189755211 * value)
	{
		___U3CU3Ef__mgU24cache3_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache4_12)); }
	inline ARSessionFailed_t872580813 * get_U3CU3Ef__mgU24cache4_12() const { return ___U3CU3Ef__mgU24cache4_12; }
	inline ARSessionFailed_t872580813 ** get_address_of_U3CU3Ef__mgU24cache4_12() { return &___U3CU3Ef__mgU24cache4_12; }
	inline void set_U3CU3Ef__mgU24cache4_12(ARSessionFailed_t872580813 * value)
	{
		___U3CU3Ef__mgU24cache4_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
