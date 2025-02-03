// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcZMemTable.pas' rev: 35.00 (Android)

#ifndef UmczmemtableHPP
#define UmczmemtableHPP

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
#include <uMcBaseDataSet.hpp>
#include <ZAbstractRODataset.hpp>
#include <ZAbstractDataset.hpp>
#include <ZMemTable.hpp>
#include <ZDataset.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <uMcCache.hpp>
#include <uMcConnection.hpp>
#include <uMcPrimaryKey.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umczmemtable
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcZMemTable;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcZMemTable : public Zdataset::TZMemTable
{
	typedef Zdataset::TZMemTable inherited;
	
private:
	Umcbasedataset::TMcBaseDataSet* FMcBase;
	Data::Db::TParams* __fastcall GetMcParams();
	Umcprimarykey::TMcPrimaryKeys* __fastcall GetMcPrimaryKeys();
	System::UnicodeString __fastcall GetMcAbout();
	Umccache::TMcCached* __fastcall GetMcCache();
	Umcconnection::TMcConnection* __fastcall GetMcConnection();
	System::Classes::TStrings* __fastcall GetHcSQL();
	void __fastcall SetMcParams(Data::Db::TParams* const Value);
	void __fastcall SetMcPrimaryKeys(Umcprimarykey::TMcPrimaryKeys* const Value);
	void __fastcall SetMcCache(Umccache::TMcCached* const Value);
	void __fastcall SetMcConnection(Umcconnection::TMcConnection* const Value);
	void __fastcall SetMcSQL(System::Classes::TStrings* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall InternalClose();
	virtual void __fastcall DoBeforeOpen();
	virtual void __fastcall DoAfterOpen();
	virtual void __fastcall DoAfterClose();
	virtual void __fastcall DoBeforeInsert();
	virtual void __fastcall DoAfterInsert();
	virtual void __fastcall DoBeforePost();
	virtual void __fastcall DoAfterPost();
	virtual void __fastcall DoBeforeDelete();
	virtual void __fastcall DoAfterDelete();
	virtual void __fastcall DoBeforeScroll();
	virtual void __fastcall DoAfterScroll();
	virtual void __fastcall DoOnNewRecord();
	virtual void __fastcall DoAfterRefresh();
	
public:
	__fastcall virtual TMcZMemTable(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcZMemTable();
	virtual void __fastcall ExecSQL();
	HIDESBASE Data::Db::TParam* __fastcall ParamByName(const System::UnicodeString Value);
	
__published:
	__property Active = {default=0};
	__property LinkedFields = {default=0};
	__property MasterFields = {default=0};
	__property MasterSource;
	__property System::UnicodeString About = {read=GetMcAbout};
	__property Umccache::TMcCached* Cache = {read=GetMcCache, write=SetMcCache};
	__property Umcconnection::TMcConnection* Connection = {read=GetMcConnection, write=SetMcConnection};
	__property Umcprimarykey::TMcPrimaryKeys* PrimaryKeys = {read=GetMcPrimaryKeys, write=SetMcPrimaryKeys};
	__property Data::Db::TParams* Params = {read=GetMcParams, write=SetMcParams};
	__property System::Classes::TStrings* SQL = {read=GetHcSQL, write=SetMcSQL};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umczmemtable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCZMEMTABLE)
using namespace Umczmemtable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmczmemtableHPP
