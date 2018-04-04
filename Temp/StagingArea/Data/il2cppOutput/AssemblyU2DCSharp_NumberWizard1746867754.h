#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Text
struct Text_t1901882714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NumberWizard
struct  NumberWizard_t1746867754  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 NumberWizard::max
	int32_t ___max_2;
	// System.Int32 NumberWizard::min
	int32_t ___min_3;
	// System.Int32 NumberWizard::guess
	int32_t ___guess_4;
	// System.Int32 NumberWizard::maxGussesAllowed
	int32_t ___maxGussesAllowed_5;
	// UnityEngine.UI.Text NumberWizard::text
	Text_t1901882714 * ___text_6;

public:
	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(NumberWizard_t1746867754, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_min_3() { return static_cast<int32_t>(offsetof(NumberWizard_t1746867754, ___min_3)); }
	inline int32_t get_min_3() const { return ___min_3; }
	inline int32_t* get_address_of_min_3() { return &___min_3; }
	inline void set_min_3(int32_t value)
	{
		___min_3 = value;
	}

	inline static int32_t get_offset_of_guess_4() { return static_cast<int32_t>(offsetof(NumberWizard_t1746867754, ___guess_4)); }
	inline int32_t get_guess_4() const { return ___guess_4; }
	inline int32_t* get_address_of_guess_4() { return &___guess_4; }
	inline void set_guess_4(int32_t value)
	{
		___guess_4 = value;
	}

	inline static int32_t get_offset_of_maxGussesAllowed_5() { return static_cast<int32_t>(offsetof(NumberWizard_t1746867754, ___maxGussesAllowed_5)); }
	inline int32_t get_maxGussesAllowed_5() const { return ___maxGussesAllowed_5; }
	inline int32_t* get_address_of_maxGussesAllowed_5() { return &___maxGussesAllowed_5; }
	inline void set_maxGussesAllowed_5(int32_t value)
	{
		___maxGussesAllowed_5 = value;
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(NumberWizard_t1746867754, ___text_6)); }
	inline Text_t1901882714 * get_text_6() const { return ___text_6; }
	inline Text_t1901882714 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t1901882714 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
