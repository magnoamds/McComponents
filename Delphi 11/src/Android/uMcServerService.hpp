﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcServerService.pas' rev: 35.00 (Android)

#ifndef UmcserverserviceHPP
#define UmcserverserviceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Data.DB.hpp>
#include <System.Generics.Collections.hpp>
#include <System.IOUtils.hpp>
#include <uMcJSON.hpp>
#include <uMcTypes.hpp>
#include <uMcEngineContract.hpp>
#include <uMcDriverBase.hpp>
#include <uMcServerContract.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcserverservice
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcServerService;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcServerService : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Umcenginecontract::_di_IMcEngine FMcEngine;
	void __fastcall SetParamsDataSet(Umcenginecontract::_di_IMcEngine AMcEngine, Umcjsoncontract::_di_IMcJSONArray AJSONArray);
	System::UnicodeString __fastcall McFile(Umcjsoncontract::_di_IMcJSONObject AJSONObject);
	System::UnicodeString __fastcall Open(Umcjsoncontract::_di_IMcJSONArray AJSONItems);
	System::UnicodeString __fastcall Persistence(Umcjsoncontract::_di_IMcJSONArray AJSONItems);
	System::UnicodeString __fastcall ExecSQL(Umcjsoncontract::_di_IMcJSONArray AJSONItems);
	System::UnicodeString __fastcall ConnectionExecSQL(Umcjsoncontract::_di_IMcJSONObject AJSONObject);
	
public:
	__fastcall TMcServerService(Umcenginecontract::_di_IMcEngine AMcEngine);
	__fastcall virtual ~TMcServerService();
	__classmethod Umcservercontract::_di_IMcService __fastcall New(Umcenginecontract::_di_IMcEngine AMcEngine);
	System::UnicodeString __fastcall Resource(Umcjsoncontract::_di_IMcJSONObject AJSONObject);
private:
	void *__IMcService;	// Umcservercontract::IMcService 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0A898A94-88F8-46F9-BA3F-DB6C27A2435F}
	operator Umcservercontract::_di_IMcService()
	{
		Umcservercontract::_di_IMcService intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcservercontract::IMcService*(void) { return (Umcservercontract::IMcService*)&__IMcService; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcserverservice */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCSERVERSERVICE)
using namespace Umcserverservice;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcserverserviceHPP