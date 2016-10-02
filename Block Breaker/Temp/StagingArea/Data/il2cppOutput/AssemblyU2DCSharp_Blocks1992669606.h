#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayWorld
struct PlayWorld_t118923422;
// LevelManager
struct LevelManager_t2278695849;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blocks
struct  Blocks_t1992669606  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Blocks::timesHit
	int32_t ___timesHit_2;
	// PlayWorld Blocks::playWorld
	PlayWorld_t118923422 * ___playWorld_3;
	// LevelManager Blocks::levelManager
	LevelManager_t2278695849 * ___levelManager_4;
	// UnityEngine.AudioClip Blocks::crack
	AudioClip_t794140988 * ___crack_5;
	// UnityEngine.Sprite[] Blocks::hitSprites
	SpriteU5BU5D_t2761310900* ___hitSprites_6;
	// System.Boolean Blocks::isBreakable
	bool ___isBreakable_8;
	// UnityEngine.GameObject Blocks::smoke
	GameObject_t3674682005 * ___smoke_9;

public:
	inline static int32_t get_offset_of_timesHit_2() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___timesHit_2)); }
	inline int32_t get_timesHit_2() const { return ___timesHit_2; }
	inline int32_t* get_address_of_timesHit_2() { return &___timesHit_2; }
	inline void set_timesHit_2(int32_t value)
	{
		___timesHit_2 = value;
	}

	inline static int32_t get_offset_of_playWorld_3() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___playWorld_3)); }
	inline PlayWorld_t118923422 * get_playWorld_3() const { return ___playWorld_3; }
	inline PlayWorld_t118923422 ** get_address_of_playWorld_3() { return &___playWorld_3; }
	inline void set_playWorld_3(PlayWorld_t118923422 * value)
	{
		___playWorld_3 = value;
		Il2CppCodeGenWriteBarrier(&___playWorld_3, value);
	}

	inline static int32_t get_offset_of_levelManager_4() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___levelManager_4)); }
	inline LevelManager_t2278695849 * get_levelManager_4() const { return ___levelManager_4; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_4() { return &___levelManager_4; }
	inline void set_levelManager_4(LevelManager_t2278695849 * value)
	{
		___levelManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_4, value);
	}

	inline static int32_t get_offset_of_crack_5() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___crack_5)); }
	inline AudioClip_t794140988 * get_crack_5() const { return ___crack_5; }
	inline AudioClip_t794140988 ** get_address_of_crack_5() { return &___crack_5; }
	inline void set_crack_5(AudioClip_t794140988 * value)
	{
		___crack_5 = value;
		Il2CppCodeGenWriteBarrier(&___crack_5, value);
	}

	inline static int32_t get_offset_of_hitSprites_6() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___hitSprites_6)); }
	inline SpriteU5BU5D_t2761310900* get_hitSprites_6() const { return ___hitSprites_6; }
	inline SpriteU5BU5D_t2761310900** get_address_of_hitSprites_6() { return &___hitSprites_6; }
	inline void set_hitSprites_6(SpriteU5BU5D_t2761310900* value)
	{
		___hitSprites_6 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprites_6, value);
	}

	inline static int32_t get_offset_of_isBreakable_8() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___isBreakable_8)); }
	inline bool get_isBreakable_8() const { return ___isBreakable_8; }
	inline bool* get_address_of_isBreakable_8() { return &___isBreakable_8; }
	inline void set_isBreakable_8(bool value)
	{
		___isBreakable_8 = value;
	}

	inline static int32_t get_offset_of_smoke_9() { return static_cast<int32_t>(offsetof(Blocks_t1992669606, ___smoke_9)); }
	inline GameObject_t3674682005 * get_smoke_9() const { return ___smoke_9; }
	inline GameObject_t3674682005 ** get_address_of_smoke_9() { return &___smoke_9; }
	inline void set_smoke_9(GameObject_t3674682005 * value)
	{
		___smoke_9 = value;
		Il2CppCodeGenWriteBarrier(&___smoke_9, value);
	}
};

struct Blocks_t1992669606_StaticFields
{
public:
	// System.Int32 Blocks::breakableCount
	int32_t ___breakableCount_7;

public:
	inline static int32_t get_offset_of_breakableCount_7() { return static_cast<int32_t>(offsetof(Blocks_t1992669606_StaticFields, ___breakableCount_7)); }
	inline int32_t get_breakableCount_7() const { return ___breakableCount_7; }
	inline int32_t* get_address_of_breakableCount_7() { return &___breakableCount_7; }
	inline void set_breakableCount_7(int32_t value)
	{
		___breakableCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
