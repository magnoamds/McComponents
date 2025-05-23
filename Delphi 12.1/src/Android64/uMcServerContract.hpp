// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcServerContract.pas' rev: 36.00 (Android)

#ifndef uMcServerContractHPP
#define uMcServerContractHPP

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
#include <uMcJSON.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcservercontract
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMcService;
typedef System::DelphiInterface<IMcService> _di_IMcService;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{0A898A94-88F8-46F9-BA3F-DB6C27A2435F}") IMcService  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall Resource(Umcjson::IMcJSONObject AJSONObject) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcservercontract */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCSERVERCONTRACT)
using namespace Umcservercontract;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcServerContractHPP
