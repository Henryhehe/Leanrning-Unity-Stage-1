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
// MusicPlayer
struct MusicPlayer_t2820681030;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OptionsController
struct  OptionsController_t676452538  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Slider OptionsController::volumeSlider
	Slider_t1468074762 * ___volumeSlider_2;
	// UnityEngine.UI.Slider OptionsController::DiffcultySlider
	Slider_t1468074762 * ___DiffcultySlider_3;
	// LevelManager OptionsController::levelManager
	LevelManager_t2278695849 * ___levelManager_4;
	// MusicPlayer OptionsController::musicPlayer
	MusicPlayer_t2820681030 * ___musicPlayer_5;

public:
	inline static int32_t get_offset_of_volumeSlider_2() { return static_cast<int32_t>(offsetof(OptionsController_t676452538, ___volumeSlider_2)); }
	inline Slider_t1468074762 * get_volumeSlider_2() const { return ___volumeSlider_2; }
	inline Slider_t1468074762 ** get_address_of_volumeSlider_2() { return &___volumeSlider_2; }
	inline void set_volumeSlider_2(Slider_t1468074762 * value)
	{
		___volumeSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___volumeSlider_2, value);
	}

	inline static int32_t get_offset_of_DiffcultySlider_3() { return static_cast<int32_t>(offsetof(OptionsController_t676452538, ___DiffcultySlider_3)); }
	inline Slider_t1468074762 * get_DiffcultySlider_3() const { return ___DiffcultySlider_3; }
	inline Slider_t1468074762 ** get_address_of_DiffcultySlider_3() { return &___DiffcultySlider_3; }
	inline void set_DiffcultySlider_3(Slider_t1468074762 * value)
	{
		___DiffcultySlider_3 = value;
		Il2CppCodeGenWriteBarrier(&___DiffcultySlider_3, value);
	}

	inline static int32_t get_offset_of_levelManager_4() { return static_cast<int32_t>(offsetof(OptionsController_t676452538, ___levelManager_4)); }
	inline LevelManager_t2278695849 * get_levelManager_4() const { return ___levelManager_4; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_4() { return &___levelManager_4; }
	inline void set_levelManager_4(LevelManager_t2278695849 * value)
	{
		___levelManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_4, value);
	}

	inline static int32_t get_offset_of_musicPlayer_5() { return static_cast<int32_t>(offsetof(OptionsController_t676452538, ___musicPlayer_5)); }
	inline MusicPlayer_t2820681030 * get_musicPlayer_5() const { return ___musicPlayer_5; }
	inline MusicPlayer_t2820681030 ** get_address_of_musicPlayer_5() { return &___musicPlayer_5; }
	inline void set_musicPlayer_5(MusicPlayer_t2820681030 * value)
	{
		___musicPlayer_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicPlayer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
