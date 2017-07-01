#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TrackedCamera/VideoStream
struct  VideoStream_t676682966  : public Il2CppObject
{
public:
	// System.UInt32 SteamVR_TrackedCamera/VideoStream::<deviceIndex>k__BackingField
	uint32_t ___U3CdeviceIndexU3Ek__BackingField_0;
	// System.UInt64 SteamVR_TrackedCamera/VideoStream::_handle
	uint64_t ____handle_1;
	// System.Boolean SteamVR_TrackedCamera/VideoStream::_hasCamera
	bool ____hasCamera_2;
	// System.UInt64 SteamVR_TrackedCamera/VideoStream::refCount
	uint64_t ___refCount_3;

public:
	inline static int32_t get_offset_of_U3CdeviceIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VideoStream_t676682966, ___U3CdeviceIndexU3Ek__BackingField_0)); }
	inline uint32_t get_U3CdeviceIndexU3Ek__BackingField_0() const { return ___U3CdeviceIndexU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CdeviceIndexU3Ek__BackingField_0() { return &___U3CdeviceIndexU3Ek__BackingField_0; }
	inline void set_U3CdeviceIndexU3Ek__BackingField_0(uint32_t value)
	{
		___U3CdeviceIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(VideoStream_t676682966, ____handle_1)); }
	inline uint64_t get__handle_1() const { return ____handle_1; }
	inline uint64_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(uint64_t value)
	{
		____handle_1 = value;
	}

	inline static int32_t get_offset_of__hasCamera_2() { return static_cast<int32_t>(offsetof(VideoStream_t676682966, ____hasCamera_2)); }
	inline bool get__hasCamera_2() const { return ____hasCamera_2; }
	inline bool* get_address_of__hasCamera_2() { return &____hasCamera_2; }
	inline void set__hasCamera_2(bool value)
	{
		____hasCamera_2 = value;
	}

	inline static int32_t get_offset_of_refCount_3() { return static_cast<int32_t>(offsetof(VideoStream_t676682966, ___refCount_3)); }
	inline uint64_t get_refCount_3() const { return ___refCount_3; }
	inline uint64_t* get_address_of_refCount_3() { return &___refCount_3; }
	inline void set_refCount_3(uint64_t value)
	{
		___refCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
