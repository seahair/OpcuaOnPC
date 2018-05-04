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
