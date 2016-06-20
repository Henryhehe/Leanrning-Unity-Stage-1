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

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t999919624;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "UnityEngine_UnityEngine_GUISkin2614611333.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_ScaleMode1648723514.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction999919624.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m3820512796 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601 (Il2CppObject * __this /* static, unused */, GUISkin_t2614611333 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t2614611333 * GUI_get_skin_m4001454842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745 (Il2CppObject * __this /* static, unused */, GUISkin_t2614611333 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void GUI_DrawTexture_m418809280 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position, Texture_t1769722184 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C"  void GUI_DrawTexture_m2033906102 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position, Texture_t1769722184 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C"  void GUI_DrawTexture_m1717108487 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position, Texture_t1769722184 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C"  void GUI_DrawTexture_m1839804844 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position, Texture_t1769722184 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m2260338804 (Il2CppObject * __this /* static, unused */, WindowFunction_t999919624 * ___func, int32_t ___id, GUISkin_t2614611333 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C"  Color_t1588175760  GUI_get_color_m1489208189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C"  void GUI_set_color_m2304110692 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_get_color_m1047250244 (Il2CppObject * __this /* static, unused */, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_set_color_m774536016 (Il2CppObject * __this /* static, unused */, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_depth(System.Int32)
extern "C"  void GUI_set_depth_m4181267379 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C"  Material_t1886596500 * GUI_get_blendMaterial_m3392847228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C"  Material_t1886596500 * GUI_get_blitMaterial_m1516673786 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
