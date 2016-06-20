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

// Spawner
struct Spawner_t3948062024;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1839725347 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Update()
extern "C"  void Spawner_Update_m2923773002 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spawner::isTimeToSpawn(UnityEngine.GameObject)
extern "C"  bool Spawner_isTimeToSpawn_m2786094198 (Spawner_t3948062024 * __this, GameObject_t4012695102 * ___attackerGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Spawn(UnityEngine.GameObject)
extern "C"  void Spawner_Spawn_m44477300 (Spawner_t3948062024 * __this, GameObject_t4012695102 * ___myGameOject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
