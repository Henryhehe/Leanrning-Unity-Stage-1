#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Animator
struct Animator_t792326996;
// Spawner
struct Spawner_t3948062024;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3731725548  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Shooter::weapon
	GameObject_t4012695102 * ___weapon_2;
	// UnityEngine.GameObject Shooter::gun
	GameObject_t4012695102 * ___gun_3;
	// UnityEngine.GameObject Shooter::weaponParent
	GameObject_t4012695102 * ___weaponParent_4;
	// UnityEngine.Animator Shooter::animator
	Animator_t792326996 * ___animator_5;
	// Spawner Shooter::myLaneSpawner
	Spawner_t3948062024 * ___myLaneSpawner_6;

public:
	inline static int32_t get_offset_of_weapon_2() { return static_cast<int32_t>(offsetof(Shooter_t3731725548, ___weapon_2)); }
	inline GameObject_t4012695102 * get_weapon_2() const { return ___weapon_2; }
	inline GameObject_t4012695102 ** get_address_of_weapon_2() { return &___weapon_2; }
	inline void set_weapon_2(GameObject_t4012695102 * value)
	{
		___weapon_2 = value;
		Il2CppCodeGenWriteBarrier(&___weapon_2, value);
	}

	inline static int32_t get_offset_of_gun_3() { return static_cast<int32_t>(offsetof(Shooter_t3731725548, ___gun_3)); }
	inline GameObject_t4012695102 * get_gun_3() const { return ___gun_3; }
	inline GameObject_t4012695102 ** get_address_of_gun_3() { return &___gun_3; }
	inline void set_gun_3(GameObject_t4012695102 * value)
	{
		___gun_3 = value;
		Il2CppCodeGenWriteBarrier(&___gun_3, value);
	}

	inline static int32_t get_offset_of_weaponParent_4() { return static_cast<int32_t>(offsetof(Shooter_t3731725548, ___weaponParent_4)); }
	inline GameObject_t4012695102 * get_weaponParent_4() const { return ___weaponParent_4; }
	inline GameObject_t4012695102 ** get_address_of_weaponParent_4() { return &___weaponParent_4; }
	inline void set_weaponParent_4(GameObject_t4012695102 * value)
	{
		___weaponParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___weaponParent_4, value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(Shooter_t3731725548, ___animator_5)); }
	inline Animator_t792326996 * get_animator_5() const { return ___animator_5; }
	inline Animator_t792326996 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t792326996 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___animator_5, value);
	}

	inline static int32_t get_offset_of_myLaneSpawner_6() { return static_cast<int32_t>(offsetof(Shooter_t3731725548, ___myLaneSpawner_6)); }
	inline Spawner_t3948062024 * get_myLaneSpawner_6() const { return ___myLaneSpawner_6; }
	inline Spawner_t3948062024 ** get_address_of_myLaneSpawner_6() { return &___myLaneSpawner_6; }
	inline void set_myLaneSpawner_6(Spawner_t3948062024 * value)
	{
		___myLaneSpawner_6 = value;
		Il2CppCodeGenWriteBarrier(&___myLaneSpawner_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
