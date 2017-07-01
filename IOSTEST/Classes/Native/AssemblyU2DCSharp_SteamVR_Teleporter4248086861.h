#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SteamVR_Teleporter_TeleportType3646909803.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Teleporter
struct  SteamVR_Teleporter_t4248086861  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean SteamVR_Teleporter::teleportOnClick
	bool ___teleportOnClick_2;
	// SteamVR_Teleporter/TeleportType SteamVR_Teleporter::teleportType
	int32_t ___teleportType_3;

public:
	inline static int32_t get_offset_of_teleportOnClick_2() { return static_cast<int32_t>(offsetof(SteamVR_Teleporter_t4248086861, ___teleportOnClick_2)); }
	inline bool get_teleportOnClick_2() const { return ___teleportOnClick_2; }
	inline bool* get_address_of_teleportOnClick_2() { return &___teleportOnClick_2; }
	inline void set_teleportOnClick_2(bool value)
	{
		___teleportOnClick_2 = value;
	}

	inline static int32_t get_offset_of_teleportType_3() { return static_cast<int32_t>(offsetof(SteamVR_Teleporter_t4248086861, ___teleportType_3)); }
	inline int32_t get_teleportType_3() const { return ___teleportType_3; }
	inline int32_t* get_address_of_teleportType_3() { return &___teleportType_3; }
	inline void set_teleportType_3(int32_t value)
	{
		___teleportType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
