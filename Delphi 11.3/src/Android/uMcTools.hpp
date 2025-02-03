// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcTools.pas' rev: 35.00 (Android)

#ifndef UmctoolsHPP
#define UmctoolsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Data.DB.hpp>
#include <System.TypInfo.hpp>
#include <uMcCommons.hpp>
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
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcTools : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod void __fastcall FieldToJSONValue(Data::Db::TField* const AField, Umcjsoncontract::_di_IMcJSONObject AJSONObject);
	__classmethod void __fastcall JSONValueToParam(Umcjsoncontract::_di_IMcJSONValue AJSONValue, Data::Db::TParam* AParam);
	__classmethod System::UnicodeString __fastcall FieldValueToString(Data::Db::TField* AField);
	__classmethod void __fastcall EncryptStream(System::Classes::TStream* const ASource, System::Classes::TStream* const ATarget, Umccommons::TMcStreamKey* AStreamKey);
	__classmethod void __fastcall DecryptStream(System::Classes::TStream* const ASource, System::Classes::TStream* const ATarget, Umccommons::TMcStreamKey* AStreamKey);
	
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
	__classmethod System::UnicodeString __fastcall StreamToBase64(System::Classes::TStream* AStream);
	__classmethod System::Classes::TStream* __fastcall Base64ToStream(System::UnicodeString ABase64);
	__classmethod System::Classes::TStream* __fastcall JoinStream(System::TArray__1<System::Classes::TStream*> AStreams);
	__classmethod bool __fastcall SplitStream(System::Classes::TStream* ASource, System::TArray__1<System::Classes::TStream*> AStreams);
	__classmethod System::UnicodeString __fastcall OnEncryptToBase64(const System::UnicodeString AValue, Umccommons::TMcStreamKey* AStreamKey);
	__classmethod System::UnicodeString __fastcall OnDecryptFromBase64(const System::UnicodeString AValue, Umccommons::TMcStreamKey* AStreamKey);
	__classmethod System::Classes::TStream* __fastcall OnEncryptToStream(const System::UnicodeString AValue, Umccommons::TMcStreamKey* AStreamKey);
	__classmethod System::UnicodeString __fastcall OnDecryptFromStream(System::Classes::TStream* const AValue, Umccommons::TMcStreamKey* AStreamKey);
	__classmethod Umcjsoncontract::_di_IMcJSONArray __fastcall FieldDefsToJSONArray(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONArrayToFieldDefs(Umcjsoncontract::_di_IMcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall ConfigProviderFlags(Umcjsoncontract::_di_IMcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall ConfigPrimaryKey(Umcjsoncontract::_di_IMcJSONArray AJSONArray, Umcprimarykey::TMcPrimaryKeys* APrimaryKey);
	__classmethod Umcjsoncontract::_di_IMcJSONArray __fastcall ParamsToJSONArray(Data::Db::TParams* AParams);
	__classmethod void __fastcall JSONArrayToParams(Umcjsoncontract::_di_IMcJSONArray AJSONArray, Data::Db::TParams* AParams);
	__classmethod void __fastcall JSONValueToField(Umcjsoncontract::_di_IMcJSONValue AJSONValue, Data::Db::TField* AField);
	__classmethod Umcjsoncontract::_di_IMcJSONObject __fastcall DataSetToJSONObject(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONObjectToDataSet(Umcjsoncontract::_di_IMcJSONObject AJSONObject, Data::Db::TDataSet* ADataSet);
	__classmethod Umcjsoncontract::_di_IMcJSONArray __fastcall DataSetToJSONArray(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONArrayToDataSet(Umcjsoncontract::_di_IMcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod Umcjsoncontract::_di_IMcJSONObject __fastcall DataSetToJSONPersistence(Umctypes::TMcOperation AOperation, Data::Db::TDataSet* ADataSet, Umcprimarykey::TMcPrimaryKeys* APrimaryKey, bool AAllFields = false);
public:
	/* TObject.Create */ inline __fastcall TMcTools() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMcTools() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umctools */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCTOOLS)
using namespace Umctools;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmctoolsHPP
