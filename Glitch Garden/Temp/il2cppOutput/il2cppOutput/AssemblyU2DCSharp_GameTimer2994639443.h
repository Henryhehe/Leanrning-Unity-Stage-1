#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t1468074762;
// LevelManager
struct LevelManager_t2278695849;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTimer
struct  GameTimer_t2994639443  : public MonoBehaviour_t3012272455
{
public:
	// System.Single GameTimer::StartTime
	float ___StartTime_2;
	// System.Single GameTimer::remainningTime
	float ___remainningTime_3;
	// UnityEngine.UI.Slider GameTimer::gameTimer
	Slider_t1468074762 * ___gameTimer_4;
	// System.Single GameTimer::frameTime
	float ___frameTime_5;
	// System.Boolean GameTimer::WinToken
	bool ___WinToken_6;
	// LevelManager GameTimer::levelmanager
	LevelManager_t2278695849 * ___levelmanager_7;
	// UnityEngine.AudioSource GameTimer::audioSource
	AudioSource_t3628549054 * ___audioSource_8;
	// UnityEngine.GameObject GameTimer::winLabel
	GameObject_t4012695102 * ___winLabel_9;

public:
	inline static int32_t get_offset_of_StartTime_2() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___StartTime_2)); }
	inline float get_StartTime_2() const { return ___StartTime_2; }
	inline float* get_address_of_StartTime_2() { return &___StartTime_2; }
	inline void set_StartTime_2(float value)
	{
		___StartTime_2 = value;
	}

	inline static int32_t get_offset_of_remainningTime_3() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___remainningTime_3)); }
	inline float get_remainningTime_3() const { return ___remainningTime_3; }
	inline float* get_address_of_remainningTime_3() { return &___remainningTime_3; }
	inline void set_remainningTime_3(float value)
	{
		___remainningTime_3 = value;
	}

	inline static int32_t get_offset_of_gameTimer_4() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___gameTimer_4)); }
	inline Slider_t1468074762 * get_gameTimer_4() const { return ___gameTimer_4; }
	inline Slider_t1468074762 ** get_address_of_gameTimer_4() { return &___gameTimer_4; }
	inline void set_gameTimer_4(Slider_t1468074762 * value)
	{
		___gameTimer_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameTimer_4, value);
	}

	inline static int32_t get_offset_of_frameTime_5() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___frameTime_5)); }
	inline float get_frameTime_5() const { return ___frameTime_5; }
	inline float* get_address_of_frameTime_5() { return &___frameTime_5; }
	inline void set_frameTime_5(float value)
	{
		___frameTime_5 = value;
	}

	inline static int32_t get_offset_of_WinToken_6() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___WinToken_6)); }
	inline bool get_WinToken_6() const { return ___WinToken_6; }
	inline bool* get_address_of_WinToken_6() { return &___WinToken_6; }
	inline void set_WinToken_6(bool value)
	{
		___WinToken_6 = value;
	}

	inline static int32_t get_offset_of_levelmanager_7() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___levelmanager_7)); }
	inline LevelManager_t2278695849 * get_levelmanager_7() const { return ___levelmanager_7; }
	inline LevelManager_t2278695849 ** get_address_of_levelmanager_7() { return &___levelmanager_7; }
	inline void set_levelmanager_7(LevelManager_t2278695849 * value)
	{
		___levelmanager_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelmanager_7, value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___audioSource_8)); }
	inline AudioSource_t3628549054 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t3628549054 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_winLabel_9() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___winLabel_9)); }
	inline GameObject_t4012695102 * get_winLabel_9() const { return ___winLabel_9; }
	inline GameObject_t4012695102 ** get_address_of_winLabel_9() { return &___winLabel_9; }
	inline void set_winLabel_9(GameObject_t4012695102 * value)
	{
		___winLabel_9 = value;
		Il2CppCodeGenWriteBarrier(&___winLabel_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
