#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// WaterDisplay
struct WaterDisplay_t1097967563;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefendersSpawner
struct  DefendersSpawner_t3942088824  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera DefendersSpawner::myCamera
	Camera_t3533968274 * ___myCamera_2;
	// UnityEngine.GameObject DefendersSpawner::DefenderParent
	GameObject_t4012695102 * ___DefenderParent_3;
	// WaterDisplay DefendersSpawner::waterDisplay
	WaterDisplay_t1097967563 * ___waterDisplay_4;

public:
	inline static int32_t get_offset_of_myCamera_2() { return static_cast<int32_t>(offsetof(DefendersSpawner_t3942088824, ___myCamera_2)); }
	inline Camera_t3533968274 * get_myCamera_2() const { return ___myCamera_2; }
	inline Camera_t3533968274 ** get_address_of_myCamera_2() { return &___myCamera_2; }
	inline void set_myCamera_2(Camera_t3533968274 * value)
	{
		___myCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___myCamera_2, value);
	}

	inline static int32_t get_offset_of_DefenderParent_3() { return static_cast<int32_t>(offsetof(DefendersSpawner_t3942088824, ___DefenderParent_3)); }
	inline GameObject_t4012695102 * get_DefenderParent_3() const { return ___DefenderParent_3; }
	inline GameObject_t4012695102 ** get_address_of_DefenderParent_3() { return &___DefenderParent_3; }
	inline void set_DefenderParent_3(GameObject_t4012695102 * value)
	{
		___DefenderParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___DefenderParent_3, value);
	}

	inline static int32_t get_offset_of_waterDisplay_4() { return static_cast<int32_t>(offsetof(DefendersSpawner_t3942088824, ___waterDisplay_4)); }
	inline WaterDisplay_t1097967563 * get_waterDisplay_4() const { return ___waterDisplay_4; }
	inline WaterDisplay_t1097967563 ** get_address_of_waterDisplay_4() { return &___waterDisplay_4; }
	inline void set_waterDisplay_4(WaterDisplay_t1097967563 * value)
	{
		___waterDisplay_4 = value;
		Il2CppCodeGenWriteBarrier(&___waterDisplay_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
