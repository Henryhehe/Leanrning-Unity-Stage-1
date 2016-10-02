#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ball
struct Ball_t2062879;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t2382992266  : public MonoBehaviour_t667441552
{
public:
	// System.Single Paddle::xPosition
	float ___xPosition_2;
	// System.Boolean Paddle::autoPlay
	bool ___autoPlay_3;
	// Ball Paddle::ball
	Ball_t2062879 * ___ball_4;
	// System.Single Paddle::minX
	float ___minX_5;
	// System.Single Paddle::maxX
	float ___maxX_6;

public:
	inline static int32_t get_offset_of_xPosition_2() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___xPosition_2)); }
	inline float get_xPosition_2() const { return ___xPosition_2; }
	inline float* get_address_of_xPosition_2() { return &___xPosition_2; }
	inline void set_xPosition_2(float value)
	{
		___xPosition_2 = value;
	}

	inline static int32_t get_offset_of_autoPlay_3() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___autoPlay_3)); }
	inline bool get_autoPlay_3() const { return ___autoPlay_3; }
	inline bool* get_address_of_autoPlay_3() { return &___autoPlay_3; }
	inline void set_autoPlay_3(bool value)
	{
		___autoPlay_3 = value;
	}

	inline static int32_t get_offset_of_ball_4() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___ball_4)); }
	inline Ball_t2062879 * get_ball_4() const { return ___ball_4; }
	inline Ball_t2062879 ** get_address_of_ball_4() { return &___ball_4; }
	inline void set_ball_4(Ball_t2062879 * value)
	{
		___ball_4 = value;
		Il2CppCodeGenWriteBarrier(&___ball_4, value);
	}

	inline static int32_t get_offset_of_minX_5() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___minX_5)); }
	inline float get_minX_5() const { return ___minX_5; }
	inline float* get_address_of_minX_5() { return &___minX_5; }
	inline void set_minX_5(float value)
	{
		___minX_5 = value;
	}

	inline static int32_t get_offset_of_maxX_6() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___maxX_6)); }
	inline float get_maxX_6() const { return ___maxX_6; }
	inline float* get_address_of_maxX_6() { return &___maxX_6; }
	inline void set_maxX_6(float value)
	{
		___maxX_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
