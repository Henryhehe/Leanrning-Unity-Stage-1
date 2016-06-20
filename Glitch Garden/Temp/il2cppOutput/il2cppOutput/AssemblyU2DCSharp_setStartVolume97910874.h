#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicPlayer
struct MusicPlayer_t2820681030;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// setStartVolume
struct  setStartVolume_t97910874  : public MonoBehaviour_t3012272455
{
public:
	// MusicPlayer setStartVolume::musicPlayer
	MusicPlayer_t2820681030 * ___musicPlayer_2;

public:
	inline static int32_t get_offset_of_musicPlayer_2() { return static_cast<int32_t>(offsetof(setStartVolume_t97910874, ___musicPlayer_2)); }
	inline MusicPlayer_t2820681030 * get_musicPlayer_2() const { return ___musicPlayer_2; }
	inline MusicPlayer_t2820681030 ** get_address_of_musicPlayer_2() { return &___musicPlayer_2; }
	inline void set_musicPlayer_2(MusicPlayer_t2820681030 * value)
	{
		___musicPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicPlayer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
