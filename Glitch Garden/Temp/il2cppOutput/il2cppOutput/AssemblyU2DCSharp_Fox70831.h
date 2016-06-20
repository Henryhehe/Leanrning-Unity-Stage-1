#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// Attacker
struct Attacker_t603385109;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fox
struct  Fox_t70831  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator Fox::FoxAnimator
	Animator_t792326996 * ___FoxAnimator_2;
	// Attacker Fox::attacker
	Attacker_t603385109 * ___attacker_3;

public:
	inline static int32_t get_offset_of_FoxAnimator_2() { return static_cast<int32_t>(offsetof(Fox_t70831, ___FoxAnimator_2)); }
	inline Animator_t792326996 * get_FoxAnimator_2() const { return ___FoxAnimator_2; }
	inline Animator_t792326996 ** get_address_of_FoxAnimator_2() { return &___FoxAnimator_2; }
	inline void set_FoxAnimator_2(Animator_t792326996 * value)
	{
		___FoxAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&___FoxAnimator_2, value);
	}

	inline static int32_t get_offset_of_attacker_3() { return static_cast<int32_t>(offsetof(Fox_t70831, ___attacker_3)); }
	inline Attacker_t603385109 * get_attacker_3() const { return ___attacker_3; }
	inline Attacker_t603385109 ** get_address_of_attacker_3() { return &___attacker_3; }
	inline void set_attacker_3(Attacker_t603385109 * value)
	{
		___attacker_3 = value;
		Il2CppCodeGenWriteBarrier(&___attacker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
