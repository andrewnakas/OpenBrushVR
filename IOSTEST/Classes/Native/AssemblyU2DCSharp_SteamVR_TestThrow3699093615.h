#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// SteamVR_TrackedObject
struct SteamVR_TrackedObject_t2338458854;
// UnityEngine.FixedJoint
struct FixedJoint_t3848069458;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TestThrow
struct  SteamVR_TestThrow_t3699093615  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SteamVR_TestThrow::prefab
	GameObject_t1756533147 * ___prefab_2;
	// UnityEngine.Rigidbody SteamVR_TestThrow::attachPoint
	Rigidbody_t4233889191 * ___attachPoint_3;
	// SteamVR_TrackedObject SteamVR_TestThrow::trackedObj
	SteamVR_TrackedObject_t2338458854 * ___trackedObj_4;
	// UnityEngine.FixedJoint SteamVR_TestThrow::joint
	FixedJoint_t3848069458 * ___joint_5;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(SteamVR_TestThrow_t3699093615, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_attachPoint_3() { return static_cast<int32_t>(offsetof(SteamVR_TestThrow_t3699093615, ___attachPoint_3)); }
	inline Rigidbody_t4233889191 * get_attachPoint_3() const { return ___attachPoint_3; }
	inline Rigidbody_t4233889191 ** get_address_of_attachPoint_3() { return &___attachPoint_3; }
	inline void set_attachPoint_3(Rigidbody_t4233889191 * value)
	{
		___attachPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___attachPoint_3, value);
	}

	inline static int32_t get_offset_of_trackedObj_4() { return static_cast<int32_t>(offsetof(SteamVR_TestThrow_t3699093615, ___trackedObj_4)); }
	inline SteamVR_TrackedObject_t2338458854 * get_trackedObj_4() const { return ___trackedObj_4; }
	inline SteamVR_TrackedObject_t2338458854 ** get_address_of_trackedObj_4() { return &___trackedObj_4; }
	inline void set_trackedObj_4(SteamVR_TrackedObject_t2338458854 * value)
	{
		___trackedObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackedObj_4, value);
	}

	inline static int32_t get_offset_of_joint_5() { return static_cast<int32_t>(offsetof(SteamVR_TestThrow_t3699093615, ___joint_5)); }
	inline FixedJoint_t3848069458 * get_joint_5() const { return ___joint_5; }
	inline FixedJoint_t3848069458 ** get_address_of_joint_5() { return &___joint_5; }
	inline void set_joint_5(FixedJoint_t3848069458 * value)
	{
		___joint_5 = value;
		Il2CppCodeGenWriteBarrier(&___joint_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
