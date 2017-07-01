#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudParticleExample
struct  PointCloudParticleExample_t986756623  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ParticleSystem PointCloudParticleExample::pointCloudParticlePrefab
	ParticleSystem_t3394631041 * ___pointCloudParticlePrefab_2;
	// System.Int32 PointCloudParticleExample::maxPointsToShow
	int32_t ___maxPointsToShow_3;
	// System.Single PointCloudParticleExample::particleSize
	float ___particleSize_4;
	// UnityEngine.Vector3[] PointCloudParticleExample::m_PointCloudData
	Vector3U5BU5D_t1172311765* ___m_PointCloudData_5;
	// System.Boolean PointCloudParticleExample::frameUpdated
	bool ___frameUpdated_6;
	// UnityEngine.ParticleSystem PointCloudParticleExample::currentPS
	ParticleSystem_t3394631041 * ___currentPS_7;
	// UnityEngine.ParticleSystem/Particle[] PointCloudParticleExample::particles
	ParticleU5BU5D_t574222242* ___particles_8;

public:
	inline static int32_t get_offset_of_pointCloudParticlePrefab_2() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___pointCloudParticlePrefab_2)); }
	inline ParticleSystem_t3394631041 * get_pointCloudParticlePrefab_2() const { return ___pointCloudParticlePrefab_2; }
	inline ParticleSystem_t3394631041 ** get_address_of_pointCloudParticlePrefab_2() { return &___pointCloudParticlePrefab_2; }
	inline void set_pointCloudParticlePrefab_2(ParticleSystem_t3394631041 * value)
	{
		___pointCloudParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointCloudParticlePrefab_2, value);
	}

	inline static int32_t get_offset_of_maxPointsToShow_3() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___maxPointsToShow_3)); }
	inline int32_t get_maxPointsToShow_3() const { return ___maxPointsToShow_3; }
	inline int32_t* get_address_of_maxPointsToShow_3() { return &___maxPointsToShow_3; }
	inline void set_maxPointsToShow_3(int32_t value)
	{
		___maxPointsToShow_3 = value;
	}

	inline static int32_t get_offset_of_particleSize_4() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___particleSize_4)); }
	inline float get_particleSize_4() const { return ___particleSize_4; }
	inline float* get_address_of_particleSize_4() { return &___particleSize_4; }
	inline void set_particleSize_4(float value)
	{
		___particleSize_4 = value;
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t1172311765* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t1172311765* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PointCloudData_5, value);
	}

	inline static int32_t get_offset_of_frameUpdated_6() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___frameUpdated_6)); }
	inline bool get_frameUpdated_6() const { return ___frameUpdated_6; }
	inline bool* get_address_of_frameUpdated_6() { return &___frameUpdated_6; }
	inline void set_frameUpdated_6(bool value)
	{
		___frameUpdated_6 = value;
	}

	inline static int32_t get_offset_of_currentPS_7() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___currentPS_7)); }
	inline ParticleSystem_t3394631041 * get_currentPS_7() const { return ___currentPS_7; }
	inline ParticleSystem_t3394631041 ** get_address_of_currentPS_7() { return &___currentPS_7; }
	inline void set_currentPS_7(ParticleSystem_t3394631041 * value)
	{
		___currentPS_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentPS_7, value);
	}

	inline static int32_t get_offset_of_particles_8() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t986756623, ___particles_8)); }
	inline ParticleU5BU5D_t574222242* get_particles_8() const { return ___particles_8; }
	inline ParticleU5BU5D_t574222242** get_address_of_particles_8() { return &___particles_8; }
	inline void set_particles_8(ParticleU5BU5D_t574222242* value)
	{
		___particles_8 = value;
		Il2CppCodeGenWriteBarrier(&___particles_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
