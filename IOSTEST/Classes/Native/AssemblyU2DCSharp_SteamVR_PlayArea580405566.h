#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SteamVR_PlayArea_Size1963019026.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_PlayArea
struct  SteamVR_PlayArea_t580405566  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SteamVR_PlayArea::borderThickness
	float ___borderThickness_2;
	// System.Single SteamVR_PlayArea::wireframeHeight
	float ___wireframeHeight_3;
	// System.Boolean SteamVR_PlayArea::drawWireframeWhenSelectedOnly
	bool ___drawWireframeWhenSelectedOnly_4;
	// System.Boolean SteamVR_PlayArea::drawInGame
	bool ___drawInGame_5;
	// SteamVR_PlayArea/Size SteamVR_PlayArea::size
	int32_t ___size_6;
	// UnityEngine.Color SteamVR_PlayArea::color
	Color_t2020392075  ___color_7;
	// UnityEngine.Vector3[] SteamVR_PlayArea::vertices
	Vector3U5BU5D_t1172311765* ___vertices_8;

public:
	inline static int32_t get_offset_of_borderThickness_2() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___borderThickness_2)); }
	inline float get_borderThickness_2() const { return ___borderThickness_2; }
	inline float* get_address_of_borderThickness_2() { return &___borderThickness_2; }
	inline void set_borderThickness_2(float value)
	{
		___borderThickness_2 = value;
	}

	inline static int32_t get_offset_of_wireframeHeight_3() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___wireframeHeight_3)); }
	inline float get_wireframeHeight_3() const { return ___wireframeHeight_3; }
	inline float* get_address_of_wireframeHeight_3() { return &___wireframeHeight_3; }
	inline void set_wireframeHeight_3(float value)
	{
		___wireframeHeight_3 = value;
	}

	inline static int32_t get_offset_of_drawWireframeWhenSelectedOnly_4() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___drawWireframeWhenSelectedOnly_4)); }
	inline bool get_drawWireframeWhenSelectedOnly_4() const { return ___drawWireframeWhenSelectedOnly_4; }
	inline bool* get_address_of_drawWireframeWhenSelectedOnly_4() { return &___drawWireframeWhenSelectedOnly_4; }
	inline void set_drawWireframeWhenSelectedOnly_4(bool value)
	{
		___drawWireframeWhenSelectedOnly_4 = value;
	}

	inline static int32_t get_offset_of_drawInGame_5() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___drawInGame_5)); }
	inline bool get_drawInGame_5() const { return ___drawInGame_5; }
	inline bool* get_address_of_drawInGame_5() { return &___drawInGame_5; }
	inline void set_drawInGame_5(bool value)
	{
		___drawInGame_5 = value;
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___color_7)); }
	inline Color_t2020392075  get_color_7() const { return ___color_7; }
	inline Color_t2020392075 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_t2020392075  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_vertices_8() { return static_cast<int32_t>(offsetof(SteamVR_PlayArea_t580405566, ___vertices_8)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_8() const { return ___vertices_8; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_8() { return &___vertices_8; }
	inline void set_vertices_8(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_8 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
