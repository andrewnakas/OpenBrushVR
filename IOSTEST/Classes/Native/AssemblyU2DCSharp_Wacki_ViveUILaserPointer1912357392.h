#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wacki_IUILaserPointer3163974821.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_EVRButtonId66145412.h"

// SteamVR_TrackedObject
struct SteamVR_TrackedObject_t2338458854;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wacki.ViveUILaserPointer
struct  ViveUILaserPointer_t1912357392  : public IUILaserPointer_t3163974821
{
public:
	// Valve.VR.EVRButtonId Wacki.ViveUILaserPointer::button
	int32_t ___button_9;
	// SteamVR_TrackedObject Wacki.ViveUILaserPointer::_trackedObject
	SteamVR_TrackedObject_t2338458854 * ____trackedObject_10;
	// System.Boolean Wacki.ViveUILaserPointer::_connected
	bool ____connected_11;
	// System.Int32 Wacki.ViveUILaserPointer::_index
	int32_t ____index_12;

public:
	inline static int32_t get_offset_of_button_9() { return static_cast<int32_t>(offsetof(ViveUILaserPointer_t1912357392, ___button_9)); }
	inline int32_t get_button_9() const { return ___button_9; }
	inline int32_t* get_address_of_button_9() { return &___button_9; }
	inline void set_button_9(int32_t value)
	{
		___button_9 = value;
	}

	inline static int32_t get_offset_of__trackedObject_10() { return static_cast<int32_t>(offsetof(ViveUILaserPointer_t1912357392, ____trackedObject_10)); }
	inline SteamVR_TrackedObject_t2338458854 * get__trackedObject_10() const { return ____trackedObject_10; }
	inline SteamVR_TrackedObject_t2338458854 ** get_address_of__trackedObject_10() { return &____trackedObject_10; }
	inline void set__trackedObject_10(SteamVR_TrackedObject_t2338458854 * value)
	{
		____trackedObject_10 = value;
		Il2CppCodeGenWriteBarrier(&____trackedObject_10, value);
	}

	inline static int32_t get_offset_of__connected_11() { return static_cast<int32_t>(offsetof(ViveUILaserPointer_t1912357392, ____connected_11)); }
	inline bool get__connected_11() const { return ____connected_11; }
	inline bool* get_address_of__connected_11() { return &____connected_11; }
	inline void set__connected_11(bool value)
	{
		____connected_11 = value;
	}

	inline static int32_t get_offset_of__index_12() { return static_cast<int32_t>(offsetof(ViveUILaserPointer_t1912357392, ____index_12)); }
	inline int32_t get__index_12() const { return ____index_12; }
	inline int32_t* get_address_of__index_12() { return &____index_12; }
	inline void set__index_12(int32_t value)
	{
		____index_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
