// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcMemTable.pas' rev: 35.00 (Android)

#ifndef UmcmemtableHPP
#define UmcmemtableHPP

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
#include <uMcCache.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Stan.StorageBin.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <uMcConnection.hpp>
#include <uMcPrimaryKey.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcmemtable
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcMemTable;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcMemTable : public Firedac::Comp::Client::TFDMemTable
{
	typedef Firedac::Comp::Client::TFDMemTable inherited;
	
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
	__fastcall virtual TMcMemTable(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcMemTable();
	void __fastcall ExecSQL();
	HIDESBASE Data::Db::TParam* __fastcall ParamByName(const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString About = {read=GetMcAbout};
	__property Umccache::TMcCached* Cache = {read=GetMcCache, write=SetMcCache};
	__property Umcconnection::TMcConnection* Connection = {read=GetMcConnection, write=SetMcConnection};
	__property Umcprimarykey::TMcPrimaryKeys* PrimaryKeys = {read=GetMcPrimaryKeys, write=SetMcPrimaryKeys};
	__property Data::Db::TParams* Params = {read=GetMcParams, write=SetMcParams};
	__property System::Classes::TStrings* SQL = {read=GetMcSQL, write=SetMcSQL};
	__property Fields;
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcmemtable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCMEMTABLE)
using namespace Umcmemtable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcmemtableHPP
