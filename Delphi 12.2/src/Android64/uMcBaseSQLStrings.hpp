// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcBaseSQLStrings.pas' rev: 36.00 (Android)

#ifndef uMcBaseSQLStringsHPP
#define uMcBaseSQLStringsHPP

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
#include <uMcCommons.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcbasesqlstrings
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcSQLStrings;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcSQLStrings : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
protected:
	virtual void __fastcall Changed();
public:
	/* TStringList.Create */ inline __fastcall TMcSQLStrings()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TMcSQLStrings(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TMcSQLStrings(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TMcSQLStrings(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TMcSQLStrings(System::Classes::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TMcSQLStrings() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcbasesqlstrings */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCBASESQLSTRINGS)
using namespace Umcbasesqlstrings;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcBaseSQLStringsHPP
