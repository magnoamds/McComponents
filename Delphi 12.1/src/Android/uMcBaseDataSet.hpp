// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcBaseDataSet.pas' rev: 36.00 (Android)

#ifndef uMcBaseDataSetHPP
#define uMcBaseDataSetHPP

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
#include <System.Generics.Collections.hpp>
#include <uMcConnection.hpp>
#include <uMcCommons.hpp>
#include <uMcTools.hpp>
#include <uMcPrimaryKey.hpp>
#include <uMcJSON.hpp>
#include <uMcTypes.hpp>
#include <uMcCache.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcbasedataset
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcBaseDataSet;
//-- type declarations -------------------------------------------------------
using Umcconnection::TMcConnection;

using Umccache::TMcCached;

using Umcprimarykey::TMcPrimaryKeys;

using Umccommons::TMcEvent;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcBaseDataSet : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TMcConnection* FMcConnection;
	Data::Db::TDataSet* FDataSet;
	System::Classes::TStrings* FSQL;
	Data::Db::TParams* FParams;
	Umcjson::IMcJSONArray FJSONFieldDefs;
	Umcjson::IMcJSONArray FJSONData;
	bool FLoading;
	Umcjson::IMcJSONArray FPersistence;
	TMcCached* FCache;
	Umcjson::IMcJSONObject FJSONRecord;
	TMcPrimaryKeys* FMcPrimaryKeys;
	Umctypes::TMcOperation FOperation;
	Umcjson::IMcJSONArray FJSONReturn;
	void __fastcall SetSQL(System::Classes::TStrings* const AValue);
	void __fastcall SetMcPrimaryKeys(TMcPrimaryKeys* const AValue);
	void __fastcall OnOnChangeSQL(System::TObject* Sender);
	System::UnicodeString __fastcall GetAbout();
	System::Classes::TStrings* __fastcall GetSQL();
	void __fastcall ExecSQL();
	
public:
	__fastcall TMcBaseDataSet(System::Classes::TComponent* ADataSet);
	__fastcall virtual ~TMcBaseDataSet();
	bool __fastcall McIsDesigning(System::Classes::TComponent* AComp);
	TMcConnection* __fastcall McFindDefaultConnection(System::Classes::TComponent* AComp);
	void __fastcall LoadFieldDefs();
	void __fastcall LoadData();
	void __fastcall ClearItems();
	void __fastcall LoadRecord(Umctypes::TMcOperation AOperation, Data::Db::TDataSet* ADataSet, bool AAllFields = false);
	void __fastcall AddItem();
	Umcjson::IMcJSONArray __fastcall Persistence();
	bool __fastcall RequestOpen();
	bool __fastcall RequestPersistence();
	void __fastcall DoBeforeOpen(Data::Db::TDataSource* ADataSource = (Data::Db::TDataSource*)(0x0), System::UnicodeString AMasterFields = System::UnicodeString(), System::UnicodeString ADetailFields = System::UnicodeString());
	void __fastcall DoAfterOpen();
	void __fastcall DoAfterClose();
	void __fastcall DoBeforePost(bool AAllFields = false);
	void __fastcall DoAfterPost();
	void __fastcall DoBeforeDelete();
	void __fastcall DoAfterScroll();
	void __fastcall DoExecSQL();
	__property bool Loading = {read=FLoading, write=FLoading, nodefault};
	__property Data::Db::TParams* Params = {read=FParams, write=FParams};
	__property System::UnicodeString About = {read=GetAbout};
	__property TMcConnection* Connection = {read=FMcConnection, write=FMcConnection};
	__property System::Classes::TStrings* SQL = {read=GetSQL, write=SetSQL};
	__property TMcCached* Cache = {read=FCache, write=FCache};
	__property TMcPrimaryKeys* PrimaryKeys = {read=FMcPrimaryKeys, write=SetMcPrimaryKeys};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcbasedataset */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCBASEDATASET)
using namespace Umcbasedataset;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcBaseDataSetHPP
