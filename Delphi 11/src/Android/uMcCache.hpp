// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcCache.pas' rev: 35.00 (Android)

#ifndef UmccacheHPP
#define UmccacheHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <Data.DB.hpp>
#include <uMcConnection.hpp>
#include <uMcJSON.hpp>
#include <uMcTools.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umccache
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcCache;
class DELPHICLASS TMcCached;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcCache : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Umcjsoncontract::_di_IMcJSONArray FPersistence;
	Umcjsoncontract::_di_IMcJSONArray FExecSQL;
	Umcconnection::TMcConnection* FMcConnection;
	bool FClearOnClose;
	System::UnicodeString __fastcall GetAbout();
	bool __fastcall RequestPersistence();
	bool __fastcall RequestExecSQL();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TMcCache(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcCache();
	void __fastcall AddPersistence(const Umcjsoncontract::_di_IMcJSONObject AJSONObject);
	void __fastcall AddExecSQL(System::UnicodeString ASQL, Umcjsoncontract::_di_IMcJSONArray AParams);
	TMcCache* __fastcall Clear();
	int __fastcall CacheCount();
	bool __fastcall UpdatePending();
	bool __fastcall CommitUpdates();
	bool __fastcall ExecSQLPending();
	bool __fastcall CommitExecSQL();
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
	__property Umcconnection::TMcConnection* Connection = {read=FMcConnection, write=FMcConnection};
	__property bool ClearOnClose = {read=FClearOnClose, write=FClearOnClose, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcCached : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FActive;
	TMcCache* FMcCache;
	
public:
	__fastcall TMcCached();
	__fastcall virtual ~TMcCached();
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=0};
	__property TMcCache* McCache = {read=FMcCache, write=FMcCache};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umccache */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCCACHE)
using namespace Umccache;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmccacheHPP
