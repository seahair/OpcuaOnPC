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
* @file ua_types.h
* @Synopsis  UA所有的数据类型，以及针对数据类型的方法，是整个协议栈的基础
* @author BeckOS
* @version V1.1.0
* @date 2018-05-04
*/


#ifndef UA_TYPES_H__
#define UA_TYPES_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include <stdbool.h>
#include "ua_config.h"
#include "ua_constants.h"

/**
* Data Types 
* UA　中用到的所以基础数据类型都在这里面，所有的数据类型都有基本的方法：new init copy delete deletemember 可以利用模板的方式来声明和实现
* Data Types Temple ``T``.
*
* ``void T_init(T *ptr)``
*   Initialize the data type. This is synonymous with zeroing out the memory,
* 
*   i.e. ``memset(dataptr, 0, sizeof(T))``.
* 
* ``T* T_new()``
*   Allocate and return the memory for the data type. The memory is already initialized.
* 
* ``UA_StatusCode T_copy(const T *src, T *dst)``
*   Copy the content of the data type. Returns ``UA_STATUSCODE_GOOD`` or
* 
*   ``UA_STATUSCODE_BADOUTOFMEMORY``.
* ``void T_deleteMembers(T *ptr)``
*   Delete the dynamically allocated content of the data type, but not the data type itself.

* ``void T_delete(T *ptr)``
*   Delete the content of the data type and the memory for the data type itself.
* */

#define UA_BUILTIN_TYPES_COUNT 25U

/**
* Builtin Types Part 1
* --------------------
*
* Boolean
* ^^^^^^^
* A two-state logical value (true or false).
*/
typedef bool UA_Boolean;
#define UA_TRUE true
#define UA_FALSE false

/**
 * SByte
 * ^^^^^
 * An integer value between -128 and 127.
 */
typedef int8_t UA_SByte;
#define UA_SBYTE_MAX 127
#define UA_SBYTE_MIN (-128)

/**
 * Byte
 * ^^^^
 * An integer value between 0 and 256. */
typedef uint8_t UA_Byte;
#define UA_BYTE_MAX 256
#define UA_BYTE_MIN 0

/**
 * Int16
 * ^^^^^
 * An integer value between -32 768 and 32 767. */
typedef int16_t UA_Int16;
#define UA_INT16_MAX 32767
#define UA_INT16_MIN (-32768)

/**
 * UInt16
 * ^^^^^^
 * An integer value between 0 and 65 535. */
typedef uint16_t UA_UInt16;
#define UA_UINT16_MAX 65535
#define UA_UINT16_MIN 0

/**
 * Int32
 * ^^^^^
 * An integer value between -2 147 483 648 and 2 147 483 647. */
typedef int32_t UA_Int32;
#define UA_INT32_MAX 2147483647
#define UA_INT32_MIN (-2147483648)

/**
 * UInt32
 * ^^^^^^
 * An integer value between 0 and 4 294 967 295. */
typedef uint32_t UA_UInt32;
#define UA_UINT32_MAX 4294967295
#define UA_UINT32_MIN 0

/**
 * Int64
 * ^^^^^
 * An integer value between -10 223 372 036 854 775 808 and 9 223 372 036 854 775 807. */
typedef int64_t UA_Int64;
#define UA_INT64_MAX (int64_t)9223372036854775807
#define UA_INT64_MIN ((int64_t)-9223372036854775808)

/**
 * UInt64
 * ^^^^^^
 * An integer value between 0 and 18 446 744 073 709 551 615. */
typedef uint64_t UA_UInt64;
#define UA_UINT64_MAX (int64_t)18446744073709551615
#define UA_UINT64_MIN (int64_t)0

/**
 * Float
 * ^^^^^
 * An IEEE single precision (32 bit) floating point value. */
typedef float UA_Float;

/**
 * Double
 * ^^^^^^
 * An IEEE double precision (64 bit) floating point value. */
typedef double UA_Double;

/**
 * .. _statuscode:
 *
 * StatusCode
 * ^^^^^^^^^^
 * A numeric identifier for a error or condition that is associated with a value or an
 * operation. See the section :ref:`statuscodes` for the meaning of a specific code. */
typedef uint32_t UA_StatusCode;

/**
 * Array handling
 * --------------
 * In OPC UA, arrays can have a length of zero or more with the usual meaning.
 * In addition, arrays can be undefined. Then, they don't even have a length. In
 * the binary encoding, this is indicated by an array of length -1.
 * 这是用于区分数组形态的，配合数组维度这个参数，可以表示多维数组，一维数组，标量，这个参数主要用于区分数据不存在　或者　数据存在，但是长度为０
 * In open62541 however, we use ``size_t`` for array lengths. An undefined array
 * has length 0 and the data pointer is NULL. An array of length 0 also has
 * length 0 but points to a sentinel memory address. */
#define UA_EMPTY_ARRAY_SENTINEL ((void*)0x01)

/** Forward Declaration of UA_DataType. See Section `Generic Type Handling`_
* 这是一个前向结构体声明，后面会有实例化的,主要用于下面函数形参中声明用
* 这个用于囊括 UA 中所以的数据类型
  for details. */
struct UA_DataType;
typedef struct UA_DataType UA_DataType; 


/* Allocates and initializes an array of variables of a specific type
 * 针对所有的数据类型　都可以调用这个new函数，其实就是实现了模板功能，当然，new一个数组，数组也是有多个维度的
 * @param size The requested array length
 * @param type The datatype description
 * @return Returns the memory location of the variable or (void*)0 if no memory
 could be allocated */
void UA_EXPORT * UA_Array_new(size_t size, const UA_DataType *type) UA_FUNC_ATTR_MALLOC;

/* Allocates and copies an array
 * 针对所有的数据类型　都可以调用这个copy函数，其实就是实现了模板功能，当然，copy一个数组，数组也是有多个维度的
 * @param src The memory location of the source array
 * @param size The size of the array
 * @param dst The location of the pointer to the new array
 * @param type The datatype of the array members
 * @return Returns UA_STATUSCODE_GOOD or UA_STATUSCODE_BADOUTOFMEMORY */
UA_StatusCode UA_EXPORT UA_Array_copy(const void *src, size_t size, void **dst, const UA_DataType *type) UA_FUNC_ATTR_WARN_UNUSED_RESULT;

/* Deletes an array.
 * 针对所有的数据类型　都可以调用这个delete函数，其实就是实现了模板功能，当然，delete一个数组，数组也是有多个维度的
 * @param p The memory location of the array
 * @param size The size of the array
 * @param type The datatype of the array members */
void UA_EXPORT UA_Array_delete(void *p, size_t size, const UA_DataType *type);

/** 
* 下面的声明包含一些数据类型的接口函数，不属于模板内的接口函数
*/

/**
 * Builtin Types, Part 2
 * ---------------------
 *
 * String
 * ^^^^^^
 * A sequence of Unicode characters. Strings are just an array of UA_Byte. */
typedef struct {
	size_t length; /* The length of the string */
	UA_Byte *data; /* The content (not null-terminated) */
} UA_String;

/* Copies the content on the heap. Returns a null-string when alloc fails */
/* --------------------------------------------------------------------------*/
/**
* @Synopsis  用stack中的char型数组构造一个UA_String型的变量，存在heap上
*
* @Param src[] 字符串来源
*
* @Returns 构造生成的UA_String
*/
/* ----------------------------------------------------------------------------*/
UA_String UA_EXPORT UA_String_fromChars(char const src[]) UA_FUNC_ATTR_WARN_UNUSED_RESULT;

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  UA_String是否相等
 *
 * @Param s1 UA_String源1
 * @Param s2 UA_String源2
 *
 * @Returns  对比的结果
 */
/* ----------------------------------------------------------------------------*/
UA_Boolean UA_EXPORT UA_String_equal(const UA_String *s1, const UA_String *s2);

UA_EXPORT extern const UA_String UA_STRING_NULL;

/**
 * ``UA_STRING`` returns a string pointing to the preallocated char-array.
 * ``UA_STRING_ALLOC`` is shorthand for ``UA_String_fromChars`` and makes a copy
 * of the char-array. */
/* --------------------------------------------------------------------------*/
/**
* @Synopsis  构造UA_String类型的数据结构，浅拷贝，只是把指针付过去，不开辟新的内存空间
*
* @Param chars 字符串来源
*
* @Returns   返回UA_String数据类型
*/
/* ----------------------------------------------------------------------------*/
static UA_INLINE UA_String UA_STRING(char *chars) {
	UA_String str; str.length = strlen(chars);
	str.data = (UA_Byte*)chars; return str;
}

/**
* 这是字符串的深拷贝函数，重新申请堆里的内存，然后把内容在拷贝过去
*/
#define UA_STRING_ALLOC(CHARS) UA_String_fromChars(CHARS)

/**
 * DateTime
 * ^^^^^^^^
 * An instance in time. A DateTime value is encoded as a 64-bit signed integer
 * which represents the number of 100 nanosecond intervals since January 1, 1601
 * (UTC). */
typedef int64_t UA_DateTime;

/* Multiply to convert units for time difference computations */
#define UA_USEC_TO_DATETIME 10LL
#define UA_MSEC_TO_DATETIME (UA_USEC_TO_DATETIME * 1000LL)
#define UA_SEC_TO_DATETIME (UA_MSEC_TO_DATETIME * 1000LL)

/* Datetime of 1 Jan 1970 00:00 UTC */
#define UA_DATETIME_UNIX_EPOCH (11644473600LL * UA_SEC_TO_DATETIME)

/* The current time */
/* --------------------------------------------------------------------------*/
/**
* @Synopsis 获取当前时间
*
* @Returns   返回 UA_DateTime类型的返回值
*/
/* ----------------------------------------------------------------------------*/
UA_DateTime UA_EXPORT UA_DateTime_now(void);

/* CPU clock invariant to system time changes. Use only for time diffs, not current time 不知道干什么用的, 也不知道该怎么实现*/
UA_DateTime UA_EXPORT UA_DateTime_nowMonotonic(void);

/* --------------------------------------------------------------------------*/
/**
* @Synopsis DateTime 的另一种表现方式，更易读
*/
/* ----------------------------------------------------------------------------*/
typedef struct UA_DateTimeStruct {
	UA_UInt16 nanoSec;
	UA_UInt16 microSec;
	UA_UInt16 milliSec;
	UA_UInt16 sec;
	UA_UInt16 min;
	UA_UInt16 hour;
	UA_UInt16 day;
	UA_UInt16 month;
	UA_UInt16 year;
} UA_DateTimeStruct;

/* --------------------------------------------------------------------------*/
/**
* @Synopsis  由UA_DateTime 构造结构体
*
* @Param t 时间源
*
* @Returns   返回UA_DateTimeStruct数据类型
*/
/* ----------------------------------------------------------------------------*/
UA_DateTimeStruct UA_EXPORT UA_DateTime_toStruct(UA_DateTime t);

/* --------------------------------------------------------------------------*/
/**
* @Synopsis  时间结构体转成　字符串
*
* @Param t  时间源
*
* @Returns  返回字符串 
*/
/* ----------------------------------------------------------------------------*/
UA_String UA_EXPORT UA_DateTime_toString(UA_DateTime t);

/**
 * Guid
 * ^^^^
 * A 16 byte value that can be used as a globally unique identifier. */
typedef struct {
	UA_UInt32 data1;
	UA_UInt16 data2;
	UA_UInt16 data3;
	UA_Byte   data4[8];
} UA_Guid;

/* --------------------------------------------------------------------------*/
/**
* @Synopsis 比较两个Guid 
*
* @Param g1 Guid1
* @Param g2 Guid2
*
* @Returns   返回是否相等
*/
/* ----------------------------------------------------------------------------*/
UA_Boolean UA_EXPORT UA_Guid_equal(const UA_Guid *g1, const UA_Guid *g2);

/**
 * ByteString
 * ^^^^^^^^^^
 * A sequence of octets. */
typedef UA_String UA_ByteString;

/* --------------------------------------------------------------------------*/
/**
* @Synopsis  判断两个UA_ByteString类型是否相等
*
* @Param string1  数据源1
* @Param string2  数据源2
*
* @Returns   返回是否相等
*/
/* ----------------------------------------------------------------------------*/
static UA_INLINE UA_Boolean UA_ByteString_equal(const UA_ByteString *string1, const UA_ByteString *string2) {
	return UA_String_equal((const UA_String*)string1, (const UA_String*)string2); }

/* Allocates memory of size length for the bytestring. The content is not set to zero. */
/* --------------------------------------------------------------------------*/
/**
* @Synopsis  为指定的UA_ByteString 申请　一定的堆空间,感觉类似于realloc
*
* @Param bs 指定的UA_ByteString
* @Param length  要申请的内存空间
*
* @Returns  放回状态值
*/
/* ----------------------------------------------------------------------------*/
UA_StatusCode UA_EXPORT UA_ByteString_allocBuffer(UA_ByteString *bs, size_t length);

UA_EXPORT extern const UA_ByteString UA_BYTESTRING_NULL;

/* --------------------------------------------------------------------------*/
/**
* @Synopsis  由char字符串构造UA_ByteString数据结构,只传递指针，不拷贝内容
*
* @Param chars 字符串指针
*
* @Returns  构造好的UA_ByteString数据类型 
*/
/* ----------------------------------------------------------------------------*/
static UA_INLINE UA_ByteString UA_BYTESTRING(char *chars) {
	UA_ByteString str; str.length = strlen(chars);
	str.data = (UA_Byte*)chars; return str;
}

/* --------------------------------------------------------------------------*/
/**
* @Synopsis  由char字符串构造UA_ByteString数据结构，重新在堆内部分配指针
*
* @Param chars 字符串指针
*
* @Returns  构造好的UA_ByteString数据类型  
*/
/* ----------------------------------------------------------------------------*/
static UA_INLINE UA_ByteString UA_BYTESTRING_ALLOC(const char *chars) {
	UA_String str = UA_String_fromChars(chars); UA_ByteString bstr;
	bstr.length = str.length; bstr.data = str.data; return bstr;
}







#ifdef __cplusplus
}
#endif
#endif //UA_TYPES_H__
