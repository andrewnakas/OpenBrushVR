#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// ColorPicker
struct ColorPicker_t3035206225;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t2763752173;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticlePainter
struct  ParticlePainter_t1073897267  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ParticleSystem ParticlePainter::painterParticlePrefab
	ParticleSystem_t3394631041 * ___painterParticlePrefab_2;
	// System.Single ParticlePainter::minDistanceThreshold
	float ___minDistanceThreshold_3;
	// System.Single ParticlePainter::maxDistanceThreshold
	float ___maxDistanceThreshold_4;
	// System.Boolean ParticlePainter::frameUpdated
	bool ___frameUpdated_5;
	// System.Single ParticlePainter::particleSize
	float ___particleSize_6;
	// System.Single ParticlePainter::penDistance
	float ___penDistance_7;
	// ColorPicker ParticlePainter::colorPicker
	ColorPicker_t3035206225 * ___colorPicker_8;
	// UnityEngine.ParticleSystem ParticlePainter::currentPS
	ParticleSystem_t3394631041 * ___currentPS_9;
	// UnityEngine.ParticleSystem/Particle[] ParticlePainter::particles
	ParticleU5BU5D_t574222242* ___particles_10;
	// UnityEngine.Vector3 ParticlePainter::previousPosition
	Vector3_t2243707580  ___previousPosition_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ParticlePainter::currentPaintVertices
	List_1_t1612828712 * ___currentPaintVertices_12;
	// UnityEngine.Color ParticlePainter::currentColor
	Color_t2020392075  ___currentColor_13;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> ParticlePainter::paintSystems
	List_1_t2763752173 * ___paintSystems_14;
	// System.Int32 ParticlePainter::paintMode
	int32_t ___paintMode_15;

public:
	inline static int32_t get_offset_of_painterParticlePrefab_2() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___painterParticlePrefab_2)); }
	inline ParticleSystem_t3394631041 * get_painterParticlePrefab_2() const { return ___painterParticlePrefab_2; }
	inline ParticleSystem_t3394631041 ** get_address_of_painterParticlePrefab_2() { return &___painterParticlePrefab_2; }
	inline void set_painterParticlePrefab_2(ParticleSystem_t3394631041 * value)
	{
		___painterParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___painterParticlePrefab_2, value);
	}

	inline static int32_t get_offset_of_minDistanceThreshold_3() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___minDistanceThreshold_3)); }
	inline float get_minDistanceThreshold_3() const { return ___minDistanceThreshold_3; }
	inline float* get_address_of_minDistanceThreshold_3() { return &___minDistanceThreshold_3; }
	inline void set_minDistanceThreshold_3(float value)
	{
		___minDistanceThreshold_3 = value;
	}

	inline static int32_t get_offset_of_maxDistanceThreshold_4() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___maxDistanceThreshold_4)); }
	inline float get_maxDistanceThreshold_4() const { return ___maxDistanceThreshold_4; }
	inline float* get_address_of_maxDistanceThreshold_4() { return &___maxDistanceThreshold_4; }
	inline void set_maxDistanceThreshold_4(float value)
	{
		___maxDistanceThreshold_4 = value;
	}

	inline static int32_t get_offset_of_frameUpdated_5() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___frameUpdated_5)); }
	inline bool get_frameUpdated_5() const { return ___frameUpdated_5; }
	inline bool* get_address_of_frameUpdated_5() { return &___frameUpdated_5; }
	inline void set_frameUpdated_5(bool value)
	{
		___frameUpdated_5 = value;
	}

	inline static int32_t get_offset_of_particleSize_6() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___particleSize_6)); }
	inline float get_particleSize_6() const { return ___particleSize_6; }
	inline float* get_address_of_particleSize_6() { return &___particleSize_6; }
	inline void set_particleSize_6(float value)
	{
		___particleSize_6 = value;
	}

	inline static int32_t get_offset_of_penDistance_7() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___penDistance_7)); }
	inline float get_penDistance_7() const { return ___penDistance_7; }
	inline float* get_address_of_penDistance_7() { return &___penDistance_7; }
	inline void set_penDistance_7(float value)
	{
		___penDistance_7 = value;
	}

	inline static int32_t get_offset_of_colorPicker_8() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___colorPicker_8)); }
	inline ColorPicker_t3035206225 * get_colorPicker_8() const { return ___colorPicker_8; }
	inline ColorPicker_t3035206225 ** get_address_of_colorPicker_8() { return &___colorPicker_8; }
	inline void set_colorPicker_8(ColorPicker_t3035206225 * value)
	{
		___colorPicker_8 = value;
		Il2CppCodeGenWriteBarrier(&___colorPicker_8, value);
	}

	inline static int32_t get_offset_of_currentPS_9() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___currentPS_9)); }
	inline ParticleSystem_t3394631041 * get_currentPS_9() const { return ___currentPS_9; }
	inline ParticleSystem_t3394631041 ** get_address_of_currentPS_9() { return &___currentPS_9; }
	inline void set_currentPS_9(ParticleSystem_t3394631041 * value)
	{
		___currentPS_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentPS_9, value);
	}

	inline static int32_t get_offset_of_particles_10() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___particles_10)); }
	inline ParticleU5BU5D_t574222242* get_particles_10() const { return ___particles_10; }
	inline ParticleU5BU5D_t574222242** get_address_of_particles_10() { return &___particles_10; }
	inline void set_particles_10(ParticleU5BU5D_t574222242* value)
	{
		___particles_10 = value;
		Il2CppCodeGenWriteBarrier(&___particles_10, value);
	}

	inline static int32_t get_offset_of_previousPosition_11() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___previousPosition_11)); }
	inline Vector3_t2243707580  get_previousPosition_11() const { return ___previousPosition_11; }
	inline Vector3_t2243707580 * get_address_of_previousPosition_11() { return &___previousPosition_11; }
	inline void set_previousPosition_11(Vector3_t2243707580  value)
	{
		___previousPosition_11 = value;
	}

	inline static int32_t get_offset_of_currentPaintVertices_12() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___currentPaintVertices_12)); }
	inline List_1_t1612828712 * get_currentPaintVertices_12() const { return ___currentPaintVertices_12; }
	inline List_1_t1612828712 ** get_address_of_currentPaintVertices_12() { return &___currentPaintVertices_12; }
	inline void set_currentPaintVertices_12(List_1_t1612828712 * value)
	{
		___currentPaintVertices_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentPaintVertices_12, value);
	}

	inline static int32_t get_offset_of_currentColor_13() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___currentColor_13)); }
	inline Color_t2020392075  get_currentColor_13() const { return ___currentColor_13; }
	inline Color_t2020392075 * get_address_of_currentColor_13() { return &___currentColor_13; }
	inline void set_currentColor_13(Color_t2020392075  value)
	{
		___currentColor_13 = value;
	}

	inline static int32_t get_offset_of_paintSystems_14() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___paintSystems_14)); }
	inline List_1_t2763752173 * get_paintSystems_14() const { return ___paintSystems_14; }
	inline List_1_t2763752173 ** get_address_of_paintSystems_14() { return &___paintSystems_14; }
	inline void set_paintSystems_14(List_1_t2763752173 * value)
	{
		___paintSystems_14 = value;
		Il2CppCodeGenWriteBarrier(&___paintSystems_14, value);
	}

	inline static int32_t get_offset_of_paintMode_15() { return static_cast<int32_t>(offsetof(ParticlePainter_t1073897267, ___paintMode_15)); }
	inline int32_t get_paintMode_15() const { return ___paintMode_15; }
	inline int32_t* get_address_of_paintMode_15() { return &___paintMode_15; }
	inline void set_paintMode_15(int32_t value)
	{
		___paintMode_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
