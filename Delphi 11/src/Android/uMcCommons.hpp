﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcCommons.pas' rev: 35.00 (Android)

#ifndef UmccommonsHPP
#define UmccommonsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
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
class DELPHICLASS TMcStreamKey;
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

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcStreamKey : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FStartKey;
	int FMultKey;
	int FAddKey;
	
public:
	__fastcall TMcStreamKey();
	__fastcall virtual ~TMcStreamKey();
	__property int StartKey = {read=FStartKey, write=FStartKey, nodefault};
	__property int MultKey = {read=FMultKey, write=FMultKey, nodefault};
	__property int AddKey = {read=FAddKey, write=FAddKey, nodefault};
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
#endif	// UmccommonsHPP