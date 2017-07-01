#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_CursorLockMode3372615096.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// SteamVR_Overlay
struct SteamVR_Overlay_t1916653097;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Menu
struct  SteamVR_Menu_t1084241286  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture SteamVR_Menu::cursor
	Texture_t2243626319 * ___cursor_2;
	// UnityEngine.Texture SteamVR_Menu::background
	Texture_t2243626319 * ___background_3;
	// UnityEngine.Texture SteamVR_Menu::logo
	Texture_t2243626319 * ___logo_4;
	// System.Single SteamVR_Menu::logoHeight
	float ___logoHeight_5;
	// System.Single SteamVR_Menu::menuOffset
	float ___menuOffset_6;
	// UnityEngine.Vector2 SteamVR_Menu::scaleLimits
	Vector2_t2243707579  ___scaleLimits_7;
	// System.Single SteamVR_Menu::scaleRate
	float ___scaleRate_8;
	// SteamVR_Overlay SteamVR_Menu::overlay
	SteamVR_Overlay_t1916653097 * ___overlay_9;
	// UnityEngine.Camera SteamVR_Menu::overlayCam
	Camera_t189460977 * ___overlayCam_10;
	// UnityEngine.Vector4 SteamVR_Menu::uvOffset
	Vector4_t2243707581  ___uvOffset_11;
	// System.Single SteamVR_Menu::distance
	float ___distance_12;
	// System.Single SteamVR_Menu::<scale>k__BackingField
	float ___U3CscaleU3Ek__BackingField_13;
	// System.String SteamVR_Menu::scaleLimitX
	String_t* ___scaleLimitX_14;
	// System.String SteamVR_Menu::scaleLimitY
	String_t* ___scaleLimitY_15;
	// System.String SteamVR_Menu::scaleRateText
	String_t* ___scaleRateText_16;
	// UnityEngine.CursorLockMode SteamVR_Menu::savedCursorLockState
	int32_t ___savedCursorLockState_17;
	// System.Boolean SteamVR_Menu::savedCursorVisible
	bool ___savedCursorVisible_18;

public:
	inline static int32_t get_offset_of_cursor_2() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___cursor_2)); }
	inline Texture_t2243626319 * get_cursor_2() const { return ___cursor_2; }
	inline Texture_t2243626319 ** get_address_of_cursor_2() { return &___cursor_2; }
	inline void set_cursor_2(Texture_t2243626319 * value)
	{
		___cursor_2 = value;
		Il2CppCodeGenWriteBarrier(&___cursor_2, value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___background_3)); }
	inline Texture_t2243626319 * get_background_3() const { return ___background_3; }
	inline Texture_t2243626319 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(Texture_t2243626319 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier(&___background_3, value);
	}

	inline static int32_t get_offset_of_logo_4() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___logo_4)); }
	inline Texture_t2243626319 * get_logo_4() const { return ___logo_4; }
	inline Texture_t2243626319 ** get_address_of_logo_4() { return &___logo_4; }
	inline void set_logo_4(Texture_t2243626319 * value)
	{
		___logo_4 = value;
		Il2CppCodeGenWriteBarrier(&___logo_4, value);
	}

	inline static int32_t get_offset_of_logoHeight_5() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___logoHeight_5)); }
	inline float get_logoHeight_5() const { return ___logoHeight_5; }
	inline float* get_address_of_logoHeight_5() { return &___logoHeight_5; }
	inline void set_logoHeight_5(float value)
	{
		___logoHeight_5 = value;
	}

	inline static int32_t get_offset_of_menuOffset_6() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___menuOffset_6)); }
	inline float get_menuOffset_6() const { return ___menuOffset_6; }
	inline float* get_address_of_menuOffset_6() { return &___menuOffset_6; }
	inline void set_menuOffset_6(float value)
	{
		___menuOffset_6 = value;
	}

	inline static int32_t get_offset_of_scaleLimits_7() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___scaleLimits_7)); }
	inline Vector2_t2243707579  get_scaleLimits_7() const { return ___scaleLimits_7; }
	inline Vector2_t2243707579 * get_address_of_scaleLimits_7() { return &___scaleLimits_7; }
	inline void set_scaleLimits_7(Vector2_t2243707579  value)
	{
		___scaleLimits_7 = value;
	}

	inline static int32_t get_offset_of_scaleRate_8() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___scaleRate_8)); }
	inline float get_scaleRate_8() const { return ___scaleRate_8; }
	inline float* get_address_of_scaleRate_8() { return &___scaleRate_8; }
	inline void set_scaleRate_8(float value)
	{
		___scaleRate_8 = value;
	}

	inline static int32_t get_offset_of_overlay_9() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___overlay_9)); }
	inline SteamVR_Overlay_t1916653097 * get_overlay_9() const { return ___overlay_9; }
	inline SteamVR_Overlay_t1916653097 ** get_address_of_overlay_9() { return &___overlay_9; }
	inline void set_overlay_9(SteamVR_Overlay_t1916653097 * value)
	{
		___overlay_9 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_9, value);
	}

	inline static int32_t get_offset_of_overlayCam_10() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___overlayCam_10)); }
	inline Camera_t189460977 * get_overlayCam_10() const { return ___overlayCam_10; }
	inline Camera_t189460977 ** get_address_of_overlayCam_10() { return &___overlayCam_10; }
	inline void set_overlayCam_10(Camera_t189460977 * value)
	{
		___overlayCam_10 = value;
		Il2CppCodeGenWriteBarrier(&___overlayCam_10, value);
	}

	inline static int32_t get_offset_of_uvOffset_11() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___uvOffset_11)); }
	inline Vector4_t2243707581  get_uvOffset_11() const { return ___uvOffset_11; }
	inline Vector4_t2243707581 * get_address_of_uvOffset_11() { return &___uvOffset_11; }
	inline void set_uvOffset_11(Vector4_t2243707581  value)
	{
		___uvOffset_11 = value;
	}

	inline static int32_t get_offset_of_distance_12() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___distance_12)); }
	inline float get_distance_12() const { return ___distance_12; }
	inline float* get_address_of_distance_12() { return &___distance_12; }
	inline void set_distance_12(float value)
	{
		___distance_12 = value;
	}

	inline static int32_t get_offset_of_U3CscaleU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___U3CscaleU3Ek__BackingField_13)); }
	inline float get_U3CscaleU3Ek__BackingField_13() const { return ___U3CscaleU3Ek__BackingField_13; }
	inline float* get_address_of_U3CscaleU3Ek__BackingField_13() { return &___U3CscaleU3Ek__BackingField_13; }
	inline void set_U3CscaleU3Ek__BackingField_13(float value)
	{
		___U3CscaleU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_scaleLimitX_14() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___scaleLimitX_14)); }
	inline String_t* get_scaleLimitX_14() const { return ___scaleLimitX_14; }
	inline String_t** get_address_of_scaleLimitX_14() { return &___scaleLimitX_14; }
	inline void set_scaleLimitX_14(String_t* value)
	{
		___scaleLimitX_14 = value;
		Il2CppCodeGenWriteBarrier(&___scaleLimitX_14, value);
	}

	inline static int32_t get_offset_of_scaleLimitY_15() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___scaleLimitY_15)); }
	inline String_t* get_scaleLimitY_15() const { return ___scaleLimitY_15; }
	inline String_t** get_address_of_scaleLimitY_15() { return &___scaleLimitY_15; }
	inline void set_scaleLimitY_15(String_t* value)
	{
		___scaleLimitY_15 = value;
		Il2CppCodeGenWriteBarrier(&___scaleLimitY_15, value);
	}

	inline static int32_t get_offset_of_scaleRateText_16() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___scaleRateText_16)); }
	inline String_t* get_scaleRateText_16() const { return ___scaleRateText_16; }
	inline String_t** get_address_of_scaleRateText_16() { return &___scaleRateText_16; }
	inline void set_scaleRateText_16(String_t* value)
	{
		___scaleRateText_16 = value;
		Il2CppCodeGenWriteBarrier(&___scaleRateText_16, value);
	}

	inline static int32_t get_offset_of_savedCursorLockState_17() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___savedCursorLockState_17)); }
	inline int32_t get_savedCursorLockState_17() const { return ___savedCursorLockState_17; }
	inline int32_t* get_address_of_savedCursorLockState_17() { return &___savedCursorLockState_17; }
	inline void set_savedCursorLockState_17(int32_t value)
	{
		___savedCursorLockState_17 = value;
	}

	inline static int32_t get_offset_of_savedCursorVisible_18() { return static_cast<int32_t>(offsetof(SteamVR_Menu_t1084241286, ___savedCursorVisible_18)); }
	inline bool get_savedCursorVisible_18() const { return ___savedCursorVisible_18; }
	inline bool* get_address_of_savedCursorVisible_18() { return &___savedCursorVisible_18; }
	inline void set_savedCursorVisible_18(bool value)
	{
		___savedCursorVisible_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
