#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WaterDisplay
struct WaterDisplay_t1097967563;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Defenders
struct  Defenders_t609639120  : public MonoBehaviour_t3012272455
{
public:
	// WaterDisplay Defenders::waterDisplay
	WaterDisplay_t1097967563 * ___waterDisplay_2;
	// System.Int32 Defenders::cost
	int32_t ___cost_3;

public:
	inline static int32_t get_offset_of_waterDisplay_2() { return static_cast<int32_t>(offsetof(Defenders_t609639120, ___waterDisplay_2)); }
	inline WaterDisplay_t1097967563 * get_waterDisplay_2() const { return ___waterDisplay_2; }
	inline WaterDisplay_t1097967563 ** get_address_of_waterDisplay_2() { return &___waterDisplay_2; }
	inline void set_waterDisplay_2(WaterDisplay_t1097967563 * value)
	{
		___waterDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___waterDisplay_2, value);
	}

	inline static int32_t get_offset_of_cost_3() { return static_cast<int32_t>(offsetof(Defenders_t609639120, ___cost_3)); }
	inline int32_t get_cost_3() const { return ___cost_3; }
	inline int32_t* get_address_of_cost_3() { return &___cost_3; }
	inline void set_cost_3(int32_t value)
	{
		___cost_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
