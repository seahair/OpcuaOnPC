/* Generated from Opc.Ua.Types.bsd with script /home/sea/gitworkspace/opcua/open62541/tools/generate_datatypes.py
 * on host SeaIsGOD by user sea at 2018-03-07 03:04:54 */
 
#include "stddef.h"
#include "ua_types.h"
#include "ua_types_generated.h"

/* Boolean */
static UA_DataTypeMember Boolean_members[1] = {
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* SByte */
static UA_DataTypeMember SByte_members[1] = {
  { .memberTypeIndex = UA_TYPES_SBYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Byte */
static UA_DataTypeMember Byte_members[1] = {
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Int16 */
static UA_DataTypeMember Int16_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT16,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* UInt16 */
static UA_DataTypeMember UInt16_members[1] = {
  { .memberTypeIndex = UA_TYPES_UINT16,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Int32 */
static UA_DataTypeMember Int32_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* UInt32 */
static UA_DataTypeMember UInt32_members[1] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Int64 */
static UA_DataTypeMember Int64_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT64,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* UInt64 */
static UA_DataTypeMember UInt64_members[1] = {
  { .memberTypeIndex = UA_TYPES_UINT64,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Float */
static UA_DataTypeMember Float_members[1] = {
  { .memberTypeIndex = UA_TYPES_FLOAT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Double */
static UA_DataTypeMember Double_members[1] = {
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* String */
static UA_DataTypeMember String_members[1] = {
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },};

/* DateTime */
static UA_DataTypeMember DateTime_members[1] = {
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Guid */
static UA_DataTypeMember Guid_members[1] = {
  { .memberTypeIndex = UA_TYPES_GUID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ByteString */
static UA_DataTypeMember ByteString_members[1] = {
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },};

/* XmlElement */
static UA_DataTypeMember XmlElement_members[1] = {
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },};

/* NodeId */
static UA_DataTypeMember NodeId_members[1] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ExpandedNodeId */
static UA_DataTypeMember ExpandedNodeId_members[1] = {
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* StatusCode */
static UA_DataTypeMember StatusCode_members[1] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* QualifiedName */
static UA_DataTypeMember QualifiedName_members[2] = {
  { .memberTypeIndex = UA_TYPES_INT16,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "namespaceIndex",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "name",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QualifiedName, name) - offsetof(UA_QualifiedName, namespaceIndex) - sizeof(UA_Int16),
    .isArray = false
  },};

/* LocalizedText */
static UA_DataTypeMember LocalizedText_members[1] = {
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ExtensionObject */
static UA_DataTypeMember ExtensionObject_members[1] = {
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* DataValue */
static UA_DataTypeMember DataValue_members[1] = {
  { .memberTypeIndex = UA_TYPES_DATAVALUE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Variant */
static UA_DataTypeMember Variant_members[1] = {
  { .memberTypeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* DiagnosticInfo */
static UA_DataTypeMember DiagnosticInfo_members[1] = {
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* SignedSoftwareCertificate */
static UA_DataTypeMember SignedSoftwareCertificate_members[2] = {
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "certificateData",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "signature",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SignedSoftwareCertificate, signature) - offsetof(UA_SignedSoftwareCertificate, certificateData) - sizeof(UA_ByteString),
    .isArray = false
  },};

/* BrowsePathTarget */
static UA_DataTypeMember BrowsePathTarget_members[2] = {
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "remainingPathIndex",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowsePathTarget, remainingPathIndex) - offsetof(UA_BrowsePathTarget, targetId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },};

/* ViewAttributes */
static UA_DataTypeMember ViewAttributes_members[7] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewAttributes, displayName) - offsetof(UA_ViewAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewAttributes, description) - offsetof(UA_ViewAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewAttributes, writeMask) - offsetof(UA_ViewAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewAttributes, userWriteMask) - offsetof(UA_ViewAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "containsNoLoops",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewAttributes, containsNoLoops) - offsetof(UA_ViewAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "eventNotifier",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewAttributes, eventNotifier) - offsetof(UA_ViewAttributes, containsNoLoops) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* BrowseResultMask */
static UA_DataTypeMember BrowseResultMask_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* RequestHeader */
static UA_DataTypeMember RequestHeader_members[7] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "authenticationToken",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timestamp",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RequestHeader, timestamp) - offsetof(UA_RequestHeader, authenticationToken) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHandle",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RequestHeader, requestHandle) - offsetof(UA_RequestHeader, timestamp) - sizeof(UA_DateTime),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "returnDiagnostics",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RequestHeader, returnDiagnostics) - offsetof(UA_RequestHeader, requestHandle) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "auditEntryId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RequestHeader, auditEntryId) - offsetof(UA_RequestHeader, returnDiagnostics) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timeoutHint",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RequestHeader, timeoutHint) - offsetof(UA_RequestHeader, auditEntryId) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "additionalHeader",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RequestHeader, additionalHeader) - offsetof(UA_RequestHeader, timeoutHint) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* MonitoredItemModifyResult */
static UA_DataTypeMember MonitoredItemModifyResult_members[4] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedSamplingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemModifyResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedQueueSize",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filterResult",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemModifyResult, filterResult) - offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* ViewDescription */
static UA_DataTypeMember ViewDescription_members[3] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "viewId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timestamp",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewDescription, timestamp) - offsetof(UA_ViewDescription, viewId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "viewVersion",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ViewDescription, viewVersion) - offsetof(UA_ViewDescription, timestamp) - sizeof(UA_DateTime),
    .isArray = false
  },};

/* CloseSecureChannelRequest */
static UA_DataTypeMember CloseSecureChannelRequest_members[1] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* AddNodesResult */
static UA_DataTypeMember AddNodesResult_members[2] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "addedNodeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesResult, addedNodeId) - offsetof(UA_AddNodesResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = false
  },};

/* VariableAttributes */
static UA_DataTypeMember VariableAttributes_members[13] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, displayName) - offsetof(UA_VariableAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, description) - offsetof(UA_VariableAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, writeMask) - offsetof(UA_VariableAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, userWriteMask) - offsetof(UA_VariableAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "value",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, value) - offsetof(UA_VariableAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, dataType) - offsetof(UA_VariableAttributes, value) - sizeof(UA_Variant),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "valueRank",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, valueRank) - offsetof(UA_VariableAttributes, dataType) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "arrayDimensions",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, arrayDimensionsSize) - offsetof(UA_VariableAttributes, valueRank) - sizeof(UA_Int32),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "accessLevel",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, accessLevel) - offsetof(UA_VariableAttributes, arrayDimensions) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userAccessLevel",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, userAccessLevel) - offsetof(UA_VariableAttributes, accessLevel) - sizeof(UA_Byte),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "minimumSamplingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, minimumSamplingInterval) - offsetof(UA_VariableAttributes, userAccessLevel) - sizeof(UA_Byte),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "historizing",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableAttributes, historizing) - offsetof(UA_VariableAttributes, minimumSamplingInterval) - sizeof(UA_Double),
    .isArray = false
  },};

/* NotificationMessage */
static UA_DataTypeMember NotificationMessage_members[3] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "sequenceNumber",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "publishTime",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NotificationMessage, publishTime) - offsetof(UA_NotificationMessage, sequenceNumber) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "notificationData",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NotificationMessage, notificationDataSize) - offsetof(UA_NotificationMessage, publishTime) - sizeof(UA_DateTime),
    .isArray = true
  },};

/* NodeAttributesMask */
static UA_DataTypeMember NodeAttributesMask_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* MonitoringMode */
static UA_DataTypeMember MonitoringMode_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* CallMethodResult */
static UA_DataTypeMember CallMethodResult_members[4] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "inputArgumentResults",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallMethodResult, inputArgumentResultsSize) - offsetof(UA_CallMethodResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "inputArgumentDiagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfosSize) - offsetof(UA_CallMethodResult, inputArgumentResults) - sizeof(void*),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "outputArguments",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallMethodResult, outputArgumentsSize) - offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfos) - sizeof(void*),
    .isArray = true
  },};

/* ParsingResult */
static UA_DataTypeMember ParsingResult_members[3] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataStatusCodes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ParsingResult, dataStatusCodesSize) - offsetof(UA_ParsingResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataDiagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ParsingResult, dataDiagnosticInfosSize) - offsetof(UA_ParsingResult, dataStatusCodes) - sizeof(void*),
    .isArray = true
  },};

/* RelativePathElement */
static UA_DataTypeMember RelativePathElement_members[4] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isInverse",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RelativePathElement, isInverse) - offsetof(UA_RelativePathElement, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "includeSubtypes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RelativePathElement, includeSubtypes) - offsetof(UA_RelativePathElement, isInverse) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUALIFIEDNAME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RelativePathElement, targetName) - offsetof(UA_RelativePathElement, includeSubtypes) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* BrowseDirection */
static UA_DataTypeMember BrowseDirection_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* CallMethodRequest */
static UA_DataTypeMember CallMethodRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "objectId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "methodId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallMethodRequest, methodId) - offsetof(UA_CallMethodRequest, objectId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "inputArguments",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallMethodRequest, inputArgumentsSize) - offsetof(UA_CallMethodRequest, methodId) - sizeof(UA_NodeId),
    .isArray = true
  },};

/* ServerState */
static UA_DataTypeMember ServerState_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* UnregisterNodesRequest */
static UA_DataTypeMember UnregisterNodesRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToUnregister",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UnregisterNodesRequest, nodesToUnregisterSize) - offsetof(UA_UnregisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* ContentFilterElementResult */
static UA_DataTypeMember ContentFilterElementResult_members[3] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "operandStatusCodes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ContentFilterElementResult, operandStatusCodesSize) - offsetof(UA_ContentFilterElementResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "operandDiagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ContentFilterElementResult, operandDiagnosticInfosSize) - offsetof(UA_ContentFilterElementResult, operandStatusCodes) - sizeof(void*),
    .isArray = true
  },};

/* QueryDataSet */
static UA_DataTypeMember QueryDataSet_members[3] = {
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "typeDefinitionNode",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryDataSet, typeDefinitionNode) - offsetof(UA_QueryDataSet, nodeId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "values",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryDataSet, valuesSize) - offsetof(UA_QueryDataSet, typeDefinitionNode) - sizeof(UA_ExpandedNodeId),
    .isArray = true
  },};

/* SetPublishingModeRequest */
static UA_DataTypeMember SetPublishingModeRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "publishingEnabled",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SetPublishingModeRequest, publishingEnabled) - offsetof(UA_SetPublishingModeRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SetPublishingModeRequest, subscriptionIdsSize) - offsetof(UA_SetPublishingModeRequest, publishingEnabled) - sizeof(UA_Boolean),
    .isArray = true
  },};

/* TimestampsToReturn */
static UA_DataTypeMember TimestampsToReturn_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* CallRequest */
static UA_DataTypeMember CallRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_CALLMETHODREQUEST,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "methodsToCall",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallRequest, methodsToCallSize) - offsetof(UA_CallRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* MethodAttributes */
static UA_DataTypeMember MethodAttributes_members[7] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MethodAttributes, displayName) - offsetof(UA_MethodAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MethodAttributes, description) - offsetof(UA_MethodAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MethodAttributes, writeMask) - offsetof(UA_MethodAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MethodAttributes, userWriteMask) - offsetof(UA_MethodAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "executable",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MethodAttributes, executable) - offsetof(UA_MethodAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userExecutable",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MethodAttributes, userExecutable) - offsetof(UA_MethodAttributes, executable) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* DeleteReferencesItem */
static UA_DataTypeMember DeleteReferencesItem_members[5] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "sourceNodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesItem, referenceTypeId) - offsetof(UA_DeleteReferencesItem, sourceNodeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isForward",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesItem, isForward) - offsetof(UA_DeleteReferencesItem, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetNodeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesItem, targetNodeId) - offsetof(UA_DeleteReferencesItem, isForward) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "deleteBidirectional",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesItem, deleteBidirectional) - offsetof(UA_DeleteReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },};

/* WriteValue */
static UA_DataTypeMember WriteValue_members[4] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "attributeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_WriteValue, attributeId) - offsetof(UA_WriteValue, nodeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "indexRange",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_WriteValue, indexRange) - offsetof(UA_WriteValue, attributeId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATAVALUE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "value",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_WriteValue, value) - offsetof(UA_WriteValue, indexRange) - sizeof(UA_String),
    .isArray = false
  },};

/* MonitoredItemCreateResult */
static UA_DataTypeMember MonitoredItemCreateResult_members[5] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "monitoredItemId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - offsetof(UA_MonitoredItemCreateResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedSamplingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedQueueSize",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filterResult",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemCreateResult, filterResult) - offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* MessageSecurityMode */
static UA_DataTypeMember MessageSecurityMode_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* MonitoringParameters */
static UA_DataTypeMember MonitoringParameters_members[5] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientHandle",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "samplingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoringParameters, samplingInterval) - offsetof(UA_MonitoringParameters, clientHandle) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filter",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoringParameters, filter) - offsetof(UA_MonitoringParameters, samplingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "queueSize",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoringParameters, queueSize) - offsetof(UA_MonitoringParameters, filter) - sizeof(UA_ExtensionObject),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "discardOldest",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoringParameters, discardOldest) - offsetof(UA_MonitoringParameters, queueSize) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* SignatureData */
static UA_DataTypeMember SignatureData_members[2] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "algorithm",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "signature",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SignatureData, signature) - offsetof(UA_SignatureData, algorithm) - sizeof(UA_String),
    .isArray = false
  },};

/* ReferenceNode */
static UA_DataTypeMember ReferenceNode_members[3] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isInverse",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceNode, isInverse) - offsetof(UA_ReferenceNode, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceNode, targetId) - offsetof(UA_ReferenceNode, isInverse) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* Argument */
static UA_DataTypeMember Argument_members[5] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "name",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_Argument, dataType) - offsetof(UA_Argument, name) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "valueRank",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_Argument, valueRank) - offsetof(UA_Argument, dataType) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "arrayDimensions",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_Argument, arrayDimensionsSize) - offsetof(UA_Argument, valueRank) - sizeof(UA_Int32),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_Argument, description) - offsetof(UA_Argument, arrayDimensions) - sizeof(void*),
    .isArray = false
  },};

/* UserIdentityToken */
static UA_DataTypeMember UserIdentityToken_members[1] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "policyId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ObjectTypeAttributes */
static UA_DataTypeMember ObjectTypeAttributes_members[6] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectTypeAttributes, displayName) - offsetof(UA_ObjectTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectTypeAttributes, description) - offsetof(UA_ObjectTypeAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectTypeAttributes, writeMask) - offsetof(UA_ObjectTypeAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectTypeAttributes, userWriteMask) - offsetof(UA_ObjectTypeAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isAbstract",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectTypeAttributes, isAbstract) - offsetof(UA_ObjectTypeAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* SecurityTokenRequestType */
static UA_DataTypeMember SecurityTokenRequestType_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* BuildInfo */
static UA_DataTypeMember BuildInfo_members[6] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "productUri",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "manufacturerName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BuildInfo, manufacturerName) - offsetof(UA_BuildInfo, productUri) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "productName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BuildInfo, productName) - offsetof(UA_BuildInfo, manufacturerName) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "softwareVersion",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BuildInfo, softwareVersion) - offsetof(UA_BuildInfo, productName) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "buildNumber",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BuildInfo, buildNumber) - offsetof(UA_BuildInfo, softwareVersion) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "buildDate",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BuildInfo, buildDate) - offsetof(UA_BuildInfo, buildNumber) - sizeof(UA_String),
    .isArray = false
  },};

/* NodeClass */
static UA_DataTypeMember NodeClass_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ChannelSecurityToken */
static UA_DataTypeMember ChannelSecurityToken_members[4] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "channelId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "tokenId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ChannelSecurityToken, tokenId) - offsetof(UA_ChannelSecurityToken, channelId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "createdAt",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ChannelSecurityToken, createdAt) - offsetof(UA_ChannelSecurityToken, tokenId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedLifetime",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ChannelSecurityToken, revisedLifetime) - offsetof(UA_ChannelSecurityToken, createdAt) - sizeof(UA_DateTime),
    .isArray = false
  },};

/* MonitoredItemNotification */
static UA_DataTypeMember MonitoredItemNotification_members[2] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientHandle",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATAVALUE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "value",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemNotification, value) - offsetof(UA_MonitoredItemNotification, clientHandle) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* DeleteNodesItem */
static UA_DataTypeMember DeleteNodesItem_members[2] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "deleteTargetReferences",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteNodesItem, deleteTargetReferences) - offsetof(UA_DeleteNodesItem, nodeId) - sizeof(UA_NodeId),
    .isArray = false
  },};

/* SubscriptionAcknowledgement */
static UA_DataTypeMember SubscriptionAcknowledgement_members[2] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "sequenceNumber",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) - offsetof(UA_SubscriptionAcknowledgement, subscriptionId) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* ReadValueId */
static UA_DataTypeMember ReadValueId_members[4] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "attributeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadValueId, attributeId) - offsetof(UA_ReadValueId, nodeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "indexRange",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadValueId, indexRange) - offsetof(UA_ReadValueId, attributeId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUALIFIEDNAME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataEncoding",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadValueId, dataEncoding) - offsetof(UA_ReadValueId, indexRange) - sizeof(UA_String),
    .isArray = false
  },};

/* AnonymousIdentityToken */
static UA_DataTypeMember AnonymousIdentityToken_members[1] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "policyId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* DataTypeAttributes */
static UA_DataTypeMember DataTypeAttributes_members[6] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DataTypeAttributes, displayName) - offsetof(UA_DataTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DataTypeAttributes, description) - offsetof(UA_DataTypeAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DataTypeAttributes, writeMask) - offsetof(UA_DataTypeAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DataTypeAttributes, userWriteMask) - offsetof(UA_DataTypeAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isAbstract",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DataTypeAttributes, isAbstract) - offsetof(UA_DataTypeAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* ResponseHeader */
static UA_DataTypeMember ResponseHeader_members[6] = {
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timestamp",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHandle",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ResponseHeader, requestHandle) - offsetof(UA_ResponseHeader, timestamp) - sizeof(UA_DateTime),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serviceResult",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ResponseHeader, serviceResult) - offsetof(UA_ResponseHeader, requestHandle) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serviceDiagnostics",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ResponseHeader, serviceDiagnostics) - offsetof(UA_ResponseHeader, serviceResult) - sizeof(UA_StatusCode),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "stringTable",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ResponseHeader, stringTableSize) - offsetof(UA_ResponseHeader, serviceDiagnostics) - sizeof(UA_DiagnosticInfo),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "additionalHeader",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ResponseHeader, additionalHeader) - offsetof(UA_ResponseHeader, stringTable) - sizeof(void*),
    .isArray = false
  },};

/* DeleteSubscriptionsRequest */
static UA_DataTypeMember DeleteSubscriptionsRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_DeleteSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* DataChangeNotification */
static UA_DataTypeMember DataChangeNotification_members[2] = {
  { .memberTypeIndex = UA_TYPES_MONITOREDITEMNOTIFICATION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "monitoredItems",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DataChangeNotification, diagnosticInfosSize) - offsetof(UA_DataChangeNotification, monitoredItems) - sizeof(void*),
    .isArray = true
  },};

/* DeleteMonitoredItemsResponse */
static UA_DataTypeMember DeleteMonitoredItemsResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteMonitoredItemsResponse, resultsSize) - offsetof(UA_DeleteMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_DeleteMonitoredItemsResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* RelativePath */
static UA_DataTypeMember RelativePath_members[1] = {
  { .memberTypeIndex = UA_TYPES_RELATIVEPATHELEMENT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "elements",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },};

/* RegisterNodesRequest */
static UA_DataTypeMember RegisterNodesRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToRegister",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RegisterNodesRequest, nodesToRegisterSize) - offsetof(UA_RegisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* DeleteNodesRequest */
static UA_DataTypeMember DeleteNodesRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DELETENODESITEM,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToDelete",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteNodesRequest, nodesToDeleteSize) - offsetof(UA_DeleteNodesRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* PublishResponse */
static UA_DataTypeMember PublishResponse_members[7] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishResponse, subscriptionId) - offsetof(UA_PublishResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "availableSequenceNumbers",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishResponse, availableSequenceNumbersSize) - offsetof(UA_PublishResponse, subscriptionId) - sizeof(UA_UInt32),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "moreNotifications",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishResponse, moreNotifications) - offsetof(UA_PublishResponse, availableSequenceNumbers) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NOTIFICATIONMESSAGE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "notificationMessage",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishResponse, notificationMessage) - offsetof(UA_PublishResponse, moreNotifications) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishResponse, resultsSize) - offsetof(UA_PublishResponse, notificationMessage) - sizeof(UA_NotificationMessage),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishResponse, diagnosticInfosSize) - offsetof(UA_PublishResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* MonitoredItemModifyRequest */
static UA_DataTypeMember MonitoredItemModifyRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "monitoredItemId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITORINGPARAMETERS,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedParameters",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemModifyRequest, requestedParameters) - offsetof(UA_MonitoredItemModifyRequest, monitoredItemId) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* UserNameIdentityToken */
static UA_DataTypeMember UserNameIdentityToken_members[4] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "policyId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserNameIdentityToken, userName) - offsetof(UA_UserNameIdentityToken, policyId) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "password",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserNameIdentityToken, password) - offsetof(UA_UserNameIdentityToken, userName) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "encryptionAlgorithm",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserNameIdentityToken, encryptionAlgorithm) - offsetof(UA_UserNameIdentityToken, password) - sizeof(UA_ByteString),
    .isArray = false
  },};

/* IdType */
static UA_DataTypeMember IdType_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* UserTokenType */
static UA_DataTypeMember UserTokenType_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* NodeAttributes */
static UA_DataTypeMember NodeAttributes_members[5] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NodeAttributes, displayName) - offsetof(UA_NodeAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NodeAttributes, description) - offsetof(UA_NodeAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NodeAttributes, writeMask) - offsetof(UA_NodeAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NodeAttributes, userWriteMask) - offsetof(UA_NodeAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* ActivateSessionRequest */
static UA_DataTypeMember ActivateSessionRequest_members[6] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_SIGNATUREDATA,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientSignature",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionRequest, clientSignature) - offsetof(UA_ActivateSessionRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_SIGNEDSOFTWARECERTIFICATE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientSoftwareCertificates",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionRequest, clientSoftwareCertificatesSize) - offsetof(UA_ActivateSessionRequest, clientSignature) - sizeof(UA_SignatureData),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "localeIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionRequest, localeIdsSize) - offsetof(UA_ActivateSessionRequest, clientSoftwareCertificates) - sizeof(void*),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userIdentityToken",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionRequest, userIdentityToken) - offsetof(UA_ActivateSessionRequest, localeIds) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_SIGNATUREDATA,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userTokenSignature",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionRequest, userTokenSignature) - offsetof(UA_ActivateSessionRequest, userIdentityToken) - sizeof(UA_ExtensionObject),
    .isArray = false
  },};

/* OpenSecureChannelResponse */
static UA_DataTypeMember OpenSecureChannelResponse_members[4] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverProtocolVersion",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - offsetof(UA_OpenSecureChannelResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_CHANNELSECURITYTOKEN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "securityToken",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelResponse, securityToken) - offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverNonce",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelResponse, serverNonce) - offsetof(UA_OpenSecureChannelResponse, securityToken) - sizeof(UA_ChannelSecurityToken),
    .isArray = false
  },};

/* ApplicationType */
static UA_DataTypeMember ApplicationType_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* QueryNextResponse */
static UA_DataTypeMember QueryNextResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUERYDATASET,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "queryDataSets",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryNextResponse, queryDataSetsSize) - offsetof(UA_QueryNextResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedContinuationPoint",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryNextResponse, revisedContinuationPoint) - offsetof(UA_QueryNextResponse, queryDataSets) - sizeof(void*),
    .isArray = false
  },};

/* ActivateSessionResponse */
static UA_DataTypeMember ActivateSessionResponse_members[4] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverNonce",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionResponse, serverNonce) - offsetof(UA_ActivateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionResponse, resultsSize) - offsetof(UA_ActivateSessionResponse, serverNonce) - sizeof(UA_ByteString),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ActivateSessionResponse, diagnosticInfosSize) - offsetof(UA_ActivateSessionResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* FilterOperator */
static UA_DataTypeMember FilterOperator_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* QueryNextRequest */
static UA_DataTypeMember QueryNextRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "releaseContinuationPoint",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryNextRequest, releaseContinuationPoint) - offsetof(UA_QueryNextRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "continuationPoint",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryNextRequest, continuationPoint) - offsetof(UA_QueryNextRequest, releaseContinuationPoint) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* BrowseNextRequest */
static UA_DataTypeMember BrowseNextRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "releaseContinuationPoints",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - offsetof(UA_BrowseNextRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "continuationPoints",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseNextRequest, continuationPointsSize) - offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - sizeof(UA_Boolean),
    .isArray = true
  },};

/* CreateSubscriptionRequest */
static UA_DataTypeMember CreateSubscriptionRequest_members[7] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedPublishingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - offsetof(UA_CreateSubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedLifetimeCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedMaxKeepAliveCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxNotificationsPerPublish",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "publishingEnabled",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "priority",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionRequest, priority) - offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* VariableTypeAttributes */
static UA_DataTypeMember VariableTypeAttributes_members[10] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, displayName) - offsetof(UA_VariableTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, description) - offsetof(UA_VariableTypeAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, writeMask) - offsetof(UA_VariableTypeAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, userWriteMask) - offsetof(UA_VariableTypeAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "value",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, value) - offsetof(UA_VariableTypeAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, dataType) - offsetof(UA_VariableTypeAttributes, value) - sizeof(UA_Variant),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "valueRank",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, valueRank) - offsetof(UA_VariableTypeAttributes, dataType) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "arrayDimensions",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, arrayDimensionsSize) - offsetof(UA_VariableTypeAttributes, valueRank) - sizeof(UA_Int32),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isAbstract",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_VariableTypeAttributes, isAbstract) - offsetof(UA_VariableTypeAttributes, arrayDimensions) - sizeof(void*),
    .isArray = false
  },};

/* BrowsePathResult */
static UA_DataTypeMember BrowsePathResult_members[2] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSEPATHTARGET,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targets",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowsePathResult, targetsSize) - offsetof(UA_BrowsePathResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = true
  },};

/* ModifySubscriptionResponse */
static UA_DataTypeMember ModifySubscriptionResponse_members[4] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedPublishingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - offsetof(UA_ModifySubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedLifetimeCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedMaxKeepAliveCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* RegisterNodesResponse */
static UA_DataTypeMember RegisterNodesResponse_members[2] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "registeredNodeIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RegisterNodesResponse, registeredNodeIdsSize) - offsetof(UA_RegisterNodesResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },};

/* CloseSessionRequest */
static UA_DataTypeMember CloseSessionRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "deleteSubscriptions",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CloseSessionRequest, deleteSubscriptions) - offsetof(UA_CloseSessionRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },};

/* ModifySubscriptionRequest */
static UA_DataTypeMember ModifySubscriptionRequest_members[7] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionRequest, subscriptionId) - offsetof(UA_ModifySubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedPublishingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - offsetof(UA_ModifySubscriptionRequest, subscriptionId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedLifetimeCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedMaxKeepAliveCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxNotificationsPerPublish",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "priority",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifySubscriptionRequest, priority) - offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* UserTokenPolicy */
static UA_DataTypeMember UserTokenPolicy_members[5] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "policyId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_USERTOKENTYPE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "tokenType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserTokenPolicy, tokenType) - offsetof(UA_UserTokenPolicy, policyId) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "issuedTokenType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserTokenPolicy, issuedTokenType) - offsetof(UA_UserTokenPolicy, tokenType) - sizeof(UA_UserTokenType),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "issuerEndpointUrl",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - offsetof(UA_UserTokenPolicy, issuedTokenType) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "securityPolicyUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_UserTokenPolicy, securityPolicyUri) - offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - sizeof(UA_String),
    .isArray = false
  },};

/* DeleteMonitoredItemsRequest */
static UA_DataTypeMember DeleteMonitoredItemsRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - offsetof(UA_DeleteMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "monitoredItemIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteMonitoredItemsRequest, monitoredItemIdsSize) - offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32),
    .isArray = true
  },};

/* ReferenceTypeAttributes */
static UA_DataTypeMember ReferenceTypeAttributes_members[8] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, displayName) - offsetof(UA_ReferenceTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, description) - offsetof(UA_ReferenceTypeAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, writeMask) - offsetof(UA_ReferenceTypeAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, userWriteMask) - offsetof(UA_ReferenceTypeAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isAbstract",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, isAbstract) - offsetof(UA_ReferenceTypeAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "symmetric",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, symmetric) - offsetof(UA_ReferenceTypeAttributes, isAbstract) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "inverseName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceTypeAttributes, inverseName) - offsetof(UA_ReferenceTypeAttributes, symmetric) - sizeof(UA_Boolean),
    .isArray = false
  },};

/* BrowsePath */
static UA_DataTypeMember BrowsePath_members[2] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "startingNode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_RELATIVEPATH,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "relativePath",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowsePath, relativePath) - offsetof(UA_BrowsePath, startingNode) - sizeof(UA_NodeId),
    .isArray = false
  },};

/* UnregisterNodesResponse */
static UA_DataTypeMember UnregisterNodesResponse_members[1] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* WriteRequest */
static UA_DataTypeMember WriteRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_WRITEVALUE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToWrite",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_WriteRequest, nodesToWriteSize) - offsetof(UA_WriteRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* ObjectAttributes */
static UA_DataTypeMember ObjectAttributes_members[6] = {
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "specifiedAttributes",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectAttributes, displayName) - offsetof(UA_ObjectAttributes, specifiedAttributes) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "description",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectAttributes, description) - offsetof(UA_ObjectAttributes, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writeMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectAttributes, writeMask) - offsetof(UA_ObjectAttributes, description) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userWriteMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectAttributes, userWriteMask) - offsetof(UA_ObjectAttributes, writeMask) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "eventNotifier",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ObjectAttributes, eventNotifier) - offsetof(UA_ObjectAttributes, userWriteMask) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* BrowseDescription */
static UA_DataTypeMember BrowseDescription_members[6] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSEDIRECTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "browseDirection",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseDescription, browseDirection) - offsetof(UA_BrowseDescription, nodeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseDescription, referenceTypeId) - offsetof(UA_BrowseDescription, browseDirection) - sizeof(UA_BrowseDirection),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "includeSubtypes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseDescription, includeSubtypes) - offsetof(UA_BrowseDescription, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeClassMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseDescription, nodeClassMask) - offsetof(UA_BrowseDescription, includeSubtypes) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "resultMask",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseDescription, resultMask) - offsetof(UA_BrowseDescription, nodeClassMask) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* RepublishRequest */
static UA_DataTypeMember RepublishRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RepublishRequest, subscriptionId) - offsetof(UA_RepublishRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "retransmitSequenceNumber",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RepublishRequest, retransmitSequenceNumber) - offsetof(UA_RepublishRequest, subscriptionId) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* GetEndpointsRequest */
static UA_DataTypeMember GetEndpointsRequest_members[4] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "endpointUrl",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_GetEndpointsRequest, endpointUrl) - offsetof(UA_GetEndpointsRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "localeIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_GetEndpointsRequest, localeIdsSize) - offsetof(UA_GetEndpointsRequest, endpointUrl) - sizeof(UA_String),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "profileUris",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_GetEndpointsRequest, profileUrisSize) - offsetof(UA_GetEndpointsRequest, localeIds) - sizeof(void*),
    .isArray = true
  },};

/* PublishRequest */
static UA_DataTypeMember PublishRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionAcknowledgements",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_PublishRequest, subscriptionAcknowledgementsSize) - offsetof(UA_PublishRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* AddNodesResponse */
static UA_DataTypeMember AddNodesResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_ADDNODESRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesResponse, resultsSize) - offsetof(UA_AddNodesResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesResponse, diagnosticInfosSize) - offsetof(UA_AddNodesResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* CloseSecureChannelResponse */
static UA_DataTypeMember CloseSecureChannelResponse_members[1] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ModifyMonitoredItemsRequest */
static UA_DataTypeMember ModifyMonitoredItemsRequest_members[4] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - offsetof(UA_ModifyMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_TIMESTAMPSTORETURN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timestampsToReturn",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITOREDITEMMODIFYREQUEST,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "itemsToModify",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifyMonitoredItemsRequest, itemsToModifySize) - offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn),
    .isArray = true
  },};

/* FindServersRequest */
static UA_DataTypeMember FindServersRequest_members[4] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "endpointUrl",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_FindServersRequest, endpointUrl) - offsetof(UA_FindServersRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "localeIds",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_FindServersRequest, localeIdsSize) - offsetof(UA_FindServersRequest, endpointUrl) - sizeof(UA_String),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverUris",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_FindServersRequest, serverUrisSize) - offsetof(UA_FindServersRequest, localeIds) - sizeof(void*),
    .isArray = true
  },};

/* ReferenceDescription */
static UA_DataTypeMember ReferenceDescription_members[7] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isForward",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceDescription, isForward) - offsetof(UA_ReferenceDescription, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceDescription, nodeId) - offsetof(UA_ReferenceDescription, isForward) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUALIFIEDNAME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "browseName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceDescription, browseName) - offsetof(UA_ReferenceDescription, nodeId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "displayName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceDescription, displayName) - offsetof(UA_ReferenceDescription, browseName) - sizeof(UA_QualifiedName),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODECLASS,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeClass",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceDescription, nodeClass) - offsetof(UA_ReferenceDescription, displayName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "typeDefinition",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReferenceDescription, typeDefinition) - offsetof(UA_ReferenceDescription, nodeClass) - sizeof(UA_NodeClass),
    .isArray = false
  },};

/* SetPublishingModeResponse */
static UA_DataTypeMember SetPublishingModeResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SetPublishingModeResponse, resultsSize) - offsetof(UA_SetPublishingModeResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_SetPublishingModeResponse, diagnosticInfosSize) - offsetof(UA_SetPublishingModeResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* ContentFilterResult */
static UA_DataTypeMember ContentFilterResult_members[2] = {
  { .memberTypeIndex = UA_TYPES_CONTENTFILTERELEMENTRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "elementResults",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "elementDiagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ContentFilterResult, elementDiagnosticInfosSize) - offsetof(UA_ContentFilterResult, elementResults) - sizeof(void*),
    .isArray = true
  },};

/* AddReferencesItem */
static UA_DataTypeMember AddReferencesItem_members[6] = {
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "sourceNodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesItem, referenceTypeId) - offsetof(UA_AddReferencesItem, sourceNodeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "isForward",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesItem, isForward) - offsetof(UA_AddReferencesItem, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetServerUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesItem, targetServerUri) - offsetof(UA_AddReferencesItem, isForward) - sizeof(UA_Boolean),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetNodeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesItem, targetNodeId) - offsetof(UA_AddReferencesItem, targetServerUri) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODECLASS,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "targetNodeClass",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesItem, targetNodeClass) - offsetof(UA_AddReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },};

/* QueryDataDescription */
static UA_DataTypeMember QueryDataDescription_members[3] = {
  { .memberTypeIndex = UA_TYPES_RELATIVEPATH,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "relativePath",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "attributeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryDataDescription, attributeId) - offsetof(UA_QueryDataDescription, relativePath) - sizeof(UA_RelativePath),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "indexRange",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryDataDescription, indexRange) - offsetof(UA_QueryDataDescription, attributeId) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* CreateSubscriptionResponse */
static UA_DataTypeMember CreateSubscriptionResponse_members[5] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionResponse, subscriptionId) - offsetof(UA_CreateSubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedPublishingInterval",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - offsetof(UA_CreateSubscriptionResponse, subscriptionId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedLifetimeCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedMaxKeepAliveCount",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* DeleteSubscriptionsResponse */
static UA_DataTypeMember DeleteSubscriptionsResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteSubscriptionsResponse, resultsSize) - offsetof(UA_DeleteSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_DeleteSubscriptionsResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* WriteResponse */
static UA_DataTypeMember WriteResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_WriteResponse, resultsSize) - offsetof(UA_WriteResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_WriteResponse, diagnosticInfosSize) - offsetof(UA_WriteResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* DeleteReferencesResponse */
static UA_DataTypeMember DeleteReferencesResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesResponse, resultsSize) - offsetof(UA_DeleteReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesResponse, diagnosticInfosSize) - offsetof(UA_DeleteReferencesResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* CreateMonitoredItemsResponse */
static UA_DataTypeMember CreateMonitoredItemsResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITOREDITEMCREATERESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateMonitoredItemsResponse, resultsSize) - offsetof(UA_CreateMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_CreateMonitoredItemsResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* CallResponse */
static UA_DataTypeMember CallResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_CALLMETHODRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallResponse, resultsSize) - offsetof(UA_CallResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CallResponse, diagnosticInfosSize) - offsetof(UA_CallResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* DeleteNodesResponse */
static UA_DataTypeMember DeleteNodesResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteNodesResponse, resultsSize) - offsetof(UA_DeleteNodesResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteNodesResponse, diagnosticInfosSize) - offsetof(UA_DeleteNodesResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* RepublishResponse */
static UA_DataTypeMember RepublishResponse_members[2] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NOTIFICATIONMESSAGE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "notificationMessage",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_RepublishResponse, notificationMessage) - offsetof(UA_RepublishResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },};

/* MonitoredItemCreateRequest */
static UA_DataTypeMember MonitoredItemCreateRequest_members[3] = {
  { .memberTypeIndex = UA_TYPES_READVALUEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "itemToMonitor",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITORINGMODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "monitoringMode",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - offsetof(UA_MonitoredItemCreateRequest, itemToMonitor) - sizeof(UA_ReadValueId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITORINGPARAMETERS,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedParameters",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_MonitoredItemCreateRequest, requestedParameters) - offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - sizeof(UA_MonitoringMode),
    .isArray = false
  },};

/* DeleteReferencesRequest */
static UA_DataTypeMember DeleteReferencesRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DELETEREFERENCESITEM,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referencesToDelete",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_DeleteReferencesRequest, referencesToDeleteSize) - offsetof(UA_DeleteReferencesRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* ModifyMonitoredItemsResponse */
static UA_DataTypeMember ModifyMonitoredItemsResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITOREDITEMMODIFYRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifyMonitoredItemsResponse, resultsSize) - offsetof(UA_ModifyMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ModifyMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_ModifyMonitoredItemsResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* ReadResponse */
static UA_DataTypeMember ReadResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATAVALUE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadResponse, resultsSize) - offsetof(UA_ReadResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadResponse, diagnosticInfosSize) - offsetof(UA_ReadResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* AddReferencesRequest */
static UA_DataTypeMember AddReferencesRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_ADDREFERENCESITEM,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referencesToAdd",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesRequest, referencesToAddSize) - offsetof(UA_AddReferencesRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* ReadRequest */
static UA_DataTypeMember ReadRequest_members[4] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxAge",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadRequest, maxAge) - offsetof(UA_ReadRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_TIMESTAMPSTORETURN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timestampsToReturn",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadRequest, timestampsToReturn) - offsetof(UA_ReadRequest, maxAge) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_READVALUEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToRead",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ReadRequest, nodesToReadSize) - offsetof(UA_ReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn),
    .isArray = true
  },};

/* OpenSecureChannelRequest */
static UA_DataTypeMember OpenSecureChannelRequest_members[6] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientProtocolVersion",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - offsetof(UA_OpenSecureChannelRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_SECURITYTOKENREQUESTTYPE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelRequest, requestType) - offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MESSAGESECURITYMODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "securityMode",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelRequest, securityMode) - offsetof(UA_OpenSecureChannelRequest, requestType) - sizeof(UA_SecurityTokenRequestType),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientNonce",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelRequest, clientNonce) - offsetof(UA_OpenSecureChannelRequest, securityMode) - sizeof(UA_MessageSecurityMode),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedLifetime",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_OpenSecureChannelRequest, requestedLifetime) - offsetof(UA_OpenSecureChannelRequest, clientNonce) - sizeof(UA_ByteString),
    .isArray = false
  },};

/* AddNodesItem */
static UA_DataTypeMember AddNodesItem_members[7] = {
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "parentNodeId",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "referenceTypeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesItem, referenceTypeId) - offsetof(UA_AddNodesItem, parentNodeId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedNewNodeId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesItem, requestedNewNodeId) - offsetof(UA_AddNodesItem, referenceTypeId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUALIFIEDNAME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "browseName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesItem, browseName) - offsetof(UA_AddNodesItem, requestedNewNodeId) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODECLASS,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeClass",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesItem, nodeClass) - offsetof(UA_AddNodesItem, browseName) - sizeof(UA_QualifiedName),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeAttributes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesItem, nodeAttributes) - offsetof(UA_AddNodesItem, nodeClass) - sizeof(UA_NodeClass),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "typeDefinition",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesItem, typeDefinition) - offsetof(UA_AddNodesItem, nodeAttributes) - sizeof(UA_ExtensionObject),
    .isArray = false
  },};

/* ApplicationDescription */
static UA_DataTypeMember ApplicationDescription_members[7] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "applicationUri",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "productUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ApplicationDescription, productUri) - offsetof(UA_ApplicationDescription, applicationUri) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "applicationName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ApplicationDescription, applicationName) - offsetof(UA_ApplicationDescription, productUri) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_APPLICATIONTYPE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "applicationType",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ApplicationDescription, applicationType) - offsetof(UA_ApplicationDescription, applicationName) - sizeof(UA_LocalizedText),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "gatewayServerUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ApplicationDescription, gatewayServerUri) - offsetof(UA_ApplicationDescription, applicationType) - sizeof(UA_ApplicationType),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "discoveryProfileUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ApplicationDescription, discoveryProfileUri) - offsetof(UA_ApplicationDescription, gatewayServerUri) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "discoveryUrls",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ApplicationDescription, discoveryUrlsSize) - offsetof(UA_ApplicationDescription, discoveryProfileUri) - sizeof(UA_String),
    .isArray = true
  },};

/* NodeTypeDescription */
static UA_DataTypeMember NodeTypeDescription_members[3] = {
  { .memberTypeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "typeDefinitionNode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "includeSubTypes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NodeTypeDescription, includeSubTypes) - offsetof(UA_NodeTypeDescription, typeDefinitionNode) - sizeof(UA_ExpandedNodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUERYDATADESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "dataToReturn",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_NodeTypeDescription, dataToReturnSize) - offsetof(UA_NodeTypeDescription, includeSubTypes) - sizeof(UA_Boolean),
    .isArray = true
  },};

/* FindServersResponse */
static UA_DataTypeMember FindServersResponse_members[2] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_APPLICATIONDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "servers",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_FindServersResponse, serversSize) - offsetof(UA_FindServersResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },};

/* ServerStatusDataType */
static UA_DataTypeMember ServerStatusDataType_members[6] = {
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "startTime",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "currentTime",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ServerStatusDataType, currentTime) - offsetof(UA_ServerStatusDataType, startTime) - sizeof(UA_DateTime),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_SERVERSTATE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "state",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ServerStatusDataType, state) - offsetof(UA_ServerStatusDataType, currentTime) - sizeof(UA_DateTime),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BUILDINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "buildInfo",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ServerStatusDataType, buildInfo) - offsetof(UA_ServerStatusDataType, state) - sizeof(UA_ServerState),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "secondsTillShutdown",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ServerStatusDataType, secondsTillShutdown) - offsetof(UA_ServerStatusDataType, buildInfo) - sizeof(UA_BuildInfo),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "shutdownReason",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ServerStatusDataType, shutdownReason) - offsetof(UA_ServerStatusDataType, secondsTillShutdown) - sizeof(UA_UInt32),
    .isArray = false
  },};

/* AddReferencesResponse */
static UA_DataTypeMember AddReferencesResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesResponse, resultsSize) - offsetof(UA_AddReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddReferencesResponse, diagnosticInfosSize) - offsetof(UA_AddReferencesResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSEPATHRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, resultsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, diagnosticInfosSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* ContentFilterElement */
static UA_DataTypeMember ContentFilterElement_members[2] = {
  { .memberTypeIndex = UA_TYPES_FILTEROPERATOR,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filterOperator",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filterOperands",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_ContentFilterElement, filterOperandsSize) - offsetof(UA_ContentFilterElement, filterOperator) - sizeof(UA_FilterOperator),
    .isArray = true
  },};

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSEPATH,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "browsePaths",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, browsePathsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* CloseSessionResponse */
static UA_DataTypeMember CloseSessionResponse_members[1] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ServiceFault */
static UA_DataTypeMember ServiceFault_members[1] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* CreateMonitoredItemsRequest */
static UA_DataTypeMember CreateMonitoredItemsRequest_members[4] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subscriptionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - offsetof(UA_CreateMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_TIMESTAMPSTORETURN,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "timestampsToReturn",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MONITOREDITEMCREATEREQUEST,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "itemsToCreate",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateMonitoredItemsRequest, itemsToCreateSize) - offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn),
    .isArray = true
  },};

/* ContentFilter */
static UA_DataTypeMember ContentFilter_members[1] = {
  { .memberTypeIndex = UA_TYPES_CONTENTFILTERELEMENT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "elements",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = true
  },};

/* QueryFirstResponse */
static UA_DataTypeMember QueryFirstResponse_members[6] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_QUERYDATASET,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "queryDataSets",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstResponse, queryDataSetsSize) - offsetof(UA_QueryFirstResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "continuationPoint",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstResponse, continuationPoint) - offsetof(UA_QueryFirstResponse, queryDataSets) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_PARSINGRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "parsingResults",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstResponse, parsingResultsSize) - offsetof(UA_QueryFirstResponse, continuationPoint) - sizeof(UA_ByteString),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstResponse, diagnosticInfosSize) - offsetof(UA_QueryFirstResponse, parsingResults) - sizeof(void*),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_CONTENTFILTERRESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filterResult",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstResponse, filterResult) - offsetof(UA_QueryFirstResponse, diagnosticInfos) - sizeof(void*),
    .isArray = false
  },};

/* AddNodesRequest */
static UA_DataTypeMember AddNodesRequest_members[2] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_ADDNODESITEM,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToAdd",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_AddNodesRequest, nodesToAddSize) - offsetof(UA_AddNodesRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = true
  },};

/* BrowseRequest */
static UA_DataTypeMember BrowseRequest_members[4] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_VIEWDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "view",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseRequest, view) - offsetof(UA_BrowseRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedMaxReferencesPerNode",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - offsetof(UA_BrowseRequest, view) - sizeof(UA_ViewDescription),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSEDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodesToBrowse",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseRequest, nodesToBrowseSize) - offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - sizeof(UA_UInt32),
    .isArray = true
  },};

/* BrowseResult */
static UA_DataTypeMember BrowseResult_members[3] = {
  { .memberTypeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "statusCode",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "continuationPoint",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseResult, continuationPoint) - offsetof(UA_BrowseResult, statusCode) - sizeof(UA_StatusCode),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_REFERENCEDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "references",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseResult, referencesSize) - offsetof(UA_BrowseResult, continuationPoint) - sizeof(UA_ByteString),
    .isArray = true
  },};

/* CreateSessionRequest */
static UA_DataTypeMember CreateSessionRequest_members[9] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_APPLICATIONDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientDescription",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, clientDescription) - offsetof(UA_CreateSessionRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, serverUri) - offsetof(UA_CreateSessionRequest, clientDescription) - sizeof(UA_ApplicationDescription),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "endpointUrl",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, endpointUrl) - offsetof(UA_CreateSessionRequest, serverUri) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "sessionName",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, sessionName) - offsetof(UA_CreateSessionRequest, endpointUrl) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientNonce",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, clientNonce) - offsetof(UA_CreateSessionRequest, sessionName) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "clientCertificate",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, clientCertificate) - offsetof(UA_CreateSessionRequest, clientNonce) - sizeof(UA_ByteString),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestedSessionTimeout",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - offsetof(UA_CreateSessionRequest, clientCertificate) - sizeof(UA_ByteString),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxResponseMessageSize",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionRequest, maxResponseMessageSize) - offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - sizeof(UA_Double),
    .isArray = false
  },};

/* EndpointDescription */
static UA_DataTypeMember EndpointDescription_members[8] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "endpointUrl",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_APPLICATIONDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "server",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, server) - offsetof(UA_EndpointDescription, endpointUrl) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverCertificate",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, serverCertificate) - offsetof(UA_EndpointDescription, server) - sizeof(UA_ApplicationDescription),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_MESSAGESECURITYMODE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "securityMode",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, securityMode) - offsetof(UA_EndpointDescription, serverCertificate) - sizeof(UA_ByteString),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "securityPolicyUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, securityPolicyUri) - offsetof(UA_EndpointDescription, securityMode) - sizeof(UA_MessageSecurityMode),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_USERTOKENPOLICY,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "userIdentityTokens",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, userIdentityTokensSize) - offsetof(UA_EndpointDescription, securityPolicyUri) - sizeof(UA_String),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "transportProfileUri",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, transportProfileUri) - offsetof(UA_EndpointDescription, userIdentityTokens) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "securityLevel",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_EndpointDescription, securityLevel) - offsetof(UA_EndpointDescription, transportProfileUri) - sizeof(UA_String),
    .isArray = false
  },};

/* GetEndpointsResponse */
static UA_DataTypeMember GetEndpointsResponse_members[2] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_ENDPOINTDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "endpoints",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_GetEndpointsResponse, endpointsSize) - offsetof(UA_GetEndpointsResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },};

/* BrowseNextResponse */
static UA_DataTypeMember BrowseNextResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSERESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseNextResponse, resultsSize) - offsetof(UA_BrowseNextResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseNextResponse, diagnosticInfosSize) - offsetof(UA_BrowseNextResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* BrowseResponse */
static UA_DataTypeMember BrowseResponse_members[3] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BROWSERESULT,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "results",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseResponse, resultsSize) - offsetof(UA_BrowseResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "diagnosticInfos",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_BrowseResponse, diagnosticInfosSize) - offsetof(UA_BrowseResponse, results) - sizeof(void*),
    .isArray = true
  },};

/* CreateSessionResponse */
static UA_DataTypeMember CreateSessionResponse_members[10] = {
  { .memberTypeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "responseHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "sessionId",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, sessionId) - offsetof(UA_CreateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "authenticationToken",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, authenticationToken) - offsetof(UA_CreateSessionResponse, sessionId) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "revisedSessionTimeout",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - offsetof(UA_CreateSessionResponse, authenticationToken) - sizeof(UA_NodeId),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverNonce",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, serverNonce) - offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - sizeof(UA_Double),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverCertificate",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, serverCertificate) - offsetof(UA_CreateSessionResponse, serverNonce) - sizeof(UA_ByteString),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_ENDPOINTDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverEndpoints",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, serverEndpointsSize) - offsetof(UA_CreateSessionResponse, serverCertificate) - sizeof(UA_ByteString),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_SIGNEDSOFTWARECERTIFICATE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverSoftwareCertificates",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, serverSoftwareCertificatesSize) - offsetof(UA_CreateSessionResponse, serverEndpoints) - sizeof(void*),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_SIGNATUREDATA,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "serverSignature",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, serverSignature) - offsetof(UA_CreateSessionResponse, serverSoftwareCertificates) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxRequestMessageSize",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_CreateSessionResponse, maxRequestMessageSize) - offsetof(UA_CreateSessionResponse, serverSignature) - sizeof(UA_SignatureData),
    .isArray = false
  },};

/* QueryFirstRequest */
static UA_DataTypeMember QueryFirstRequest_members[6] = {
  { .memberTypeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "requestHeader",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_VIEWDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "view",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstRequest, view) - offsetof(UA_QueryFirstRequest, requestHeader) - sizeof(UA_RequestHeader),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_NODETYPEDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "nodeTypes",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstRequest, nodeTypesSize) - offsetof(UA_QueryFirstRequest, view) - sizeof(UA_ViewDescription),
    .isArray = true
  },
  { .memberTypeIndex = UA_TYPES_CONTENTFILTER,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "filter",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstRequest, filter) - offsetof(UA_QueryFirstRequest, nodeTypes) - sizeof(void*),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxDataSetsToReturn",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - offsetof(UA_QueryFirstRequest, filter) - sizeof(UA_ContentFilter),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "maxReferencesToReturn",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_QueryFirstRequest, maxReferencesToReturn) - offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - sizeof(UA_UInt32),
    .isArray = false
  },};
const UA_DataType UA_TYPES[UA_TYPES_COUNT] = {

/* Boolean */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 1},
  .typeIndex = UA_TYPES_BOOLEAN,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Boolean",
#endif
  .memSize = sizeof(UA_Boolean),
  .builtin = true,
  .fixedSize = true,
  .overlayable = true,
  .membersSize = 1,
  .members = Boolean_members },

/* SByte */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 2},
  .typeIndex = UA_TYPES_SBYTE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SByte",
#endif
  .memSize = sizeof(UA_SByte),
  .builtin = true,
  .fixedSize = true,
  .overlayable = true,
  .membersSize = 1,
  .members = SByte_members },

/* Byte */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 3},
  .typeIndex = UA_TYPES_BYTE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Byte",
#endif
  .memSize = sizeof(UA_Byte),
  .builtin = true,
  .fixedSize = true,
  .overlayable = true,
  .membersSize = 1,
  .members = Byte_members },

/* Int16 */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 4},
  .typeIndex = UA_TYPES_INT16,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Int16",
#endif
  .memSize = sizeof(UA_Int16),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = Int16_members },

/* UInt16 */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 5},
  .typeIndex = UA_TYPES_UINT16,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UInt16",
#endif
  .memSize = sizeof(UA_UInt16),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = UInt16_members },

/* Int32 */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Int32",
#endif
  .memSize = sizeof(UA_Int32),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = Int32_members },

/* UInt32 */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 7},
  .typeIndex = UA_TYPES_UINT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UInt32",
#endif
  .memSize = sizeof(UA_UInt32),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = UInt32_members },

/* Int64 */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 8},
  .typeIndex = UA_TYPES_INT64,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Int64",
#endif
  .memSize = sizeof(UA_Int64),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = Int64_members },

/* UInt64 */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 9},
  .typeIndex = UA_TYPES_UINT64,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UInt64",
#endif
  .memSize = sizeof(UA_UInt64),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = UInt64_members },

/* Float */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 10},
  .typeIndex = UA_TYPES_FLOAT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Float",
#endif
  .memSize = sizeof(UA_Float),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_FLOAT,
  .membersSize = 1,
  .members = Float_members },

/* Double */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 11},
  .typeIndex = UA_TYPES_DOUBLE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Double",
#endif
  .memSize = sizeof(UA_Double),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_FLOAT,
  .membersSize = 1,
  .members = Double_members },

/* String */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 12},
  .typeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "String",
#endif
  .memSize = sizeof(UA_String),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = String_members },

/* DateTime */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 13},
  .typeIndex = UA_TYPES_DATETIME,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DateTime",
#endif
  .memSize = sizeof(UA_DateTime),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = DateTime_members },

/* Guid */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 14},
  .typeIndex = UA_TYPES_GUID,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Guid",
#endif
  .memSize = sizeof(UA_Guid),
  .builtin = true,
  .fixedSize = true,
  .overlayable = (UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_Guid, data2) == sizeof(UA_UInt32) && offsetof(UA_Guid, data3) == (sizeof(UA_UInt16) + sizeof(UA_UInt32)) && offsetof(UA_Guid, data4) == (2*sizeof(UA_UInt32))),
  .membersSize = 1,
  .members = Guid_members },

/* ByteString */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 15},
  .typeIndex = UA_TYPES_BYTESTRING,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ByteString",
#endif
  .memSize = sizeof(UA_ByteString),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = ByteString_members },

/* XmlElement */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 16},
  .typeIndex = UA_TYPES_XMLELEMENT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "XmlElement",
#endif
  .memSize = sizeof(UA_XmlElement),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = XmlElement_members },

/* NodeId */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 17},
  .typeIndex = UA_TYPES_NODEID,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "NodeId",
#endif
  .memSize = sizeof(UA_NodeId),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = NodeId_members },

/* ExpandedNodeId */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 18},
  .typeIndex = UA_TYPES_EXPANDEDNODEID,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ExpandedNodeId",
#endif
  .memSize = sizeof(UA_ExpandedNodeId),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = ExpandedNodeId_members },

/* StatusCode */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 19},
  .typeIndex = UA_TYPES_STATUSCODE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "StatusCode",
#endif
  .memSize = sizeof(UA_StatusCode),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = StatusCode_members },

/* QualifiedName */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 20},
  .typeIndex = UA_TYPES_QUALIFIEDNAME,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QualifiedName",
#endif
  .memSize = sizeof(UA_QualifiedName),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = QualifiedName_members },

/* LocalizedText */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 21},
  .typeIndex = UA_TYPES_LOCALIZEDTEXT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "LocalizedText",
#endif
  .memSize = sizeof(UA_LocalizedText),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = LocalizedText_members },

/* ExtensionObject */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 22},
  .typeIndex = UA_TYPES_EXTENSIONOBJECT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ExtensionObject",
#endif
  .memSize = sizeof(UA_ExtensionObject),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = ExtensionObject_members },

/* DataValue */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 23},
  .typeIndex = UA_TYPES_DATAVALUE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DataValue",
#endif
  .memSize = sizeof(UA_DataValue),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = DataValue_members },

/* Variant */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 24},
  .typeIndex = UA_TYPES_VARIANT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Variant",
#endif
  .memSize = sizeof(UA_Variant),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = Variant_members },

/* DiagnosticInfo */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 25},
  .typeIndex = UA_TYPES_DIAGNOSTICINFO,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DiagnosticInfo",
#endif
  .memSize = sizeof(UA_DiagnosticInfo),
  .builtin = true,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = DiagnosticInfo_members },

/* SignedSoftwareCertificate */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 344},
  .typeIndex = UA_TYPES_SIGNEDSOFTWARECERTIFICATE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SignedSoftwareCertificate",
#endif
  .memSize = sizeof(UA_SignedSoftwareCertificate),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = SignedSoftwareCertificate_members },

/* BrowsePathTarget */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 546},
  .typeIndex = UA_TYPES_BROWSEPATHTARGET,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowsePathTarget",
#endif
  .memSize = sizeof(UA_BrowsePathTarget),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = BrowsePathTarget_members },

/* ViewAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 373},
  .typeIndex = UA_TYPES_VIEWATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ViewAttributes",
#endif
  .memSize = sizeof(UA_ViewAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = ViewAttributes_members },

/* BrowseResultMask */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseResultMask",
#endif
  .memSize = sizeof(UA_BrowseResultMask),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = BrowseResultMask_members },

/* RequestHeader */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 389},
  .typeIndex = UA_TYPES_REQUESTHEADER,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RequestHeader",
#endif
  .memSize = sizeof(UA_RequestHeader),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = RequestHeader_members },

/* MonitoredItemModifyResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 758},
  .typeIndex = UA_TYPES_MONITOREDITEMMODIFYRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoredItemModifyResult",
#endif
  .memSize = sizeof(UA_MonitoredItemModifyResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = MonitoredItemModifyResult_members },

/* ViewDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 511},
  .typeIndex = UA_TYPES_VIEWDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ViewDescription",
#endif
  .memSize = sizeof(UA_ViewDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = ViewDescription_members },

/* CloseSecureChannelRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 450},
  .typeIndex = UA_TYPES_CLOSESECURECHANNELREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CloseSecureChannelRequest",
#endif
  .memSize = sizeof(UA_CloseSecureChannelRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = CloseSecureChannelRequest_members },

/* AddNodesResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 483},
  .typeIndex = UA_TYPES_ADDNODESRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddNodesResult",
#endif
  .memSize = sizeof(UA_AddNodesResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = AddNodesResult_members },

/* VariableAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 355},
  .typeIndex = UA_TYPES_VARIABLEATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "VariableAttributes",
#endif
  .memSize = sizeof(UA_VariableAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 13,
  .members = VariableAttributes_members },

/* NotificationMessage */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 803},
  .typeIndex = UA_TYPES_NOTIFICATIONMESSAGE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "NotificationMessage",
#endif
  .memSize = sizeof(UA_NotificationMessage),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = NotificationMessage_members },

/* NodeAttributesMask */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "NodeAttributesMask",
#endif
  .memSize = sizeof(UA_NodeAttributesMask),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = NodeAttributesMask_members },

/* MonitoringMode */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoringMode",
#endif
  .memSize = sizeof(UA_MonitoringMode),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = MonitoringMode_members },

/* CallMethodResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 707},
  .typeIndex = UA_TYPES_CALLMETHODRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CallMethodResult",
#endif
  .memSize = sizeof(UA_CallMethodResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = CallMethodResult_members },

/* ParsingResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 610},
  .typeIndex = UA_TYPES_PARSINGRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ParsingResult",
#endif
  .memSize = sizeof(UA_ParsingResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = ParsingResult_members },

/* RelativePathElement */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 537},
  .typeIndex = UA_TYPES_RELATIVEPATHELEMENT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RelativePathElement",
#endif
  .memSize = sizeof(UA_RelativePathElement),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = RelativePathElement_members },

/* BrowseDirection */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseDirection",
#endif
  .memSize = sizeof(UA_BrowseDirection),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = BrowseDirection_members },

/* CallMethodRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 704},
  .typeIndex = UA_TYPES_CALLMETHODREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CallMethodRequest",
#endif
  .memSize = sizeof(UA_CallMethodRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = CallMethodRequest_members },

/* ServerState */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ServerState",
#endif
  .memSize = sizeof(UA_ServerState),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = ServerState_members },

/* UnregisterNodesRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 564},
  .typeIndex = UA_TYPES_UNREGISTERNODESREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UnregisterNodesRequest",
#endif
  .memSize = sizeof(UA_UnregisterNodesRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = UnregisterNodesRequest_members },

/* ContentFilterElementResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 604},
  .typeIndex = UA_TYPES_CONTENTFILTERELEMENTRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ContentFilterElementResult",
#endif
  .memSize = sizeof(UA_ContentFilterElementResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = ContentFilterElementResult_members },

/* QueryDataSet */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 577},
  .typeIndex = UA_TYPES_QUERYDATASET,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QueryDataSet",
#endif
  .memSize = sizeof(UA_QueryDataSet),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = QueryDataSet_members },

/* SetPublishingModeRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 797},
  .typeIndex = UA_TYPES_SETPUBLISHINGMODEREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SetPublishingModeRequest",
#endif
  .memSize = sizeof(UA_SetPublishingModeRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = SetPublishingModeRequest_members },

/* TimestampsToReturn */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "TimestampsToReturn",
#endif
  .memSize = sizeof(UA_TimestampsToReturn),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = TimestampsToReturn_members },

/* CallRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 710},
  .typeIndex = UA_TYPES_CALLREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CallRequest",
#endif
  .memSize = sizeof(UA_CallRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = CallRequest_members },

/* MethodAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 358},
  .typeIndex = UA_TYPES_METHODATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MethodAttributes",
#endif
  .memSize = sizeof(UA_MethodAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = MethodAttributes_members },

/* DeleteReferencesItem */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 385},
  .typeIndex = UA_TYPES_DELETEREFERENCESITEM,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteReferencesItem",
#endif
  .memSize = sizeof(UA_DeleteReferencesItem),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = DeleteReferencesItem_members },

/* WriteValue */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 668},
  .typeIndex = UA_TYPES_WRITEVALUE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "WriteValue",
#endif
  .memSize = sizeof(UA_WriteValue),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = WriteValue_members },

/* MonitoredItemCreateResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 746},
  .typeIndex = UA_TYPES_MONITOREDITEMCREATERESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoredItemCreateResult",
#endif
  .memSize = sizeof(UA_MonitoredItemCreateResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = MonitoredItemCreateResult_members },

/* MessageSecurityMode */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MessageSecurityMode",
#endif
  .memSize = sizeof(UA_MessageSecurityMode),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = MessageSecurityMode_members },

/* MonitoringParameters */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 740},
  .typeIndex = UA_TYPES_MONITORINGPARAMETERS,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoringParameters",
#endif
  .memSize = sizeof(UA_MonitoringParameters),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = MonitoringParameters_members },

/* SignatureData */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 456},
  .typeIndex = UA_TYPES_SIGNATUREDATA,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SignatureData",
#endif
  .memSize = sizeof(UA_SignatureData),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = SignatureData_members },

/* ReferenceNode */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 285},
  .typeIndex = UA_TYPES_REFERENCENODE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ReferenceNode",
#endif
  .memSize = sizeof(UA_ReferenceNode),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = ReferenceNode_members },

/* Argument */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 296},
  .typeIndex = UA_TYPES_ARGUMENT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Argument",
#endif
  .memSize = sizeof(UA_Argument),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = Argument_members },

/* UserIdentityToken */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 316},
  .typeIndex = UA_TYPES_USERIDENTITYTOKEN,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UserIdentityToken",
#endif
  .memSize = sizeof(UA_UserIdentityToken),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = UserIdentityToken_members },

/* ObjectTypeAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 361},
  .typeIndex = UA_TYPES_OBJECTTYPEATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ObjectTypeAttributes",
#endif
  .memSize = sizeof(UA_ObjectTypeAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = ObjectTypeAttributes_members },

/* SecurityTokenRequestType */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SecurityTokenRequestType",
#endif
  .memSize = sizeof(UA_SecurityTokenRequestType),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = SecurityTokenRequestType_members },

/* BuildInfo */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 338},
  .typeIndex = UA_TYPES_BUILDINFO,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BuildInfo",
#endif
  .memSize = sizeof(UA_BuildInfo),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = BuildInfo_members },

/* NodeClass */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "NodeClass",
#endif
  .memSize = sizeof(UA_NodeClass),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = NodeClass_members },

/* ChannelSecurityToken */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 441},
  .typeIndex = UA_TYPES_CHANNELSECURITYTOKEN,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ChannelSecurityToken",
#endif
  .memSize = sizeof(UA_ChannelSecurityToken),
  .builtin = false,
  .fixedSize = true,
  .overlayable = true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ChannelSecurityToken, tokenId) == (offsetof(UA_ChannelSecurityToken, channelId) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ChannelSecurityToken, createdAt) == (offsetof(UA_ChannelSecurityToken, tokenId) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ChannelSecurityToken, revisedLifetime) == (offsetof(UA_ChannelSecurityToken, createdAt) + sizeof(UA_DateTime)),
  .membersSize = 4,
  .members = ChannelSecurityToken_members },

/* MonitoredItemNotification */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 806},
  .typeIndex = UA_TYPES_MONITOREDITEMNOTIFICATION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoredItemNotification",
#endif
  .memSize = sizeof(UA_MonitoredItemNotification),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = MonitoredItemNotification_members },

/* DeleteNodesItem */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 382},
  .typeIndex = UA_TYPES_DELETENODESITEM,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteNodesItem",
#endif
  .memSize = sizeof(UA_DeleteNodesItem),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = DeleteNodesItem_members },

/* SubscriptionAcknowledgement */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 821},
  .typeIndex = UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SubscriptionAcknowledgement",
#endif
  .memSize = sizeof(UA_SubscriptionAcknowledgement),
  .builtin = false,
  .fixedSize = true,
  .overlayable = true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) == (offsetof(UA_SubscriptionAcknowledgement, subscriptionId) + sizeof(UA_UInt32)),
  .membersSize = 2,
  .members = SubscriptionAcknowledgement_members },

/* ReadValueId */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 626},
  .typeIndex = UA_TYPES_READVALUEID,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ReadValueId",
#endif
  .memSize = sizeof(UA_ReadValueId),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = ReadValueId_members },

/* AnonymousIdentityToken */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 319},
  .typeIndex = UA_TYPES_ANONYMOUSIDENTITYTOKEN,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AnonymousIdentityToken",
#endif
  .memSize = sizeof(UA_AnonymousIdentityToken),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = AnonymousIdentityToken_members },

/* DataTypeAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 370},
  .typeIndex = UA_TYPES_DATATYPEATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DataTypeAttributes",
#endif
  .memSize = sizeof(UA_DataTypeAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = DataTypeAttributes_members },

/* ResponseHeader */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 392},
  .typeIndex = UA_TYPES_RESPONSEHEADER,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ResponseHeader",
#endif
  .memSize = sizeof(UA_ResponseHeader),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = ResponseHeader_members },

/* DeleteSubscriptionsRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 845},
  .typeIndex = UA_TYPES_DELETESUBSCRIPTIONSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteSubscriptionsRequest",
#endif
  .memSize = sizeof(UA_DeleteSubscriptionsRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = DeleteSubscriptionsRequest_members },

/* DataChangeNotification */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 809},
  .typeIndex = UA_TYPES_DATACHANGENOTIFICATION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DataChangeNotification",
#endif
  .memSize = sizeof(UA_DataChangeNotification),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = DataChangeNotification_members },

/* DeleteMonitoredItemsResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 782},
  .typeIndex = UA_TYPES_DELETEMONITOREDITEMSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteMonitoredItemsResponse",
#endif
  .memSize = sizeof(UA_DeleteMonitoredItemsResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = DeleteMonitoredItemsResponse_members },

/* RelativePath */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 540},
  .typeIndex = UA_TYPES_RELATIVEPATH,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RelativePath",
#endif
  .memSize = sizeof(UA_RelativePath),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = RelativePath_members },

/* RegisterNodesRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 558},
  .typeIndex = UA_TYPES_REGISTERNODESREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RegisterNodesRequest",
#endif
  .memSize = sizeof(UA_RegisterNodesRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = RegisterNodesRequest_members },

/* DeleteNodesRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 498},
  .typeIndex = UA_TYPES_DELETENODESREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteNodesRequest",
#endif
  .memSize = sizeof(UA_DeleteNodesRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = DeleteNodesRequest_members },

/* PublishResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 827},
  .typeIndex = UA_TYPES_PUBLISHRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "PublishResponse",
#endif
  .memSize = sizeof(UA_PublishResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = PublishResponse_members },

/* MonitoredItemModifyRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 755},
  .typeIndex = UA_TYPES_MONITOREDITEMMODIFYREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoredItemModifyRequest",
#endif
  .memSize = sizeof(UA_MonitoredItemModifyRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = MonitoredItemModifyRequest_members },

/* UserNameIdentityToken */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 322},
  .typeIndex = UA_TYPES_USERNAMEIDENTITYTOKEN,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UserNameIdentityToken",
#endif
  .memSize = sizeof(UA_UserNameIdentityToken),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = UserNameIdentityToken_members },

/* IdType */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "IdType",
#endif
  .memSize = sizeof(UA_IdType),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = IdType_members },

/* UserTokenType */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UserTokenType",
#endif
  .memSize = sizeof(UA_UserTokenType),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = UserTokenType_members },

/* NodeAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 349},
  .typeIndex = UA_TYPES_NODEATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "NodeAttributes",
#endif
  .memSize = sizeof(UA_NodeAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = NodeAttributes_members },

/* ActivateSessionRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 465},
  .typeIndex = UA_TYPES_ACTIVATESESSIONREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ActivateSessionRequest",
#endif
  .memSize = sizeof(UA_ActivateSessionRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = ActivateSessionRequest_members },

/* OpenSecureChannelResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 447},
  .typeIndex = UA_TYPES_OPENSECURECHANNELRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "OpenSecureChannelResponse",
#endif
  .memSize = sizeof(UA_OpenSecureChannelResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = OpenSecureChannelResponse_members },

/* ApplicationType */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ApplicationType",
#endif
  .memSize = sizeof(UA_ApplicationType),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = ApplicationType_members },

/* QueryNextResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 622},
  .typeIndex = UA_TYPES_QUERYNEXTRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QueryNextResponse",
#endif
  .memSize = sizeof(UA_QueryNextResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = QueryNextResponse_members },

/* ActivateSessionResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 468},
  .typeIndex = UA_TYPES_ACTIVATESESSIONRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ActivateSessionResponse",
#endif
  .memSize = sizeof(UA_ActivateSessionResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = ActivateSessionResponse_members },

/* FilterOperator */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "FilterOperator",
#endif
  .memSize = sizeof(UA_FilterOperator),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .membersSize = 1,
  .members = FilterOperator_members },

/* QueryNextRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 619},
  .typeIndex = UA_TYPES_QUERYNEXTREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QueryNextRequest",
#endif
  .memSize = sizeof(UA_QueryNextRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = QueryNextRequest_members },

/* BrowseNextRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 531},
  .typeIndex = UA_TYPES_BROWSENEXTREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseNextRequest",
#endif
  .memSize = sizeof(UA_BrowseNextRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = BrowseNextRequest_members },

/* CreateSubscriptionRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 785},
  .typeIndex = UA_TYPES_CREATESUBSCRIPTIONREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CreateSubscriptionRequest",
#endif
  .memSize = sizeof(UA_CreateSubscriptionRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = CreateSubscriptionRequest_members },

/* VariableTypeAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 364},
  .typeIndex = UA_TYPES_VARIABLETYPEATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "VariableTypeAttributes",
#endif
  .memSize = sizeof(UA_VariableTypeAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 10,
  .members = VariableTypeAttributes_members },

/* BrowsePathResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 549},
  .typeIndex = UA_TYPES_BROWSEPATHRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowsePathResult",
#endif
  .memSize = sizeof(UA_BrowsePathResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = BrowsePathResult_members },

/* ModifySubscriptionResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 794},
  .typeIndex = UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ModifySubscriptionResponse",
#endif
  .memSize = sizeof(UA_ModifySubscriptionResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = ModifySubscriptionResponse_members },

/* RegisterNodesResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 561},
  .typeIndex = UA_TYPES_REGISTERNODESRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RegisterNodesResponse",
#endif
  .memSize = sizeof(UA_RegisterNodesResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = RegisterNodesResponse_members },

/* CloseSessionRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 471},
  .typeIndex = UA_TYPES_CLOSESESSIONREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CloseSessionRequest",
#endif
  .memSize = sizeof(UA_CloseSessionRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = CloseSessionRequest_members },

/* ModifySubscriptionRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 791},
  .typeIndex = UA_TYPES_MODIFYSUBSCRIPTIONREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ModifySubscriptionRequest",
#endif
  .memSize = sizeof(UA_ModifySubscriptionRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = ModifySubscriptionRequest_members },

/* UserTokenPolicy */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 304},
  .typeIndex = UA_TYPES_USERTOKENPOLICY,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UserTokenPolicy",
#endif
  .memSize = sizeof(UA_UserTokenPolicy),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = UserTokenPolicy_members },

/* DeleteMonitoredItemsRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 779},
  .typeIndex = UA_TYPES_DELETEMONITOREDITEMSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteMonitoredItemsRequest",
#endif
  .memSize = sizeof(UA_DeleteMonitoredItemsRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = DeleteMonitoredItemsRequest_members },

/* ReferenceTypeAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 367},
  .typeIndex = UA_TYPES_REFERENCETYPEATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ReferenceTypeAttributes",
#endif
  .memSize = sizeof(UA_ReferenceTypeAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 8,
  .members = ReferenceTypeAttributes_members },

/* BrowsePath */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 543},
  .typeIndex = UA_TYPES_BROWSEPATH,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowsePath",
#endif
  .memSize = sizeof(UA_BrowsePath),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = BrowsePath_members },

/* UnregisterNodesResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 567},
  .typeIndex = UA_TYPES_UNREGISTERNODESRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "UnregisterNodesResponse",
#endif
  .memSize = sizeof(UA_UnregisterNodesResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = UnregisterNodesResponse_members },

/* WriteRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 671},
  .typeIndex = UA_TYPES_WRITEREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "WriteRequest",
#endif
  .memSize = sizeof(UA_WriteRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = WriteRequest_members },

/* ObjectAttributes */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 352},
  .typeIndex = UA_TYPES_OBJECTATTRIBUTES,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ObjectAttributes",
#endif
  .memSize = sizeof(UA_ObjectAttributes),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = ObjectAttributes_members },

/* BrowseDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 514},
  .typeIndex = UA_TYPES_BROWSEDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseDescription",
#endif
  .memSize = sizeof(UA_BrowseDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = BrowseDescription_members },

/* RepublishRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 830},
  .typeIndex = UA_TYPES_REPUBLISHREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RepublishRequest",
#endif
  .memSize = sizeof(UA_RepublishRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = RepublishRequest_members },

/* GetEndpointsRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 426},
  .typeIndex = UA_TYPES_GETENDPOINTSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "GetEndpointsRequest",
#endif
  .memSize = sizeof(UA_GetEndpointsRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = GetEndpointsRequest_members },

/* PublishRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 824},
  .typeIndex = UA_TYPES_PUBLISHREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "PublishRequest",
#endif
  .memSize = sizeof(UA_PublishRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = PublishRequest_members },

/* AddNodesResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 489},
  .typeIndex = UA_TYPES_ADDNODESRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddNodesResponse",
#endif
  .memSize = sizeof(UA_AddNodesResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = AddNodesResponse_members },

/* CloseSecureChannelResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 453},
  .typeIndex = UA_TYPES_CLOSESECURECHANNELRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CloseSecureChannelResponse",
#endif
  .memSize = sizeof(UA_CloseSecureChannelResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = CloseSecureChannelResponse_members },

/* ModifyMonitoredItemsRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 761},
  .typeIndex = UA_TYPES_MODIFYMONITOREDITEMSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ModifyMonitoredItemsRequest",
#endif
  .memSize = sizeof(UA_ModifyMonitoredItemsRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = ModifyMonitoredItemsRequest_members },

/* FindServersRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 420},
  .typeIndex = UA_TYPES_FINDSERVERSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "FindServersRequest",
#endif
  .memSize = sizeof(UA_FindServersRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = FindServersRequest_members },

/* ReferenceDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 518},
  .typeIndex = UA_TYPES_REFERENCEDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ReferenceDescription",
#endif
  .memSize = sizeof(UA_ReferenceDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = ReferenceDescription_members },

/* SetPublishingModeResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 800},
  .typeIndex = UA_TYPES_SETPUBLISHINGMODERESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "SetPublishingModeResponse",
#endif
  .memSize = sizeof(UA_SetPublishingModeResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = SetPublishingModeResponse_members },

/* ContentFilterResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 607},
  .typeIndex = UA_TYPES_CONTENTFILTERRESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ContentFilterResult",
#endif
  .memSize = sizeof(UA_ContentFilterResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = ContentFilterResult_members },

/* AddReferencesItem */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 379},
  .typeIndex = UA_TYPES_ADDREFERENCESITEM,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddReferencesItem",
#endif
  .memSize = sizeof(UA_AddReferencesItem),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = AddReferencesItem_members },

/* QueryDataDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 570},
  .typeIndex = UA_TYPES_QUERYDATADESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QueryDataDescription",
#endif
  .memSize = sizeof(UA_QueryDataDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = QueryDataDescription_members },

/* CreateSubscriptionResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 788},
  .typeIndex = UA_TYPES_CREATESUBSCRIPTIONRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CreateSubscriptionResponse",
#endif
  .memSize = sizeof(UA_CreateSubscriptionResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 5,
  .members = CreateSubscriptionResponse_members },

/* DeleteSubscriptionsResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 848},
  .typeIndex = UA_TYPES_DELETESUBSCRIPTIONSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteSubscriptionsResponse",
#endif
  .memSize = sizeof(UA_DeleteSubscriptionsResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = DeleteSubscriptionsResponse_members },

/* WriteResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 674},
  .typeIndex = UA_TYPES_WRITERESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "WriteResponse",
#endif
  .memSize = sizeof(UA_WriteResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = WriteResponse_members },

/* DeleteReferencesResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 507},
  .typeIndex = UA_TYPES_DELETEREFERENCESRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteReferencesResponse",
#endif
  .memSize = sizeof(UA_DeleteReferencesResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = DeleteReferencesResponse_members },

/* CreateMonitoredItemsResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 752},
  .typeIndex = UA_TYPES_CREATEMONITOREDITEMSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CreateMonitoredItemsResponse",
#endif
  .memSize = sizeof(UA_CreateMonitoredItemsResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = CreateMonitoredItemsResponse_members },

/* CallResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 713},
  .typeIndex = UA_TYPES_CALLRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CallResponse",
#endif
  .memSize = sizeof(UA_CallResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = CallResponse_members },

/* DeleteNodesResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 501},
  .typeIndex = UA_TYPES_DELETENODESRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteNodesResponse",
#endif
  .memSize = sizeof(UA_DeleteNodesResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = DeleteNodesResponse_members },

/* RepublishResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 833},
  .typeIndex = UA_TYPES_REPUBLISHRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "RepublishResponse",
#endif
  .memSize = sizeof(UA_RepublishResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = RepublishResponse_members },

/* MonitoredItemCreateRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 743},
  .typeIndex = UA_TYPES_MONITOREDITEMCREATEREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "MonitoredItemCreateRequest",
#endif
  .memSize = sizeof(UA_MonitoredItemCreateRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = MonitoredItemCreateRequest_members },

/* DeleteReferencesRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 504},
  .typeIndex = UA_TYPES_DELETEREFERENCESREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "DeleteReferencesRequest",
#endif
  .memSize = sizeof(UA_DeleteReferencesRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = DeleteReferencesRequest_members },

/* ModifyMonitoredItemsResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 764},
  .typeIndex = UA_TYPES_MODIFYMONITOREDITEMSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ModifyMonitoredItemsResponse",
#endif
  .memSize = sizeof(UA_ModifyMonitoredItemsResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = ModifyMonitoredItemsResponse_members },

/* ReadResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 632},
  .typeIndex = UA_TYPES_READRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ReadResponse",
#endif
  .memSize = sizeof(UA_ReadResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = ReadResponse_members },

/* AddReferencesRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 492},
  .typeIndex = UA_TYPES_ADDREFERENCESREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddReferencesRequest",
#endif
  .memSize = sizeof(UA_AddReferencesRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = AddReferencesRequest_members },

/* ReadRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 629},
  .typeIndex = UA_TYPES_READREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ReadRequest",
#endif
  .memSize = sizeof(UA_ReadRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = ReadRequest_members },

/* OpenSecureChannelRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 444},
  .typeIndex = UA_TYPES_OPENSECURECHANNELREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "OpenSecureChannelRequest",
#endif
  .memSize = sizeof(UA_OpenSecureChannelRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = OpenSecureChannelRequest_members },

/* AddNodesItem */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 376},
  .typeIndex = UA_TYPES_ADDNODESITEM,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddNodesItem",
#endif
  .memSize = sizeof(UA_AddNodesItem),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = AddNodesItem_members },

/* ApplicationDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 308},
  .typeIndex = UA_TYPES_APPLICATIONDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ApplicationDescription",
#endif
  .memSize = sizeof(UA_ApplicationDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 7,
  .members = ApplicationDescription_members },

/* NodeTypeDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 573},
  .typeIndex = UA_TYPES_NODETYPEDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "NodeTypeDescription",
#endif
  .memSize = sizeof(UA_NodeTypeDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = NodeTypeDescription_members },

/* FindServersResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 423},
  .typeIndex = UA_TYPES_FINDSERVERSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "FindServersResponse",
#endif
  .memSize = sizeof(UA_FindServersResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = FindServersResponse_members },

/* ServerStatusDataType */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 862},
  .typeIndex = UA_TYPES_SERVERSTATUSDATATYPE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ServerStatusDataType",
#endif
  .memSize = sizeof(UA_ServerStatusDataType),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = ServerStatusDataType_members },

/* AddReferencesResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 495},
  .typeIndex = UA_TYPES_ADDREFERENCESRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddReferencesResponse",
#endif
  .memSize = sizeof(UA_AddReferencesResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = AddReferencesResponse_members },

/* TranslateBrowsePathsToNodeIdsResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 555},
  .typeIndex = UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "TranslateBrowsePathsToNodeIdsResponse",
#endif
  .memSize = sizeof(UA_TranslateBrowsePathsToNodeIdsResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = TranslateBrowsePathsToNodeIdsResponse_members },

/* ContentFilterElement */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 583},
  .typeIndex = UA_TYPES_CONTENTFILTERELEMENT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ContentFilterElement",
#endif
  .memSize = sizeof(UA_ContentFilterElement),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = ContentFilterElement_members },

/* TranslateBrowsePathsToNodeIdsRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 552},
  .typeIndex = UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "TranslateBrowsePathsToNodeIdsRequest",
#endif
  .memSize = sizeof(UA_TranslateBrowsePathsToNodeIdsRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = TranslateBrowsePathsToNodeIdsRequest_members },

/* CloseSessionResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 474},
  .typeIndex = UA_TYPES_CLOSESESSIONRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CloseSessionResponse",
#endif
  .memSize = sizeof(UA_CloseSessionResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = CloseSessionResponse_members },

/* ServiceFault */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 395},
  .typeIndex = UA_TYPES_SERVICEFAULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ServiceFault",
#endif
  .memSize = sizeof(UA_ServiceFault),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = ServiceFault_members },

/* CreateMonitoredItemsRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 749},
  .typeIndex = UA_TYPES_CREATEMONITOREDITEMSREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CreateMonitoredItemsRequest",
#endif
  .memSize = sizeof(UA_CreateMonitoredItemsRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = CreateMonitoredItemsRequest_members },

/* ContentFilter */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 586},
  .typeIndex = UA_TYPES_CONTENTFILTER,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ContentFilter",
#endif
  .memSize = sizeof(UA_ContentFilter),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 1,
  .members = ContentFilter_members },

/* QueryFirstResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 616},
  .typeIndex = UA_TYPES_QUERYFIRSTRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QueryFirstResponse",
#endif
  .memSize = sizeof(UA_QueryFirstResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = QueryFirstResponse_members },

/* AddNodesRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 486},
  .typeIndex = UA_TYPES_ADDNODESREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "AddNodesRequest",
#endif
  .memSize = sizeof(UA_AddNodesRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = AddNodesRequest_members },

/* BrowseRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 525},
  .typeIndex = UA_TYPES_BROWSEREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseRequest",
#endif
  .memSize = sizeof(UA_BrowseRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 4,
  .members = BrowseRequest_members },

/* BrowseResult */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 522},
  .typeIndex = UA_TYPES_BROWSERESULT,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseResult",
#endif
  .memSize = sizeof(UA_BrowseResult),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = BrowseResult_members },

/* CreateSessionRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 459},
  .typeIndex = UA_TYPES_CREATESESSIONREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CreateSessionRequest",
#endif
  .memSize = sizeof(UA_CreateSessionRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 9,
  .members = CreateSessionRequest_members },

/* EndpointDescription */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 312},
  .typeIndex = UA_TYPES_ENDPOINTDESCRIPTION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "EndpointDescription",
#endif
  .memSize = sizeof(UA_EndpointDescription),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 8,
  .members = EndpointDescription_members },

/* GetEndpointsResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 429},
  .typeIndex = UA_TYPES_GETENDPOINTSRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "GetEndpointsResponse",
#endif
  .memSize = sizeof(UA_GetEndpointsResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 2,
  .members = GetEndpointsResponse_members },

/* BrowseNextResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 534},
  .typeIndex = UA_TYPES_BROWSENEXTRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseNextResponse",
#endif
  .memSize = sizeof(UA_BrowseNextResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = BrowseNextResponse_members },

/* BrowseResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 528},
  .typeIndex = UA_TYPES_BROWSERESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "BrowseResponse",
#endif
  .memSize = sizeof(UA_BrowseResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 3,
  .members = BrowseResponse_members },

/* CreateSessionResponse */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 462},
  .typeIndex = UA_TYPES_CREATESESSIONRESPONSE,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "CreateSessionResponse",
#endif
  .memSize = sizeof(UA_CreateSessionResponse),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 10,
  .members = CreateSessionResponse_members },

/* QueryFirstRequest */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 613},
  .typeIndex = UA_TYPES_QUERYFIRSTREQUEST,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "QueryFirstRequest",
#endif
  .memSize = sizeof(UA_QueryFirstRequest),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .membersSize = 6,
  .members = QueryFirstRequest_members },
};

