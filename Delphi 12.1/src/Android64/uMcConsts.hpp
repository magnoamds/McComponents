// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcConsts.pas' rev: 36.00 (Android)

#ifndef uMcConstsHPP
#define uMcConstsHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcconsts
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define _KEY_VERSION u"version"
#define _MC_VERSION u"4.0.0"
static _DELPHI_CONST System::WideChar _MC_COMPATIBILITY = (System::WideChar)(0x34);
#define _AVISO u"The evaluation period has expired!"
#define _CONTENT_TYPE_JSON u"application/json; charset=utf8"
#define _KEY_ACTIVE u"active"
#define _KEY_MYCONTENT u"myContent"
#define _KEY_SECURITYKEY u"securitykey"
#define _KEY_PARAMSDB u"paramsdb"
#define _KEY_MCACTION u"mcaction"
#define _KEY_OPERATION u"operation"
#define _KEY_QRY_NAME u"qryname"
#define _KEY_ITEMS u"items"
#define _KEY_SQL u"sql"
#define _KEY_PRIMARYKEY u"primaryKey"
#define _KEY_PARAMS u"params"
#define _KEY_RECORD u"record"
#define _KEY_FILTER u"filter"
#define _KEY_DATA u"data"
#define _KEY_FIELDDEFS u"fielddefs"
#define _KEY_RETURNING u"returning"
#define _PK_FIELDNAME u"fieldName"
#define _PK_AUTOINC u"autoInc"
#define _PK_DATATYPE u"dataType"
#define _FIELD_NAME u"fieldName"
#define _FIELD_ATTRIBUTES u"attributes"
#define _FIELD_DATATYPE u"dataType"
#define _FIELD_PRECISION u"precision"
#define _FIELD_SIZE u"size"
#define _FIELD_REQUIRED u"required"
#define _FIELD_PROVIDERFLAGS u"providerFlags"
#define _PARAMS_NAME u"name"
#define _PARAMS_DATATYPE u"dataType"
#define _PARAMS_PARAMTYPE u"paramType"
#define _PARAMS_VALUE u"value"
#define _RESULT_SUCCESS u"success"
#define _RESULT_MESSAGE u"message"
#define _RESULT_DATA u"data"
#define _FILE_OPTION u"option"
#define _FILE_DIRECTORY u"directory"
#define _FILE_NAME u"fileName"
#define _FILE u"file"
extern DELPHI_PACKAGE System::ResourceString _sPrimaryKeyNotDefined;
#define Umcconsts_sPrimaryKeyNotDefined System::LoadResourceString(&Umcconsts::_sPrimaryKeyNotDefined)
extern DELPHI_PACKAGE System::ResourceString _sPrimaryKeyNotFound;
#define Umcconsts_sPrimaryKeyNotFound System::LoadResourceString(&Umcconsts::_sPrimaryKeyNotFound)
extern DELPHI_PACKAGE System::ResourceString _sMcCacheNotFound;
#define Umcconsts_sMcCacheNotFound System::LoadResourceString(&Umcconsts::_sMcCacheNotFound)
extern DELPHI_PACKAGE System::ResourceString _sMcConnectionNotDefined;
#define Umcconsts_sMcConnectionNotDefined System::LoadResourceString(&Umcconsts::_sMcConnectionNotDefined)
extern DELPHI_PACKAGE System::ResourceString _sBaseUrlNotDefined;
#define Umcconsts_sBaseUrlNotDefined System::LoadResourceString(&Umcconsts::_sBaseUrlNotDefined)
extern DELPHI_PACKAGE System::ResourceString _sResourceNotDefined;
#define Umcconsts_sResourceNotDefined System::LoadResourceString(&Umcconsts::_sResourceNotDefined)
extern DELPHI_PACKAGE System::ResourceString _sDataSetNotDefined;
#define Umcconsts_sDataSetNotDefined System::LoadResourceString(&Umcconsts::_sDataSetNotDefined)
extern DELPHI_PACKAGE System::ResourceString _sSQLNotDefined;
#define Umcconsts_sSQLNotDefined System::LoadResourceString(&Umcconsts::_sSQLNotDefined)
extern DELPHI_PACKAGE System::ResourceString _sQryNameNotFound;
#define Umcconsts_sQryNameNotFound System::LoadResourceString(&Umcconsts::_sQryNameNotFound)
extern DELPHI_PACKAGE System::ResourceString _sSQLNotFound;
#define Umcconsts_sSQLNotFound System::LoadResourceString(&Umcconsts::_sSQLNotFound)
extern DELPHI_PACKAGE System::ResourceString _sRecordNotFound;
#define Umcconsts_sRecordNotFound System::LoadResourceString(&Umcconsts::_sRecordNotFound)
extern DELPHI_PACKAGE System::ResourceString _sFilterNotFound;
#define Umcconsts_sFilterNotFound System::LoadResourceString(&Umcconsts::_sFilterNotFound)
extern DELPHI_PACKAGE System::ResourceString _sNoItemsForExecSQL;
#define Umcconsts_sNoItemsForExecSQL System::LoadResourceString(&Umcconsts::_sNoItemsForExecSQL)
extern DELPHI_PACKAGE System::ResourceString _sNoItemsForPersistence;
#define Umcconsts_sNoItemsForPersistence System::LoadResourceString(&Umcconsts::_sNoItemsForPersistence)
extern DELPHI_PACKAGE System::ResourceString _sNameNotAvailable;
#define Umcconsts_sNameNotAvailable System::LoadResourceString(&Umcconsts::_sNameNotAvailable)
extern DELPHI_PACKAGE System::ResourceString _sFileNotAvailable;
#define Umcconsts_sFileNotAvailable System::LoadResourceString(&Umcconsts::_sFileNotAvailable)
extern DELPHI_PACKAGE System::ResourceString _sFileNotFound;
#define Umcconsts_sFileNotFound System::LoadResourceString(&Umcconsts::_sFileNotFound)
extern DELPHI_PACKAGE System::ResourceString _sFileNameNotFound;
#define Umcconsts_sFileNameNotFound System::LoadResourceString(&Umcconsts::_sFileNameNotFound)
extern DELPHI_PACKAGE System::ResourceString _sFileSaved;
#define Umcconsts_sFileSaved System::LoadResourceString(&Umcconsts::_sFileSaved)
extern DELPHI_PACKAGE System::ResourceString _sFileOperationNotFound;
#define Umcconsts_sFileOperationNotFound System::LoadResourceString(&Umcconsts::_sFileOperationNotFound)
extern DELPHI_PACKAGE System::ResourceString _sContentInvalid;
#define Umcconsts_sContentInvalid System::LoadResourceString(&Umcconsts::_sContentInvalid)
extern DELPHI_PACKAGE System::ResourceString _sMcIncompatibleVersion;
#define Umcconsts_sMcIncompatibleVersion System::LoadResourceString(&Umcconsts::_sMcIncompatibleVersion)
extern DELPHI_PACKAGE System::ResourceString _sConnectionNotEstablished;
#define Umcconsts_sConnectionNotEstablished System::LoadResourceString(&Umcconsts::_sConnectionNotEstablished)
extern DELPHI_PACKAGE System::ResourceString _sMcDriverNotDefinedInMcServer;
#define Umcconsts_sMcDriverNotDefinedInMcServer System::LoadResourceString(&Umcconsts::_sMcDriverNotDefinedInMcServer)
extern DELPHI_PACKAGE System::ResourceString _sResourceInvalid;
#define Umcconsts_sResourceInvalid System::LoadResourceString(&Umcconsts::_sResourceInvalid)
extern DELPHI_PACKAGE System::ResourceString _sResourceEmpty;
#define Umcconsts_sResourceEmpty System::LoadResourceString(&Umcconsts::_sResourceEmpty)
extern DELPHI_PACKAGE System::ResourceString _sMcServerError;
#define Umcconsts_sMcServerError System::LoadResourceString(&Umcconsts::_sMcServerError)
extern DELPHI_PACKAGE System::ResourceString _sJsonItemsInvalid;
#define Umcconsts_sJsonItemsInvalid System::LoadResourceString(&Umcconsts::_sJsonItemsInvalid)
extern DELPHI_PACKAGE System::ResourceString _sParamsNotFound;
#define Umcconsts_sParamsNotFound System::LoadResourceString(&Umcconsts::_sParamsNotFound)
extern DELPHI_PACKAGE System::ResourceString _sCommandExecutedSuccessfully;
#define Umcconsts_sCommandExecutedSuccessfully System::LoadResourceString(&Umcconsts::_sCommandExecutedSuccessfully)
extern DELPHI_PACKAGE System::ResourceString _sFileOptionNotFound;
#define Umcconsts_sFileOptionNotFound System::LoadResourceString(&Umcconsts::_sFileOptionNotFound)
extern DELPHI_PACKAGE System::ResourceString _sSuccessfullyPersistency;
#define Umcconsts_sSuccessfullyPersistency System::LoadResourceString(&Umcconsts::_sSuccessfullyPersistency)
extern DELPHI_PACKAGE System::ResourceString _sServiceNotFound;
#define Umcconsts_sServiceNotFound System::LoadResourceString(&Umcconsts::_sServiceNotFound)
extern DELPHI_PACKAGE System::ResourceString _sServiceNameNotFound;
#define Umcconsts_sServiceNameNotFound System::LoadResourceString(&Umcconsts::_sServiceNameNotFound)
extern DELPHI_PACKAGE System::ResourceString _sSecurityKeyNotFound;
#define Umcconsts_sSecurityKeyNotFound System::LoadResourceString(&Umcconsts::_sSecurityKeyNotFound)
extern DELPHI_PACKAGE System::ResourceString _sNotAuthorized;
#define Umcconsts_sNotAuthorized System::LoadResourceString(&Umcconsts::_sNotAuthorized)
}	/* namespace Umcconsts */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCCONSTS)
using namespace Umcconsts;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcConstsHPP
