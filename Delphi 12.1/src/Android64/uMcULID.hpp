// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcULID.pas' rev: 36.00 (Android)

#ifndef uMcULIDHPP
#define uMcULIDHPP

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
#include <System.DateUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umculid
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcULID;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcULID : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod System::UnicodeString __fastcall EncodeTime(__int64 ATime);
	__classmethod System::UnicodeString __fastcall EncodeRandom();
	
public:
	__classmethod System::UnicodeString __fastcall Generate();
public:
	/* TObject.Create */ inline __fastcall TMcULID() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMcULID() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umculid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCULID)
using namespace Umculid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcULIDHPP
