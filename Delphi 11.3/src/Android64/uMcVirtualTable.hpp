// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcVirtualTable.pas' rev: 35.00 (Android)

#ifndef UmcvirtualtableHPP
#define UmcvirtualtableHPP

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
#include <VirtualTable.hpp>
#include <MemDS.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <uMcCache.hpp>
#include <uMcConnection.hpp>
#include <uMcPrimaryKey.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcvirtualtable
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcVirtualTable;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcVirtualTable : public Virtualtable::TVirtualTable
{
	typedef Virtualtable::TVirtualTable inherited;
	
private:
	Umcbasedataset::TMcBaseDataSet* FMcBase;
	Data::Db::TParams* __fastcall GetMcParams();
	Umcprimarykey::TMcPrimaryKeys* __fastcall GetMcPrimaryKeys();
	System::UnicodeString __fastcall GetMcAbout();
	Umccache::TMcCached* __fastcall GetMcCache();
	Umcconnection::TMcConnection* __fastcall GetMcConnection();
	System::Classes::TStrings* __fastcall GetMcSQL();
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
	__fastcall virtual TMcVirtualTable(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcVirtualTable();
	void __fastcall ExecSQL();
	Data::Db::TParam* __fastcall ParamByName(const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString About = {read=GetMcAbout};
	__property Umccache::TMcCached* Cache = {read=GetMcCache, write=SetMcCache};
	__property Umcconnection::TMcConnection* Connection = {read=GetMcConnection, write=SetMcConnection};
	__property Umcprimarykey::TMcPrimaryKeys* PrimaryKeys = {read=GetMcPrimaryKeys, write=SetMcPrimaryKeys};
	__property Data::Db::TParams* Params = {read=GetMcParams, write=SetMcParams};
	__property System::Classes::TStrings* SQL = {read=GetMcSQL, write=SetMcSQL};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcvirtualtable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCVIRTUALTABLE)
using namespace Umcvirtualtable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcvirtualtableHPP
