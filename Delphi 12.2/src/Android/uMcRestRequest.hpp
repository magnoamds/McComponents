// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcRestRequest.pas' rev: 36.00 (Android)

#ifndef uMcRestRequestHPP
#define uMcRestRequestHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <REST.Types.hpp>
#include <uMcRestContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcrestrequest
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcRequest;
//-- type declarations -------------------------------------------------------
typedef Umcrestcontract::_di_IMcRequest IMcRequest;

typedef Umcrestcontract::_di_IMcResponse IMcResponse;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcRequest : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod IMcRequest __fastcall New();
public:
	/* TObject.Create */ inline __fastcall TMcRequest() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMcRequest() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static _DELPHI_CONST Rest::Types::TRESTRequestParameterOption poDoNotEncode = (Rest::Types::TRESTRequestParameterOption)(0);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterOption poTransient = (Rest::Types::TRESTRequestParameterOption)(1);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterOption poAutoCreated = (Rest::Types::TRESTRequestParameterOption)(2);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterOption poFlatArray = (Rest::Types::TRESTRequestParameterOption)(3);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterOption poPHPArray = (Rest::Types::TRESTRequestParameterOption)(4);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterOption poListArray = (Rest::Types::TRESTRequestParameterOption)(5);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkCOOKIE = (Rest::Types::TRESTRequestParameterKind)(0);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkGETorPOST = (Rest::Types::TRESTRequestParameterKind)(1);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkURLSEGMENT = (Rest::Types::TRESTRequestParameterKind)(2);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkHTTPHEADER = (Rest::Types::TRESTRequestParameterKind)(3);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkREQUESTBODY = (Rest::Types::TRESTRequestParameterKind)(4);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkFILE = (Rest::Types::TRESTRequestParameterKind)(5);
static _DELPHI_CONST Rest::Types::TRESTRequestParameterKind pkQUERY = (Rest::Types::TRESTRequestParameterKind)(6);
}	/* namespace Umcrestrequest */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCRESTREQUEST)
using namespace Umcrestrequest;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcRestRequestHPP
