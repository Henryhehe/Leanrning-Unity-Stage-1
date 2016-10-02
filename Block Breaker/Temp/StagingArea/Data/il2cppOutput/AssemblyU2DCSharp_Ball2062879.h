#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Paddle
struct Paddle_t2382992266;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t667441552
{
public:
	// Paddle Ball::paddle
	Paddle_t2382992266 * ___paddle_2;
	// System.Boolean Ball::hasStarted
	bool ___hasStarted_3;
	// UnityEngine.Vector3 Ball::paddleToBallVector
	Vector3_t4282066566  ___paddleToBallVector_4;

public:
	inline static int32_t get_offset_of_paddle_2() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___paddle_2)); }
	inline Paddle_t2382992266 * get_paddle_2() const { return ___paddle_2; }
	inline Paddle_t2382992266 ** get_address_of_paddle_2() { return &___paddle_2; }
	inline void set_paddle_2(Paddle_t2382992266 * value)
	{
		___paddle_2 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_2, value);
	}

	inline static int32_t get_offset_of_hasStarted_3() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___hasStarted_3)); }
	inline bool get_hasStarted_3() const { return ___hasStarted_3; }
	inline bool* get_address_of_hasStarted_3() { return &___hasStarted_3; }
	inline void set_hasStarted_3(bool value)
	{
		___hasStarted_3 = value;
	}

	inline static int32_t get_offset_of_paddleToBallVector_4() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___paddleToBallVector_4)); }
	inline Vector3_t4282066566  get_paddleToBallVector_4() const { return ___paddleToBallVector_4; }
	inline Vector3_t4282066566 * get_address_of_paddleToBallVector_4() { return &___paddleToBallVector_4; }
	inline void set_paddleToBallVector_4(Vector3_t4282066566  value)
	{
		___paddleToBallVector_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
