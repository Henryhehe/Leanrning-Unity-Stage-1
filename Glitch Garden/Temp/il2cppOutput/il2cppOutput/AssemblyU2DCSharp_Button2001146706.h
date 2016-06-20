#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Button[]
struct ButtonU5BU5D_t3659229991;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Button
struct  Button_t2001146706  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color Button::defaultColor
	Color_t1588175760  ___defaultColor_2;
	// Button[] Button::buttonArray
	ButtonU5BU5D_t3659229991* ___buttonArray_3;
	// UnityEngine.GameObject Button::selectedDefenderPrefab
	GameObject_t4012695102 * ___selectedDefenderPrefab_4;

public:
	inline static int32_t get_offset_of_defaultColor_2() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___defaultColor_2)); }
	inline Color_t1588175760  get_defaultColor_2() const { return ___defaultColor_2; }
	inline Color_t1588175760 * get_address_of_defaultColor_2() { return &___defaultColor_2; }
	inline void set_defaultColor_2(Color_t1588175760  value)
	{
		___defaultColor_2 = value;
	}

	inline static int32_t get_offset_of_buttonArray_3() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___buttonArray_3)); }
	inline ButtonU5BU5D_t3659229991* get_buttonArray_3() const { return ___buttonArray_3; }
	inline ButtonU5BU5D_t3659229991** get_address_of_buttonArray_3() { return &___buttonArray_3; }
	inline void set_buttonArray_3(ButtonU5BU5D_t3659229991* value)
	{
		___buttonArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonArray_3, value);
	}

	inline static int32_t get_offset_of_selectedDefenderPrefab_4() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___selectedDefenderPrefab_4)); }
	inline GameObject_t4012695102 * get_selectedDefenderPrefab_4() const { return ___selectedDefenderPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_selectedDefenderPrefab_4() { return &___selectedDefenderPrefab_4; }
	inline void set_selectedDefenderPrefab_4(GameObject_t4012695102 * value)
	{
		___selectedDefenderPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___selectedDefenderPrefab_4, value);
	}
};

struct Button_t2001146706_StaticFields
{
public:
	// UnityEngine.GameObject Button::DefenderSelected
	GameObject_t4012695102 * ___DefenderSelected_5;

public:
	inline static int32_t get_offset_of_DefenderSelected_5() { return static_cast<int32_t>(offsetof(Button_t2001146706_StaticFields, ___DefenderSelected_5)); }
	inline GameObject_t4012695102 * get_DefenderSelected_5() const { return ___DefenderSelected_5; }
	inline GameObject_t4012695102 ** get_address_of_DefenderSelected_5() { return &___DefenderSelected_5; }
	inline void set_DefenderSelected_5(GameObject_t4012695102 * value)
	{
		___DefenderSelected_5 = value;
		Il2CppCodeGenWriteBarrier(&___DefenderSelected_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
