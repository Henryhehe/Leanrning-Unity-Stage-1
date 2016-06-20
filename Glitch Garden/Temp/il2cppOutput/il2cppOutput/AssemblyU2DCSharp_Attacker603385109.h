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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Attacker
struct  Attacker_t603385109  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Attacker::seenEverySeconds
	float ___seenEverySeconds_2;
	// System.Single Attacker::damage
	float ___damage_3;
	// System.Single Attacker::CurrentSpeed
	float ___CurrentSpeed_4;
	// UnityEngine.GameObject Attacker::currentTarget
	GameObject_t4012695102 * ___currentTarget_5;

public:
	inline static int32_t get_offset_of_seenEverySeconds_2() { return static_cast<int32_t>(offsetof(Attacker_t603385109, ___seenEverySeconds_2)); }
	inline float get_seenEverySeconds_2() const { return ___seenEverySeconds_2; }
	inline float* get_address_of_seenEverySeconds_2() { return &___seenEverySeconds_2; }
	inline void set_seenEverySeconds_2(float value)
	{
		___seenEverySeconds_2 = value;
	}

	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(Attacker_t603385109, ___damage_3)); }
	inline float get_damage_3() const { return ___damage_3; }
	inline float* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(float value)
	{
		___damage_3 = value;
	}

	inline static int32_t get_offset_of_CurrentSpeed_4() { return static_cast<int32_t>(offsetof(Attacker_t603385109, ___CurrentSpeed_4)); }
	inline float get_CurrentSpeed_4() const { return ___CurrentSpeed_4; }
	inline float* get_address_of_CurrentSpeed_4() { return &___CurrentSpeed_4; }
	inline void set_CurrentSpeed_4(float value)
	{
		___CurrentSpeed_4 = value;
	}

	inline static int32_t get_offset_of_currentTarget_5() { return static_cast<int32_t>(offsetof(Attacker_t603385109, ___currentTarget_5)); }
	inline GameObject_t4012695102 * get_currentTarget_5() const { return ___currentTarget_5; }
	inline GameObject_t4012695102 ** get_address_of_currentTarget_5() { return &___currentTarget_5; }
	inline void set_currentTarget_5(GameObject_t4012695102 * value)
	{
		___currentTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentTarget_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
