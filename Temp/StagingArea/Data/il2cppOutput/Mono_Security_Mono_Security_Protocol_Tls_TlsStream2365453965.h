﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream1273022909.h"

// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t2365453965  : public Stream_t1273022909
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_1;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_2;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t94973147 * ___buffer_3;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t4116647657* ___temp_4;

public:
	inline static int32_t get_offset_of_canRead_1() { return static_cast<int32_t>(offsetof(TlsStream_t2365453965, ___canRead_1)); }
	inline bool get_canRead_1() const { return ___canRead_1; }
	inline bool* get_address_of_canRead_1() { return &___canRead_1; }
	inline void set_canRead_1(bool value)
	{
		___canRead_1 = value;
	}

	inline static int32_t get_offset_of_canWrite_2() { return static_cast<int32_t>(offsetof(TlsStream_t2365453965, ___canWrite_2)); }
	inline bool get_canWrite_2() const { return ___canWrite_2; }
	inline bool* get_address_of_canWrite_2() { return &___canWrite_2; }
	inline void set_canWrite_2(bool value)
	{
		___canWrite_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(TlsStream_t2365453965, ___buffer_3)); }
	inline MemoryStream_t94973147 * get_buffer_3() const { return ___buffer_3; }
	inline MemoryStream_t94973147 ** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(MemoryStream_t94973147 * value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_3, value);
	}

	inline static int32_t get_offset_of_temp_4() { return static_cast<int32_t>(offsetof(TlsStream_t2365453965, ___temp_4)); }
	inline ByteU5BU5D_t4116647657* get_temp_4() const { return ___temp_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_4() { return &___temp_4; }
	inline void set_temp_4(ByteU5BU5D_t4116647657* value)
	{
		___temp_4 = value;
		Il2CppCodeGenWriteBarrier(&___temp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
