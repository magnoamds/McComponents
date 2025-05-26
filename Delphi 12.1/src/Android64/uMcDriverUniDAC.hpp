// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcDriverUniDAC.pas' rev: 36.00 (Android)

#ifndef uMcDriverUniDACHPP
#define uMcDriverUniDACHPP

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
#include <uMcDriverBase.hpp>
#include <uMcEngineContract.hpp>
#include <Uni.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcdriverunidac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcDriverUniDAC;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcDriverUniDAC : public Umcdriverbase::TMcDriverBase
{
	typedef Umcdriverbase::TMcDriverBase inherited;
	
private:
	Uni::TUniConnection* FConnection;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TMcDriverUniDAC(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcDriverUniDAC();
	virtual Umcenginecontract::_di_IMcEngine __fastcall GetEngine();
	
__published:
	__property Uni::TUniConnection* Connection = {read=FConnection, write=FConnection};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcdriverunidac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCDRIVERUNIDAC)
using namespace Umcdriverunidac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcDriverUniDACHPP
