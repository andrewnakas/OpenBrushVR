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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_ControllerManager
struct  SteamVR_ControllerManager_t3520649604  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SteamVR_ControllerManager::left
	GameObject_t1756533147 * ___left_2;
	// UnityEngine.GameObject SteamVR_ControllerManager::right
	GameObject_t1756533147 * ___right_3;
	// UnityEngine.GameObject[] SteamVR_ControllerManager::objects
	GameObjectU5BU5D_t3057952154* ___objects_4;
	// System.UInt32[] SteamVR_ControllerManager::indices
	UInt32U5BU5D_t59386216* ___indices_5;
	// System.Boolean[] SteamVR_ControllerManager::connected
	BooleanU5BU5D_t3568034315* ___connected_6;
	// System.UInt32 SteamVR_ControllerManager::leftIndex
	uint32_t ___leftIndex_7;
	// System.UInt32 SteamVR_ControllerManager::rightIndex
	uint32_t ___rightIndex_8;

public:
	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___left_2)); }
	inline GameObject_t1756533147 * get_left_2() const { return ___left_2; }
	inline GameObject_t1756533147 ** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(GameObject_t1756533147 * value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier(&___left_2, value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___right_3)); }
	inline GameObject_t1756533147 * get_right_3() const { return ___right_3; }
	inline GameObject_t1756533147 ** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(GameObject_t1756533147 * value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier(&___right_3, value);
	}

	inline static int32_t get_offset_of_objects_4() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___objects_4)); }
	inline GameObjectU5BU5D_t3057952154* get_objects_4() const { return ___objects_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objects_4() { return &___objects_4; }
	inline void set_objects_4(GameObjectU5BU5D_t3057952154* value)
	{
		___objects_4 = value;
		Il2CppCodeGenWriteBarrier(&___objects_4, value);
	}

	inline static int32_t get_offset_of_indices_5() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___indices_5)); }
	inline UInt32U5BU5D_t59386216* get_indices_5() const { return ___indices_5; }
	inline UInt32U5BU5D_t59386216** get_address_of_indices_5() { return &___indices_5; }
	inline void set_indices_5(UInt32U5BU5D_t59386216* value)
	{
		___indices_5 = value;
		Il2CppCodeGenWriteBarrier(&___indices_5, value);
	}

	inline static int32_t get_offset_of_connected_6() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___connected_6)); }
	inline BooleanU5BU5D_t3568034315* get_connected_6() const { return ___connected_6; }
	inline BooleanU5BU5D_t3568034315** get_address_of_connected_6() { return &___connected_6; }
	inline void set_connected_6(BooleanU5BU5D_t3568034315* value)
	{
		___connected_6 = value;
		Il2CppCodeGenWriteBarrier(&___connected_6, value);
	}

	inline static int32_t get_offset_of_leftIndex_7() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___leftIndex_7)); }
	inline uint32_t get_leftIndex_7() const { return ___leftIndex_7; }
	inline uint32_t* get_address_of_leftIndex_7() { return &___leftIndex_7; }
	inline void set_leftIndex_7(uint32_t value)
	{
		___leftIndex_7 = value;
	}

	inline static int32_t get_offset_of_rightIndex_8() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604, ___rightIndex_8)); }
	inline uint32_t get_rightIndex_8() const { return ___rightIndex_8; }
	inline uint32_t* get_address_of_rightIndex_8() { return &___rightIndex_8; }
	inline void set_rightIndex_8(uint32_t value)
	{
		___rightIndex_8 = value;
	}
};

struct SteamVR_ControllerManager_t3520649604_StaticFields
{
public:
	// System.String[] SteamVR_ControllerManager::labels
	StringU5BU5D_t1642385972* ___labels_9;

public:
	inline static int32_t get_offset_of_labels_9() { return static_cast<int32_t>(offsetof(SteamVR_ControllerManager_t3520649604_StaticFields, ___labels_9)); }
	inline StringU5BU5D_t1642385972* get_labels_9() const { return ___labels_9; }
	inline StringU5BU5D_t1642385972** get_address_of_labels_9() { return &___labels_9; }
	inline void set_labels_9(StringU5BU5D_t1642385972* value)
	{
		___labels_9 = value;
		Il2CppCodeGenWriteBarrier(&___labels_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
