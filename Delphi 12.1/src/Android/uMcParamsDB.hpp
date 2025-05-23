// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcParamsDB.pas' rev: 36.00 (Android)

#ifndef uMcParamsDBHPP
#define uMcParamsDBHPP

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
#include <uMcJSON.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcparamsdb
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcParamsDB;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcParamsDB : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FActive;
	System::UnicodeString FDriver;
	System::UnicodeString FHost;
	int FPort;
	System::UnicodeString FDatabase;
	System::UnicodeString FUser;
	System::UnicodeString FPassword;
	System::UnicodeString FCatalog;
	System::UnicodeString FCharacterSet;
	System::UnicodeString FLibPath;
	System::UnicodeString FSchema;
	
public:
	__fastcall TMcParamsDB();
	__fastcall virtual ~TMcParamsDB();
	void __fastcall FromJSON(const Umcjson::IMcJSONObject AJSONObject);
	Umcjson::IMcJSONObject __fastcall ToJSON();
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=0};
	__property System::UnicodeString Driver = {read=FDriver, write=FDriver};
	__property System::UnicodeString Host = {read=FHost, write=FHost};
	__property int Port = {read=FPort, write=FPort, nodefault};
	__property System::UnicodeString Database = {read=FDatabase, write=FDatabase};
	__property System::UnicodeString User = {read=FUser, write=FUser};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
	__property System::UnicodeString Schema = {read=FSchema, write=FSchema};
	__property System::UnicodeString Catalog = {read=FCatalog, write=FCatalog};
	__property System::UnicodeString CharacterSet = {read=FCharacterSet, write=FCharacterSet};
	__property System::UnicodeString LibPath = {read=FLibPath, write=FLibPath};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcparamsdb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCPARAMSDB)
using namespace Umcparamsdb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcParamsDBHPP
