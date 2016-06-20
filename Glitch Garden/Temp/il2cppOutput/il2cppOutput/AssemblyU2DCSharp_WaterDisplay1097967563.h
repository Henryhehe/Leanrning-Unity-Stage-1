#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaterDisplay
struct  WaterDisplay_t1097967563  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text WaterDisplay::starText
	Text_t3286458198 * ___starText_2;
	// System.Int32 WaterDisplay::waterCount
	int32_t ___waterCount_3;

public:
	inline static int32_t get_offset_of_starText_2() { return static_cast<int32_t>(offsetof(WaterDisplay_t1097967563, ___starText_2)); }
	inline Text_t3286458198 * get_starText_2() const { return ___starText_2; }
	inline Text_t3286458198 ** get_address_of_starText_2() { return &___starText_2; }
	inline void set_starText_2(Text_t3286458198 * value)
	{
		___starText_2 = value;
		Il2CppCodeGenWriteBarrier(&___starText_2, value);
	}

	inline static int32_t get_offset_of_waterCount_3() { return static_cast<int32_t>(offsetof(WaterDisplay_t1097967563, ___waterCount_3)); }
	inline int32_t get_waterCount_3() const { return ___waterCount_3; }
	inline int32_t* get_address_of_waterCount_3() { return &___waterCount_3; }
	inline void set_waterCount_3(int32_t value)
	{
		___waterCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
