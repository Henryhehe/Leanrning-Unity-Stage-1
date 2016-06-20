#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Attacker
struct Attacker_t603385109;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D1890038195.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void Attacker::.ctor()
extern "C"  void Attacker__ctor_m17479974 (Attacker_t603385109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attacker::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Attacker_OnTriggerEnter2D_m1303159570 (Attacker_t603385109 * __this, Collider2D_t1890038195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attacker::Start()
extern "C"  void Attacker_Start_m3259585062 (Attacker_t603385109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attacker::Update()
extern "C"  void Attacker_Update_m2268741287 (Attacker_t603385109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attacker::SetSpeed(System.Single)
extern "C"  void Attacker_SetSpeed_m312249832 (Attacker_t603385109 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attacker::StrikeCurrentTarget(System.Single)
extern "C"  void Attacker_StrikeCurrentTarget_m485487183 (Attacker_t603385109 * __this, float ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attacker::Attack(UnityEngine.GameObject)
extern "C"  void Attacker_Attack_m2914979678 (Attacker_t603385109 * __this, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
