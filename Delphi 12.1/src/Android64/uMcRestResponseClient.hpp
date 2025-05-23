// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcRestResponseClient.pas' rev: 36.00 (Android)

#ifndef uMcRestResponseClientHPP
#define uMcRestResponseClientHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <uMcRestContract.hpp>
#include <REST.Client.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcrestresponseclient
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcResponseClient;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcResponseClient : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Rest::Client::TRESTResponse* FRESTResponse;
	System::Classes::TMemoryStream* FStreamValue;
	System::UnicodeString __fastcall Content();
	unsigned __fastcall ContentLength();
	System::UnicodeString __fastcall ContentType();
	System::UnicodeString __fastcall ContentEncoding();
	System::Classes::TStream* __fastcall ContentStream();
	int __fastcall StatusCode();
	System::UnicodeString __fastcall StatusText();
	System::Sysutils::TBytes __fastcall RawBytes();
	System::Classes::TStrings* __fastcall Headers();
	
public:
	__fastcall TMcResponseClient(Rest::Client::TRESTResponse* const ARESTResponse);
	__fastcall virtual ~TMcResponseClient();
private:
	void *__IMcResponse;	// Umcrestcontract::IMcResponse 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62F173B5-A01B-447B-9D01-4ECBC1D0B744}
	operator Umcrestcontract::_di_IMcResponse()
	{
		Umcrestcontract::_di_IMcResponse intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcrestcontract::IMcResponse*(void) { return (Umcrestcontract::IMcResponse*)&__IMcResponse; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcrestresponseclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCRESTRESPONSECLIENT)
using namespace Umcrestresponseclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcRestResponseClientHPP
