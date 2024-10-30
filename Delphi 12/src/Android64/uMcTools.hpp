// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcTools.pas' rev: 36.00 (Android)

#ifndef uMcToolsHPP
#define uMcToolsHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Data.DB.hpp>
#include <System.TypInfo.hpp>
#include <uMcJSON.hpp>
#include <uMcConsts.hpp>
#include <uMcTypes.hpp>
#include <uMcPrimaryKey.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umctools
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcTools;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcTools : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod void __fastcall FieldToJSONValue(Data::Db::TField* const AField, Umcjson::IMcJSONObject AJSONObject);
	__classmethod void __fastcall JSONValueToParam(Umcjson::IMcJSONValue AJSONValue, Data::Db::TParam* AParam);
	__classmethod System::UnicodeString __fastcall FieldValueToString(Data::Db::TField* AField);
	__classmethod System::UnicodeString __fastcall EncryptString(const System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall DecryptString(const System::UnicodeString AValue);
	
public:
	__classmethod void __fastcall DecodeMDString(System::UnicodeString ASource, System::Classes::TStrings* AList);
	__classmethod System::UnicodeString __fastcall McActionToString(Umctypes::TMcAction AValue);
	__classmethod Umctypes::TMcAction __fastcall StringToHcAction(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall McOperationToString(Umctypes::TMcOperation AValue);
	__classmethod Umctypes::TMcOperation __fastcall StringToHcOperation(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall McFileOptionToString(Umctypes::TMcFileOption AValue);
	__classmethod Umctypes::TMcFileOption __fastcall StringToHcFileOption(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall ProviderFlagsToString(Data::Db::TProviderFlags AValue);
	__classmethod Data::Db::TProviderFlags __fastcall StringToProviderFlags(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall FieldTypeToString(Data::Db::TFieldType AValue);
	__classmethod Data::Db::TFieldType __fastcall StringToFieldType(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall ParamTypeToString(Data::Db::TParamType AValue);
	__classmethod Data::Db::TParamType __fastcall StringToParamType(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall FieldAttributesToString(Data::Db::TFieldAttributes AValue);
	__classmethod Data::Db::TFieldAttributes __fastcall StringToFieldAttributes(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall StreamToBase64(System::Classes::TMemoryStream* AStream);
	__classmethod System::Classes::TMemoryStream* __fastcall Base64ToStream(System::UnicodeString ABase64);
	__classmethod System::UnicodeString __fastcall OnCrypt(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall OnDecrypt(System::UnicodeString AValue);
	__classmethod Umcjson::IMcJSONArray __fastcall FieldDefsToJSONArray(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONArrayToFieldDefs(Umcjson::IMcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall ConfigProviderFlags(Umcjson::IMcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall ConfigPrimaryKey(Umcjson::IMcJSONArray AJSONArray, Umcprimarykey::TMcPrimaryKeys* APrimaryKey);
	__classmethod Umcjson::IMcJSONArray __fastcall ParamsToJSONArray(Data::Db::TParams* AParams);
	__classmethod void __fastcall JSONArrayToParams(Umcjson::IMcJSONArray AJSONArray, Data::Db::TParams* AParams);
	__classmethod void __fastcall JSONValueToField(Umcjson::IMcJSONValue AJSONValue, Data::Db::TField* AField);
	__classmethod Umcjson::IMcJSONObject __fastcall DataSetToJSONObject(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONObjectToDataSet(Umcjson::IMcJSONObject AJSONObject, Data::Db::TDataSet* ADataSet);
	__classmethod Umcjson::IMcJSONArray __fastcall DataSetToJSONArray(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONArrayToDataSet(Umcjson::IMcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod Umcjson::IMcJSONObject __fastcall DataSetToJSONPersistence(Umctypes::TMcOperation AOperation, Data::Db::TDataSet* ADataSet, Umcprimarykey::TMcPrimaryKeys* APrimaryKey);
public:
	/* TObject.Create */ inline __fastcall TMcTools() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMcTools() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umctools */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCTOOLS)
using namespace Umctools;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcToolsHPP
