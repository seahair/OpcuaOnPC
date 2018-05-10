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

/**
 * XmlElement
 * ^^^^^^^^^^
 * An XML element. UA的XML用UA_String来表示
 */
typedef UA_String UA_XmlElement;

/**
 * NodeId
 * ^^^^^^
 * An identifier for a node in the address space of an OPC UA Server. 
 * NodeId 有４种表示类型
 */
enum UA_NodeIdType {
	UA_NODEIDTYPE_NUMERIC    = 0, /* In the binary encoding, this can also become 1 or 2
									 (2byte and 4byte encoding of small numeric nodeids) */
	UA_NODEIDTYPE_STRING     = 3,
	UA_NODEIDTYPE_GUID       = 4,
	UA_NODEIDTYPE_BYTESTRING = 5
};

typedef struct {
	UA_UInt16 namespaceIndex;
	enum UA_NodeIdType identifierType;
	union {
		UA_UInt32     numeric;
		UA_String     string;
		UA_Guid       guid;
		UA_ByteString byteString;
	} identifier;
} UA_NodeId;

UA_EXPORT extern const UA_NodeId UA_NODEID_NULL;

static UA_INLINE UA_Boolean
UA_NodeId_isNull(const UA_NodeId *p) {
	return (p->namespaceIndex == 0 &&
			p->identifierType == UA_NODEIDTYPE_NUMERIC &&
			p->identifier.numeric == 0);
}

UA_Boolean UA_EXPORT UA_NodeId_equal(const UA_NodeId *n1, const UA_NodeId *n2);

/** The following functions are shorthand for creating NodeIds.
* 以下是NodeId的不同的构造函数
*/
static UA_INLINE UA_NodeId
UA_NODEID_NUMERIC(UA_UInt16 nsIndex, UA_UInt32 identifier) {
	UA_NodeId id; id.namespaceIndex = nsIndex;
	id.identifierType = UA_NODEIDTYPE_NUMERIC;
	id.identifier.numeric = identifier; return id;
}

static UA_INLINE UA_NodeId
UA_NODEID_STRING(UA_UInt16 nsIndex, char *chars) {
	UA_NodeId id; id.namespaceIndex = nsIndex;
	id.identifierType = UA_NODEIDTYPE_STRING;
	id.identifier.string = UA_STRING(chars); return id;
}

static UA_INLINE UA_NodeId
UA_NODEID_STRING_ALLOC(UA_UInt16 nsIndex, const char *chars) {
	UA_NodeId id; id.namespaceIndex = nsIndex;
	id.identifierType = UA_NODEIDTYPE_STRING;
	id.identifier.string = UA_STRING_ALLOC(chars); return id;
}

static UA_INLINE UA_NodeId
UA_NODEID_GUID(UA_UInt16 nsIndex, UA_Guid guid) {
	UA_NodeId id; id.namespaceIndex = nsIndex;
	id.identifierType = UA_NODEIDTYPE_GUID;
	id.identifier.guid = guid; return id;
}

static UA_INLINE UA_NodeId
UA_NODEID_BYTESTRING(UA_UInt16 nsIndex, char *chars) {
	UA_NodeId id; id.namespaceIndex = nsIndex;
	id.identifierType = UA_NODEIDTYPE_BYTESTRING;
	id.identifier.byteString = UA_BYTESTRING(chars); return id;
}

static UA_INLINE UA_NodeId
UA_NODEID_BYTESTRING_ALLOC(UA_UInt16 nsIndex, const char *chars) {
	UA_NodeId id; id.namespaceIndex = nsIndex;
	id.identifierType = UA_NODEIDTYPE_BYTESTRING;
	id.identifier.byteString = UA_BYTESTRING_ALLOC(chars); return id;
}

/**
 * ExpandedNodeId
 * ^^^^^^^^^^^^^^
 * 增强版的NodeId, 含有URI,方便在网络中定位和索引,主要是namespaceUri用来区分
 * A NodeId that allows the namespace URI to be specified instead of an index. */
typedef struct {
	UA_NodeId nodeId;
	UA_String namespaceUri;
	UA_UInt32 serverIndex;
} UA_ExpandedNodeId;

/** The following functions are shorthand for creating ExpandedNodeIds. */
static UA_INLINE UA_ExpandedNodeId
UA_EXPANDEDNODEID_NUMERIC(UA_UInt16 nsIndex, UA_UInt32 identifier) {
	UA_ExpandedNodeId id; id.nodeId = UA_NODEID_NUMERIC(nsIndex, identifier);
	id.serverIndex = 0; id.namespaceUri = UA_STRING_NULL; return id;
}

static UA_INLINE UA_ExpandedNodeId
UA_EXPANDEDNODEID_STRING(UA_UInt16 nsIndex, char *chars) {
	UA_ExpandedNodeId id; id.nodeId = UA_NODEID_STRING(nsIndex, chars);
	id.serverIndex = 0; id.namespaceUri = UA_STRING_NULL; return id;
}

static UA_INLINE UA_ExpandedNodeId
UA_EXPANDEDNODEID_STRING_ALLOC(UA_UInt16 nsIndex, const char *chars) {
	UA_ExpandedNodeId id; id.nodeId = UA_NODEID_STRING_ALLOC(nsIndex, chars);
	id.serverIndex = 0; id.namespaceUri = UA_STRING_NULL; return id;
}

static UA_INLINE UA_ExpandedNodeId
UA_EXPANDEDNODEID_STRING_GUID(UA_UInt16 nsIndex, UA_Guid guid) {
	UA_ExpandedNodeId id; id.nodeId = UA_NODEID_GUID(nsIndex, guid);
	id.serverIndex = 0; id.namespaceUri = UA_STRING_NULL; return id;
}

static UA_INLINE UA_ExpandedNodeId
UA_EXPANDEDNODEID_BYTESTRING(UA_UInt16 nsIndex, char *chars) {
	UA_ExpandedNodeId id; id.nodeId = UA_NODEID_BYTESTRING(nsIndex, chars);
	id.serverIndex = 0; id.namespaceUri = UA_STRING_NULL; return id;
}

static UA_INLINE UA_ExpandedNodeId
UA_EXPANDEDNODEID_BYTESTRING_ALLOC(UA_UInt16 nsIndex, const char *chars) {
	UA_ExpandedNodeId id; id.nodeId = UA_NODEID_BYTESTRING_ALLOC(nsIndex, chars);
	id.serverIndex = 0; id.namespaceUri = UA_STRING_NULL; return id;
}

/**
 * QualifiedName
 * ^^^^^^^^^^^^^
 * 其实就是实现了C++的namespace
 * A name qualified by a namespace. */
typedef struct {
	UA_UInt16 namespaceIndex;
	UA_String name;
} UA_QualifiedName;

static UA_INLINE UA_QualifiedName
UA_QUALIFIEDNAME(UA_UInt16 nsIndex, char *chars) {
	UA_QualifiedName qn; qn.namespaceIndex = nsIndex;
	qn.name = UA_STRING(chars); return qn;
}

static UA_INLINE UA_QualifiedName
UA_QUALIFIEDNAME_ALLOC(UA_UInt16 nsIndex, const char *chars) {
	UA_QualifiedName qn; qn.namespaceIndex = nsIndex;
	qn.name = UA_STRING_ALLOC(chars); return qn;
}

/**
 * LocalizedText
 * ^^^^^^^^^^^^^
 * 用于给本地人阅读的编码
 * Human readable text with an optional locale identifier. */
typedef struct {
	UA_String locale;
	UA_String text;
} UA_LocalizedText;

static UA_INLINE UA_LocalizedText
UA_LOCALIZEDTEXT(char *locale, char *text) {
	UA_LocalizedText lt; lt.locale = UA_STRING(locale);
	lt.text = UA_STRING(text); return lt;
}

static UA_INLINE UA_LocalizedText
UA_LOCALIZEDTEXT_ALLOC(const char *locale, const char *text) {
	UA_LocalizedText lt; lt.locale = UA_STRING_ALLOC(locale);
	lt.text = UA_STRING_ALLOC(text); return lt;
}

/**
 * ExtensionObject
 * ^^^^^^^^^^^^^^^
 * 拓展的Object，主要是用于描述server接受的外部data type,来的数据是带编码的，先看能不能解码，然后取出内容
 * ExtensionObjects may contain scalars of any data type. Even those that are
 * unknown to the receiver. See the Section `Generic Type Handling`_ on how
 * types are described. An ExtensionObject always contains the NodeId of the
 * Data Type. If the data cannot be decoded, we keep the encoded string and the
 * NodeId. */
typedef struct {
	enum {
		UA_EXTENSIONOBJECT_ENCODED_NOBODY     = 0,
		UA_EXTENSIONOBJECT_ENCODED_BYTESTRING = 1,
		UA_EXTENSIONOBJECT_ENCODED_XML        = 2,
		UA_EXTENSIONOBJECT_DECODED            = 3,
		UA_EXTENSIONOBJECT_DECODED_NODELETE   = 4 /* Don't delete the decoded content
													 at the lifecycle end */
	} encoding;
	union {
		struct {
			UA_NodeId typeId;   /* The nodeid of the datatype */
			UA_ByteString body; /* The bytestring of the encoded data */
		} encoded;
		struct {
			const UA_DataType *type;
			void *data;
		} decoded;
	} content;
} UA_ExtensionObject;

/**
 * Variant
 * ^^^^^^^
 * 这是UA中最重要的个数据结构，包含所有的数据类型，通过UA_DataType来标识类型，用arrayLength 和 data 来标识维度
 * Variants may contain data of any type. See the Section `Generic Type
 * Handling`_ on how types are described. If the data is not of one of the 25
 * builtin types, it will be encoded as an `ExtensionObject`_ on the wire. (The
 * standard says that a variant is a union of the built-in types. open62541
 * generalizes this to any data type by transparently de- and encoding
 * ExtensionObjects in the background. If the decoding fails, the variant
 * contains the original ExtensionObject.)
 *
 * Variants can contain a single scalar or an array. For details on the handling
 * of arrays, see the Section `Array Handling`_. Array variants can have an
 * additional dimensionality (matrix, 3-tensor, ...) defined in an array of
 * dimension sizes. Higher rank dimensions are serialized first.
 *
 * The differentiation between variants containing a scalar, an array or no data
 * is as follows:
 *
 * - arrayLength == 0 && data == NULL: no existing data
 * - arrayLength == 0 && data == UA_EMPTY_ARRAY_SENTINEL: array of length 0
 * - arrayLength == 0 && data > UA_EMPTY_ARRAY_SENTINEL: scalar value
 * - arrayLength > 0: array of the given length */
typedef struct {
	const UA_DataType *type; /* The data type description */
	enum {
		UA_VARIANT_DATA,          /* The data has the same lifecycle as the variant */
		UA_VARIANT_DATA_NODELETE, /* The data is "borrowed" by the variant and shall not be
									 deleted at the end of the variant's lifecycle. */
	} storageType;
	size_t arrayLength;  // The number of elements in the data array
	void *data; // Points to the scalar or array data
	size_t arrayDimensionsSize; // The number of dimensions the data-array has
	UA_Int32 *arrayDimensions; // The length of each dimension of the data-array
} UA_Variant;

/* Returns true if the variant contains a scalar value. Note that empty variants contain
 * an array of length -1 (undefined).
 *
 * @param v The variant
 * @return Does the variant contain a scalar value. */
static UA_INLINE UA_Boolean
UA_Variant_isScalar(const UA_Variant *v) {
	return (v->arrayLength == 0 && v->data > UA_EMPTY_ARRAY_SENTINEL);
}

/* Set the variant to a scalar value that already resides in memory. The value takes on
 * the lifecycle of the variant and is deleted with it.
 *
 * @param v The variant
 * @param p A pointer to the value data
 * @param type The datatype of the value in question */
void UA_EXPORT UA_Variant_setScalar(UA_Variant *v, void * UA_RESTRICT p, const UA_DataType *type);

/* Set the variant to a scalar value that is copied from an existing variable.
 * @param v The variant
 * @param p A pointer to the value data
 * @param type The datatype of the value
 * @return Indicates whether the operation succeeded or returns an error code */
UA_StatusCode UA_EXPORT UA_Variant_setScalarCopy(UA_Variant *v, const void *p, const UA_DataType *type);

/* Set the variant to an array that already resides in memory. The array takes on the
 * lifecycle of the variant and is deleted with it.
 *
 * @param v The variant
 * @param array A pointer to the array data
 * @param arraySize The size of the array
 * @param type The datatype of the array */
void UA_EXPORT
UA_Variant_setArray(UA_Variant *v, void * UA_RESTRICT array,
		size_t arraySize, const UA_DataType *type);

/* Set the variant to an array that is copied from an existing array.
 *
 * @param v The variant
 * @param array A pointer to the array data
 * @param arraySize The size of the array
 * @param type The datatype of the array
 * @return Indicates whether the operation succeeded or returns an error code */
UA_StatusCode UA_EXPORT
UA_Variant_setArrayCopy(UA_Variant *v, const void *array,
		size_t arraySize, const UA_DataType *type);

/**
 * 这个是variant变量的集合，更多一个维度
 * NumericRanges are used to indicate subsets of a (multidimensional) variant
 * array. NumericRange has no official type structure in the standard. On the
 * wire, it only exists as an encoded string, such as "1:2,0:3,5". The colon
 * separates min/max index and the comma separates dimensions. A single value
 * indicates a range with a single element (min==max). */
typedef struct {
	size_t dimensionsSize;
	struct UA_NumericRangeDimension {
		UA_UInt32 min;
		UA_UInt32 max;
	} *dimensions;
} UA_NumericRange;

/* Copy the variant, but use only a subset of the (multidimensional) array into a variant.
 * Returns an error code if the variant is not an array or if the indicated range does not
 * fit.
 *
 * @param src The source variant
 * @param dst The target variant
 * @param range The range of the copied data
 * @return Returns UA_STATUSCODE_GOOD or an error code */
UA_StatusCode UA_EXPORT
UA_Variant_copyRange(const UA_Variant *src, UA_Variant *dst, const UA_NumericRange range);

/* Insert a range of data into an existing variant. The data array can't be reused afterwards if it
 * contains types without a fixed size (e.g. strings) since the members are moved into the variant
 * and take on its lifecycle.
 *
 * @param v The variant
 * @param dataArray The data array. The type must match the variant
 * @param dataArraySize The length of the data array. This is checked to match the range size.
 * @param range The range of where the new data is inserted
 * @return Returns UA_STATUSCODE_GOOD or an error code */
UA_StatusCode UA_EXPORT
UA_Variant_setRange(UA_Variant *v, void * UA_RESTRICT array,
		size_t arraySize, const UA_NumericRange range);

/* Deep-copy a range of data into an existing variant.
 *
 * @param v The variant
 * @param dataArray The data array. The type must match the variant
 * @param dataArraySize The length of the data array. This is checked to match the range size.
 * @param range The range of where the new data is inserted
 * @return Returns UA_STATUSCODE_GOOD or an error code */
UA_StatusCode UA_EXPORT
UA_Variant_setRangeCopy(UA_Variant *v, const void *array,
		size_t arraySize, const UA_NumericRange range);

/**
 * DataValue
 * ^^^^^^^^^
 * data Value 数据结构
 * A data value with an associated status code and timestamps. */
typedef struct {
	UA_Boolean    hasValue             : 1;
	UA_Boolean    hasStatus            : 1;
	UA_Boolean    hasSourceTimestamp   : 1;
	UA_Boolean    hasServerTimestamp   : 1;
	UA_Boolean    hasSourcePicoseconds : 1;
	UA_Boolean    hasServerPicoseconds : 1;
	UA_Variant    value;
	UA_StatusCode status;
	UA_DateTime   sourceTimestamp;
	UA_UInt16     sourcePicoseconds;
	UA_DateTime   serverTimestamp;
	UA_UInt16     serverPicoseconds;
} UA_DataValue;

/**
 * DiagnosticInfo
 * ^^^^^^^^^^^^^^
 * 诊断信息
 * A structure that contains detailed error and diagnostic information
 * associated with a StatusCode. */
typedef struct UA_DiagnosticInfo {
	UA_Boolean    hasSymbolicId          : 1;
	UA_Boolean    hasNamespaceUri        : 1;
	UA_Boolean    hasLocalizedText       : 1;
	UA_Boolean    hasLocale              : 1;
	UA_Boolean    hasAdditionalInfo      : 1;
	UA_Boolean    hasInnerStatusCode     : 1;
	UA_Boolean    hasInnerDiagnosticInfo : 1;
	UA_Int32      symbolicId;
	UA_Int32      namespaceUri;
	UA_Int32      localizedText;
	UA_Int32      locale;
	UA_String     additionalInfo;
	UA_StatusCode innerStatusCode;
	struct UA_DiagnosticInfo *innerDiagnosticInfo;
} UA_DiagnosticInfo;

/**
 * Generic Type Handling
 * ---------------------
 * The builtin types can be combined to data structures. All information about a
 * (structured) data type is stored in a ``UA_DataType``. The array ``UA_TYPES``
 * contains the description of all standard-defined types and is used for
 * handling of generic types. */
typedef struct {
#ifdef UA_ENABLE_TYPENAMES
	const char *memberName;
#endif
	UA_UInt16 memberTypeIndex;    /* Index of the member in the array of data types */
	UA_Byte   padding;            /* How much padding is there before this member element?
									 For arrays this is the padding before the size_t
									 lenght member. (No padding between size_t and the
									 following ptr.) */
	UA_Boolean namespaceZero : 1; /* The type of the member is defined in namespace zero.
									 In this implementation, types from custom namespace
									 may contain members from the same namespace or ns0
									 only.*/
	UA_Boolean isArray       : 1; /* The member is an array */
} UA_DataTypeMember;

struct UA_DataType {
#ifdef UA_ENABLE_TYPENAMES
	const char *typeName;
#endif
	UA_NodeId  typeId;           /* The nodeid of the type */
	UA_UInt16  memSize;          /* Size of the struct in memory */
	UA_UInt16  typeIndex;        /* Index of the type in the datatypetable */
	UA_Byte    membersSize;      /* How many members does the type have? */
	UA_Boolean builtin      : 1; /* The type is "builtin" and has dedicated de- and
									encoding functions */
	UA_Boolean fixedSize    : 1; /* The type (and its members) contains no pointers */
	UA_Boolean overlayable  : 1; /* The type has the identical memory layout in
									memory and on the binary stream. */
	UA_DataTypeMember *members;
};

/** The following functions are used for generic handling of data types.
* 通用的数据类型　算法函数 new,init,copy,delete
*/

/* Allocates and initializes a variable of type dataType
 *
 * @param type The datatype description
 * @return Returns the memory location of the variable or (void*)0 if no memory is available */
void UA_EXPORT * UA_new(const UA_DataType *type) UA_FUNC_ATTR_MALLOC;

/* Initializes a variable to default values
 *
 * @param p The memory location of the variable
 * @param type The datatype description */
static UA_INLINE void
UA_init(void *p, const UA_DataType *type) {
	memset(p, 0, type->memSize);
}

/* Copies the content of two variables. If copying fails (e.g. because no memory was
 * available for an array), then dst is emptied and initialized to prevent memory leaks.
 *
 * @param src The memory location of the source variable
 * @param dst The memory location of the destination variable
 * @param type The datatype description
 * @return Indicates whether the operation succeeded or returns an error code */
UA_StatusCode UA_EXPORT UA_copy(const void *src, void *dst, const UA_DataType *type);

/* Deletes the dynamically allocated content of a variable (e.g. resets all arrays to
 * undefined arrays). Afterwards, the variable can be safely deleted without causing
 * memory leaks. But the variable is not initialized and may contain old data that is not
 * memory-relevant.
 *
 * @param p The memory location of the variable
 * @param type The datatype description of the variable */
void UA_EXPORT UA_deleteMembers(void *p, const UA_DataType *type);

/* Frees a variable and all of its content.
 *
 * @param p The memory location of the variable
 * @param type The datatype description of the variable */
void UA_EXPORT UA_delete(void *p, const UA_DataType *type);

/**
 * Random Number Generator
 * -----------------------
 * 针对random的　算法函数，个人感觉不应该放在这里面
 * If UA_ENABLE_MULTITHREADING is defined, then the seed is stored in thread local
 * storage. The seed is initialized for every thread in the server/client. */
void UA_EXPORT UA_random_seed(UA_UInt64 seed);
UA_UInt32 UA_EXPORT UA_UInt32_random(void); /* do not use for cryptographic entropy */
UA_Guid UA_EXPORT UA_Guid_random(void); /* do not use for cryptographic entropy */

#ifdef __cplusplus
}
#endif
#endif //UA_TYPES_H__
