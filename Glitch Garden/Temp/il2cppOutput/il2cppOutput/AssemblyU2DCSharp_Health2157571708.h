#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Health
struct  Health_t2157571708  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Health::healthPoint
	float ___healthPoint_2;

public:
	inline static int32_t get_offset_of_healthPoint_2() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___healthPoint_2)); }
	inline float get_healthPoint_2() const { return ___healthPoint_2; }
	inline float* get_address_of_healthPoint_2() { return &___healthPoint_2; }
	inline void set_healthPoint_2(float value)
	{
		___healthPoint_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
