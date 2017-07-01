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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3196264220  : public MonoBehaviour_t1158329972
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1756533147 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t1125654279 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1172311765* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3196264220, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3196264220, ___PointCloudPrefab_3)); }
	inline GameObject_t1756533147 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t1756533147 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___PointCloudPrefab_3, value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3196264220, ___pointCloudObjects_4)); }
	inline List_1_t1125654279 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t1125654279 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t1125654279 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___pointCloudObjects_4, value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3196264220, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t1172311765* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t1172311765* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PointCloudData_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
