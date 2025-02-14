﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcDriverBase.pas' rev: 35.00 (Android)

#ifndef UmcdriverbaseHPP
#define UmcdriverbaseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <uMcEngineContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcdriverbase
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcDriverBase;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcDriverBase : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString __fastcall GetAbout();
	
public:
	virtual Umcenginecontract::_di_IMcEngine __fastcall GetEngine() = 0 ;
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
public:
	/* TComponent.Create */ inline __fastcall virtual TMcDriverBase(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TMcDriverBase() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcdriverbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCDRIVERBASE)
using namespace Umcdriverbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcdriverbaseHPP
