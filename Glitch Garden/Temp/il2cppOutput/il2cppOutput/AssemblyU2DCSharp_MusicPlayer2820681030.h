#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicPlayer
struct  MusicPlayer_t2820681030  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 MusicPlayer::CurrentSceneIndex
	int32_t ___CurrentSceneIndex_2;
	// UnityEngine.AudioClip[] MusicPlayer::LevelMusicArray
	AudioClipU5BU5D_t2889538658* ___LevelMusicArray_3;
	// UnityEngine.AudioClip MusicPlayer::audioClip
	AudioClip_t3714538611 * ___audioClip_4;
	// UnityEngine.AudioSource MusicPlayer::audioSource
	AudioSource_t3628549054 * ___audioSource_5;
	// System.Int32 MusicPlayer::previousIndex
	int32_t ___previousIndex_6;

public:
	inline static int32_t get_offset_of_CurrentSceneIndex_2() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___CurrentSceneIndex_2)); }
	inline int32_t get_CurrentSceneIndex_2() const { return ___CurrentSceneIndex_2; }
	inline int32_t* get_address_of_CurrentSceneIndex_2() { return &___CurrentSceneIndex_2; }
	inline void set_CurrentSceneIndex_2(int32_t value)
	{
		___CurrentSceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_LevelMusicArray_3() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___LevelMusicArray_3)); }
	inline AudioClipU5BU5D_t2889538658* get_LevelMusicArray_3() const { return ___LevelMusicArray_3; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_LevelMusicArray_3() { return &___LevelMusicArray_3; }
	inline void set_LevelMusicArray_3(AudioClipU5BU5D_t2889538658* value)
	{
		___LevelMusicArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___LevelMusicArray_3, value);
	}

	inline static int32_t get_offset_of_audioClip_4() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___audioClip_4)); }
	inline AudioClip_t3714538611 * get_audioClip_4() const { return ___audioClip_4; }
	inline AudioClip_t3714538611 ** get_address_of_audioClip_4() { return &___audioClip_4; }
	inline void set_audioClip_4(AudioClip_t3714538611 * value)
	{
		___audioClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___audioSource_5)); }
	inline AudioSource_t3628549054 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t3628549054 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_previousIndex_6() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___previousIndex_6)); }
	inline int32_t get_previousIndex_6() const { return ___previousIndex_6; }
	inline int32_t* get_address_of_previousIndex_6() { return &___previousIndex_6; }
	inline void set_previousIndex_6(int32_t value)
	{
		___previousIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
