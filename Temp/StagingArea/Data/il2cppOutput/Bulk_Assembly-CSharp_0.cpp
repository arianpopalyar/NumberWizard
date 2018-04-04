#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3549286319.h"
#include "AssemblyU2DCSharp_U3CModuleU3E692745525.h"
#include "AssemblyU2DCSharp_LevelManager4033906515.h"
#include "mscorlib_System_Void1185182177.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "mscorlib_System_String1847450689.h"
#include "mscorlib_System_Object3080106164.h"
#include "AssemblyU2DCSharp_NumberWizard1746867754.h"
#include "mscorlib_System_Int322950945753.h"
#include "UnityEngine_UI_UnityEngine_UI_Text1901882714.h"

// LevelManager
struct LevelManager_t4033906515;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// NumberWizard
struct NumberWizard_t1746867754;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral219571795;
extern const uint32_t LevelManager_LoadLevel_m1243507911_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3430085994;
extern const uint32_t LevelManager_QuitRequest_m2917051473_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4073034045;
extern const uint32_t NumberWizard_NextGuess_m3329674964_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1339182015 (MonoBehaviour_t3962482529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m1780991845 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m1553385752 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m1672997886 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NumberWizard::StartGame()
extern "C"  void NumberWizard_StartGame_m167925039 (NumberWizard_t1746867754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NumberWizard::NextGuess()
extern "C"  void NumberWizard_NextGuess_m3329674964 (NumberWizard_t1746867754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m110872341 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1695469538 (LevelManager_t4033906515 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m1243507911 (LevelManager_t4033906515 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m1243507911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral219571795, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m1780991845(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		Application_LoadLevel_m1553385752(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m2917051473 (LevelManager_t4033906515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m2917051473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m1780991845(NULL /*static, unused*/, _stringLiteral3430085994, /*hidden argument*/NULL);
		Application_Quit_m1672997886(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::.ctor()
extern "C"  void NumberWizard__ctor_m3456609046 (NumberWizard_t1746867754 * __this, const MethodInfo* method)
{
	{
		__this->set_maxGussesAllowed_5(((int32_t)10));
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::Start()
extern "C"  void NumberWizard_Start_m655589600 (NumberWizard_t1746867754 * __this, const MethodInfo* method)
{
	{
		NumberWizard_StartGame_m167925039(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::StartGame()
extern "C"  void NumberWizard_StartGame_m167925039 (NumberWizard_t1746867754 * __this, const MethodInfo* method)
{
	{
		__this->set_max_2(((int32_t)1000));
		__this->set_min_3(1);
		NumberWizard_NextGuess_m3329674964(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::GuessLower()
extern "C"  void NumberWizard_GuessLower_m3695189041 (NumberWizard_t1746867754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_guess_4();
		__this->set_max_2(L_0);
		NumberWizard_NextGuess_m3329674964(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::GuessHigher()
extern "C"  void NumberWizard_GuessHigher_m3647343725 (NumberWizard_t1746867754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_guess_4();
		__this->set_min_3(L_0);
		NumberWizard_NextGuess_m3329674964(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::NextGuess()
extern "C"  void NumberWizard_NextGuess_m3329674964 (NumberWizard_t1746867754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NumberWizard_NextGuess_m3329674964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_min_3();
		int32_t L_1 = __this->get_max_2();
		int32_t L_2 = Random_Range_m110872341(NULL /*static, unused*/, L_0, ((int32_t)((int32_t)L_1+(int32_t)1)), /*hidden argument*/NULL);
		__this->set_guess_4(L_2);
		Text_t1901882714 * L_3 = __this->get_text_6();
		int32_t* L_4 = __this->get_address_of_guess_4();
		String_t* L_5 = Int32_ToString_m141394615(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		int32_t L_6 = __this->get_maxGussesAllowed_5();
		__this->set_maxGussesAllowed_5(((int32_t)((int32_t)L_6-(int32_t)1)));
		int32_t L_7 = __this->get_maxGussesAllowed_5();
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		Application_LoadLevel_m1553385752(NULL /*static, unused*/, _stringLiteral4073034045, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
