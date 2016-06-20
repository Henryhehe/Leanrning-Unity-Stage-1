#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Button
struct Button_t2001146706;
// Spawner
struct Spawner_t3948062024;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Button2001146706.h"
#include "AssemblyU2DCSharp_Spawner3948062024.h"

#pragma once
// Button[]
struct ButtonU5BU5D_t3659229991  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Button_t2001146706 * m_Items[1];

public:
	inline Button_t2001146706 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Button_t2001146706 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Button_t2001146706 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spawner[]
struct SpawnerU5BU5D_t3835360409  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Spawner_t3948062024 * m_Items[1];

public:
	inline Spawner_t3948062024 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Spawner_t3948062024 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Spawner_t3948062024 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
