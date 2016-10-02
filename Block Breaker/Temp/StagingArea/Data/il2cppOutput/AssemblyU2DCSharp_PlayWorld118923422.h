#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Blocks
struct Blocks_t1992669606;
// LevelManager
struct LevelManager_t2278695849;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayWorld
struct  PlayWorld_t118923422  : public MonoBehaviour_t667441552
{
public:
	// Blocks PlayWorld::blocks
	Blocks_t1992669606 * ___blocks_2;
	// LevelManager PlayWorld::levelManager
	LevelManager_t2278695849 * ___levelManager_3;
	// System.Int32 PlayWorld::numDestoryed
	int32_t ___numDestoryed_4;
	// System.Int32 PlayWorld::numBricks
	int32_t ___numBricks_5;

public:
	inline static int32_t get_offset_of_blocks_2() { return static_cast<int32_t>(offsetof(PlayWorld_t118923422, ___blocks_2)); }
	inline Blocks_t1992669606 * get_blocks_2() const { return ___blocks_2; }
	inline Blocks_t1992669606 ** get_address_of_blocks_2() { return &___blocks_2; }
	inline void set_blocks_2(Blocks_t1992669606 * value)
	{
		___blocks_2 = value;
		Il2CppCodeGenWriteBarrier(&___blocks_2, value);
	}

	inline static int32_t get_offset_of_levelManager_3() { return static_cast<int32_t>(offsetof(PlayWorld_t118923422, ___levelManager_3)); }
	inline LevelManager_t2278695849 * get_levelManager_3() const { return ___levelManager_3; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_3() { return &___levelManager_3; }
	inline void set_levelManager_3(LevelManager_t2278695849 * value)
	{
		___levelManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_3, value);
	}

	inline static int32_t get_offset_of_numDestoryed_4() { return static_cast<int32_t>(offsetof(PlayWorld_t118923422, ___numDestoryed_4)); }
	inline int32_t get_numDestoryed_4() const { return ___numDestoryed_4; }
	inline int32_t* get_address_of_numDestoryed_4() { return &___numDestoryed_4; }
	inline void set_numDestoryed_4(int32_t value)
	{
		___numDestoryed_4 = value;
	}

	inline static int32_t get_offset_of_numBricks_5() { return static_cast<int32_t>(offsetof(PlayWorld_t118923422, ___numBricks_5)); }
	inline int32_t get_numBricks_5() const { return ___numBricks_5; }
	inline int32_t* get_address_of_numBricks_5() { return &___numBricks_5; }
	inline void set_numBricks_5(int32_t value)
	{
		___numBricks_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
