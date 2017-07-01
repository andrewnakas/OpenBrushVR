#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VROverlayIn3830649193.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// SteamVR_Overlay
struct SteamVR_Overlay_t1916653097;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Overlay
struct  SteamVR_Overlay_t1916653097  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture SteamVR_Overlay::texture
	Texture_t2243626319 * ___texture_2;
	// System.Boolean SteamVR_Overlay::curved
	bool ___curved_3;
	// System.Boolean SteamVR_Overlay::antialias
	bool ___antialias_4;
	// System.Boolean SteamVR_Overlay::highquality
	bool ___highquality_5;
	// System.Single SteamVR_Overlay::scale
	float ___scale_6;
	// System.Single SteamVR_Overlay::distance
	float ___distance_7;
	// System.Single SteamVR_Overlay::alpha
	float ___alpha_8;
	// UnityEngine.Vector4 SteamVR_Overlay::uvOffset
	Vector4_t2243707581  ___uvOffset_9;
	// UnityEngine.Vector2 SteamVR_Overlay::mouseScale
	Vector2_t2243707579  ___mouseScale_10;
	// UnityEngine.Vector2 SteamVR_Overlay::curvedRange
	Vector2_t2243707579  ___curvedRange_11;
	// Valve.VR.VROverlayInputMethod SteamVR_Overlay::inputMethod
	int32_t ___inputMethod_12;
	// System.UInt64 SteamVR_Overlay::handle
	uint64_t ___handle_14;

public:
	inline static int32_t get_offset_of_texture_2() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___texture_2)); }
	inline Texture_t2243626319 * get_texture_2() const { return ___texture_2; }
	inline Texture_t2243626319 ** get_address_of_texture_2() { return &___texture_2; }
	inline void set_texture_2(Texture_t2243626319 * value)
	{
		___texture_2 = value;
		Il2CppCodeGenWriteBarrier(&___texture_2, value);
	}

	inline static int32_t get_offset_of_curved_3() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___curved_3)); }
	inline bool get_curved_3() const { return ___curved_3; }
	inline bool* get_address_of_curved_3() { return &___curved_3; }
	inline void set_curved_3(bool value)
	{
		___curved_3 = value;
	}

	inline static int32_t get_offset_of_antialias_4() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___antialias_4)); }
	inline bool get_antialias_4() const { return ___antialias_4; }
	inline bool* get_address_of_antialias_4() { return &___antialias_4; }
	inline void set_antialias_4(bool value)
	{
		___antialias_4 = value;
	}

	inline static int32_t get_offset_of_highquality_5() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___highquality_5)); }
	inline bool get_highquality_5() const { return ___highquality_5; }
	inline bool* get_address_of_highquality_5() { return &___highquality_5; }
	inline void set_highquality_5(bool value)
	{
		___highquality_5 = value;
	}

	inline static int32_t get_offset_of_scale_6() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___scale_6)); }
	inline float get_scale_6() const { return ___scale_6; }
	inline float* get_address_of_scale_6() { return &___scale_6; }
	inline void set_scale_6(float value)
	{
		___scale_6 = value;
	}

	inline static int32_t get_offset_of_distance_7() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___distance_7)); }
	inline float get_distance_7() const { return ___distance_7; }
	inline float* get_address_of_distance_7() { return &___distance_7; }
	inline void set_distance_7(float value)
	{
		___distance_7 = value;
	}

	inline static int32_t get_offset_of_alpha_8() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___alpha_8)); }
	inline float get_alpha_8() const { return ___alpha_8; }
	inline float* get_address_of_alpha_8() { return &___alpha_8; }
	inline void set_alpha_8(float value)
	{
		___alpha_8 = value;
	}

	inline static int32_t get_offset_of_uvOffset_9() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___uvOffset_9)); }
	inline Vector4_t2243707581  get_uvOffset_9() const { return ___uvOffset_9; }
	inline Vector4_t2243707581 * get_address_of_uvOffset_9() { return &___uvOffset_9; }
	inline void set_uvOffset_9(Vector4_t2243707581  value)
	{
		___uvOffset_9 = value;
	}

	inline static int32_t get_offset_of_mouseScale_10() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___mouseScale_10)); }
	inline Vector2_t2243707579  get_mouseScale_10() const { return ___mouseScale_10; }
	inline Vector2_t2243707579 * get_address_of_mouseScale_10() { return &___mouseScale_10; }
	inline void set_mouseScale_10(Vector2_t2243707579  value)
	{
		___mouseScale_10 = value;
	}

	inline static int32_t get_offset_of_curvedRange_11() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___curvedRange_11)); }
	inline Vector2_t2243707579  get_curvedRange_11() const { return ___curvedRange_11; }
	inline Vector2_t2243707579 * get_address_of_curvedRange_11() { return &___curvedRange_11; }
	inline void set_curvedRange_11(Vector2_t2243707579  value)
	{
		___curvedRange_11 = value;
	}

	inline static int32_t get_offset_of_inputMethod_12() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___inputMethod_12)); }
	inline int32_t get_inputMethod_12() const { return ___inputMethod_12; }
	inline int32_t* get_address_of_inputMethod_12() { return &___inputMethod_12; }
	inline void set_inputMethod_12(int32_t value)
	{
		___inputMethod_12 = value;
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097, ___handle_14)); }
	inline uint64_t get_handle_14() const { return ___handle_14; }
	inline uint64_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(uint64_t value)
	{
		___handle_14 = value;
	}
};

struct SteamVR_Overlay_t1916653097_StaticFields
{
public:
	// SteamVR_Overlay SteamVR_Overlay::<instance>k__BackingField
	SteamVR_Overlay_t1916653097 * ___U3CinstanceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SteamVR_Overlay_t1916653097_StaticFields, ___U3CinstanceU3Ek__BackingField_13)); }
	inline SteamVR_Overlay_t1916653097 * get_U3CinstanceU3Ek__BackingField_13() const { return ___U3CinstanceU3Ek__BackingField_13; }
	inline SteamVR_Overlay_t1916653097 ** get_address_of_U3CinstanceU3Ek__BackingField_13() { return &___U3CinstanceU3Ek__BackingField_13; }
	inline void set_U3CinstanceU3Ek__BackingField_13(SteamVR_Overlay_t1916653097 * value)
	{
		___U3CinstanceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinstanceU3Ek__BackingField_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
