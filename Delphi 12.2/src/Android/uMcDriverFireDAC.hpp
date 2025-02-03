// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcDriverFireDAC.pas' rev: 36.00 (Android)

#ifndef uMcDriverFireDACHPP
#define uMcDriverFireDACHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <uMcDriverBase.hpp>
#include <uMcEngineContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcdriverfiredac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcDriverFireDAC;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcDriverFireDAC : public Umcdriverbase::TMcDriverBase
{
	typedef Umcdriverbase::TMcDriverBase inherited;
	
private:
	Firedac::Comp::Client::TFDCustomConnection* FConnection;
	bool FFreeConnection;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TMcDriverFireDAC(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcDriverFireDAC();
	virtual Umcenginecontract::_di_IMcEngine __fastcall GetEngine();
	
__published:
	__property Firedac::Comp::Client::TFDCustomConnection* Connection = {read=FConnection, write=FConnection};
	__property bool FreeConnection = {read=FFreeConnection, write=FFreeConnection, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcdriverfiredac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCDRIVERFIREDAC)
using namespace Umcdriverfiredac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcDriverFireDACHPP
