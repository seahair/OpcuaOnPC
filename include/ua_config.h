/* Copyright (C) 
 * 2018 - BeckOS
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */
/**
 * @file ua_config.h
 * @Synopsis  中间件文件，用于适配不同的ＯＳ
 * @author BeckOS
 * @version V1.1.0
 * @date 2018-05-04
 */


#ifndef UA_CONFIG_H__
#define UA_CONFIG_H__
#ifdef __cplusplus
extern "C"
{
#endif

	/**
	 * Function Export
	 * --------------- */
#ifdef _WIN32
# ifdef UA_DYNAMIC_LINKING
#  ifdef __GNUC__
#   define UA_EXPORT __attribute__ ((dllexport))
#  else
#   define UA_EXPORT __declspec(dllexport)
#  endif
# else
#  ifdef __GNUC__
#   define UA_EXPORT __attribute__ ((dllexport))
#  else
#   define UA_EXPORT __declspec(dllimport)
#  endif
# endif
#else
# if __GNUC__ || __clang__
#  define UA_EXPORT __attribute__ ((visibility ("default")))
# else
#  define UA_EXPORT
# endif
#endif

	/**
	 * Inline Functions
	 * ---------------- */
#ifdef _MSC_VER
# define UA_INLINE __inline
#else
# define UA_INLINE inline
#endif

	/**
	 * Function attributes
	 * ------------------- */
#ifdef __GNUC__
# define UA_FUNC_ATTR_MALLOC __attribute__((malloc))
# define UA_FUNC_ATTR_PURE __attribute__ ((pure))
# define UA_FUNC_ATTR_CONST __attribute__((const))
# define UA_FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define UA_FUNC_ATTR_MALLOC
# define UA_FUNC_ATTR_PURE
# define UA_FUNC_ATTR_CONST
# define UA_FUNC_ATTR_WARN_UNUSED_RESULT
#endif

	/**
	 * Non-aliasing pointers
	 * -------------------- */
#ifdef _MSC_VER
# define UA_RESTRICT __restrict
#elif defined(__GNUC__)
# define UA_RESTRICT __restrict__
#else
# define UA_RESTRICT restrict
#endif


	/**
	 * Function attributes
	 * ------------------- */
#ifdef __GNUC__
# define UA_FUNC_ATTR_MALLOC __attribute__((malloc))
# define UA_FUNC_ATTR_PURE __attribute__ ((pure))
# define UA_FUNC_ATTR_CONST __attribute__((const))
# define UA_FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define UA_FUNC_ATTR_MALLOC
# define UA_FUNC_ATTR_PURE
# define UA_FUNC_ATTR_CONST
# define UA_FUNC_ATTR_WARN_UNUSED_RESULT
#endif

	/**
	 * Integer Endianness
	 * ------------------ */
#if defined(_WIN32) || (defined(__BYTE_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && \
		(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)) /* little endian detected */
# define UA_BINARY_OVERLAYABLE_INTEGER true
#elif defined(__ANDROID__) /* Andoid */
# include <endian.h>
# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER true
# endif
#elif defined(__linux__) /* Linux */
# include <endian.h>
# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER true
# endif
# if __FLOAT_BYTE_ORDER == __LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_FLOAT true
# endif
#elif defined(__OpenBSD__) /* OpenBSD */
# include <sys/endian.h>
# if BYTE_ORDER == LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER true
# endif
#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) /* Other BSD */
# include <sys/endian.h>
# if _BYTE_ORDER == _LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER true
# endif
#elif defined(__APPLE__) /* Apple (MacOS, iOS) */
# include <libkern/OSByteOrder.h>
# if defined(__LITTLE_ENDIAN__)
#  define UA_BINARY_OVERLAYABLE_INTEGER true
# endif
#elif defined(__QNX__) || defined(__QNXNTO__) /* QNX */
# include <gulliver.h>
# if defined(__LITTLEENDIAN__)
#  define UA_BINARY_OVERLAYABLE_INTEGER true
# endif
#endif

	/**
	 * Float Endianness
	 * ---------------- */
#if defined(_WIN32)
# define UA_BINARY_OVERLAYABLE_FLOAT true
#elif defined(__FLOAT_WORD_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && \
	(__FLOAT_WORD_ORDER__ == __ORDER_LITTLE_ENDIAN__) /* Defined only in GCC */
# define UA_BINARY_OVERLAYABLE_FLOAT true
#endif

	/**
	 * Binary Encoding Overlays
	 * ------------------------
	 * Some data types have the same layout in memory as on the binary data stream.
	 * This can be used to speed up the decoding. If we could not detect
	 * little-endianness of integers and floats, this is not possible for types that
	 * contain integers or floats respectively. See the definition of the
	 * overlayable flag defined in `UA_DataType`. */

	/* Demote error to a warning on clang. There is no robust way to detect float
	 * endianness here. On x86/x86-64, floats are always in the right IEEE 754
	 * format. So floats are overlayable is the architecture is little-endian. */
#if defined(__clang__)
# pragma GCC diagnostic push
# pragma GCC diagnostic warning "-W#warnings"
#endif

#ifndef UA_BINARY_OVERLAYABLE_INTEGER
# define UA_BINARY_OVERLAYABLE_INTEGER false
# warning Slow Integer Encoding
#endif
#ifndef UA_BINARY_OVERLAYABLE_FLOAT
# define UA_BINARY_OVERLAYABLE_FLOAT false
# warning Slow Float Encoding
#endif

#if defined(__clang__)
# pragma GCC diagnostic pop
#endif

	/**
	 * Embed unavailable libc functions
	 * 嵌入式没有C库，要自己实现这四个接口函数了
	 * -------------------------------- */
#include <stddef.h>
#ifdef UA_ENABLE_EMBEDDED_LIBC
	void *memcpy(void *UA_RESTRICT dest, const void *UA_RESTRICT src, size_t n);
	void *memset(void *dest, int c, size_t n);
	size_t strlen(const char *s);
	int memcmp(const void *vl, const void *vr, size_t n);
#else
# include <string.h>
#endif


#ifdef __cplusplus
}
#endif
#endif //UA_CONFIG_H__
