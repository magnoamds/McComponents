﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcDriverZeos.pas' rev: 35.00 (Android)

#ifndef UmcdriverzeosHPP
#define UmcdriverzeosHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <uMcDriverBase.hpp>
#include <uMcEngineContract.hpp>
#include <ZConnection.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcdriverzeos
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcDriverZeos;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcDriverZeos : public Umcdriverbase::TMcDriverBase
{
	typedef Umcdriverbase::TMcDriverBase inherited;
	
private:
	Zconnection::TZConnection* FConnection;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TMcDriverZeos(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcDriverZeos();
	virtual Umcenginecontract::_di_IMcEngine __fastcall GetEngine();
	
__published:
	__property Zconnection::TZConnection* Connection = {read=FConnection, write=FConnection};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcdriverzeos */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCDRIVERZEOS)
using namespace Umcdriverzeos;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcdriverzeosHPP
