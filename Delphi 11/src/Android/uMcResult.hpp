﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcResult.pas' rev: 35.00 (Android)

#ifndef UmcresultHPP
#define UmcresultHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <uMcJSON.hpp>
#include <uMcConsts.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcresult
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMcResult;
typedef System::DelphiInterface<IMcResult> _di_IMcResult;
class DELPHICLASS TMcResult;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{D6A418A6-BB22-41FE-BFFC-F0C88E5B2723}") IMcResult  : public System::IInterface 
{
	virtual _di_IMcResult __fastcall Success(const bool Value) = 0 ;
	virtual _di_IMcResult __fastcall Message(const System::UnicodeString Value) = 0 ;
	virtual _di_IMcResult __fastcall Data(const System::UnicodeString Value) = 0 /* overload */;
	virtual _di_IMcResult __fastcall Data(const Umcjsoncontract::_di_IMcJSONObject Value) = 0 /* overload */;
	virtual _di_IMcResult __fastcall Data(const Umcjsoncontract::_di_IMcJSONArray Value) = 0 /* overload */;
	virtual Umcjsoncontract::_di_IMcJSONObject __fastcall AsJSONObject() = 0 ;
	virtual System::UnicodeString __fastcall ToString() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcResult : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Umcjsoncontract::_di_IMcJSONObject FJSONObject;
	
public:
	__fastcall TMcResult(bool ASuccess);
	__fastcall virtual ~TMcResult();
	__classmethod _di_IMcResult __fastcall New(bool ASuccess = true);
	_di_IMcResult __fastcall Success(const bool Value);
	_di_IMcResult __fastcall Message(const System::UnicodeString Value);
	_di_IMcResult __fastcall Data(const System::UnicodeString Value)/* overload */;
	_di_IMcResult __fastcall Data(const Umcjsoncontract::_di_IMcJSONObject Value)/* overload */;
	_di_IMcResult __fastcall Data(const Umcjsoncontract::_di_IMcJSONArray Value)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AsJSONObject();
	virtual System::UnicodeString __fastcall ToString();
private:
	void *__IMcResult;	// IMcResult 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D6A418A6-BB22-41FE-BFFC-F0C88E5B2723}
	operator _di_IMcResult()
	{
		_di_IMcResult intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMcResult*(void) { return (IMcResult*)&__IMcResult; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcresult */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCRESULT)
using namespace Umcresult;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcresultHPP