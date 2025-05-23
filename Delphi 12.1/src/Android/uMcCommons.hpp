// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcCommons.pas' rev: 36.00 (Android)

#ifndef uMcCommonsHPP
#define uMcCommonsHPP

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
#include <uMcEngineContract.hpp>
#include <uMcConsts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umccommons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcCommons;
//-- type declarations -------------------------------------------------------
typedef System::DelphiInterface<System::Sysutils::TFunc__1<Umcenginecontract::_di_IMcEngine> > TMcFuncEngine;

typedef System::DelphiInterface<System::Sysutils::TFunc__1<System::UnicodeString> > TMcFuncContent;

typedef System::Sysutils::_di_TProc TMcProc;

typedef void __fastcall (__closure *TMcEvent)(const System::UnicodeString Value);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcCommons : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod bool __fastcall EvaluationExpired();
	__classmethod System::UnicodeString __fastcall GetMcInfo();
public:
	/* TObject.Create */ inline __fastcall TMcCommons() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMcCommons() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umccommons */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCCOMMONS)
using namespace Umccommons;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcCommonsHPP
