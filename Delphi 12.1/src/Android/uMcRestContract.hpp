// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcRestContract.pas' rev: 36.00 (Android)

#ifndef uMcRestContractHPP
#define uMcRestContractHPP

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
#include <REST.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcrestcontract
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMcResponse;
typedef System::DelphiInterface<IMcResponse> _di_IMcResponse;
__interface DELPHIINTERFACE IMcRequest;
typedef System::DelphiInterface<IMcRequest> _di_IMcRequest;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{62F173B5-A01B-447B-9D01-4ECBC1D0B744}") IMcResponse  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall Content() = 0 ;
	virtual unsigned __fastcall ContentLength() = 0 ;
	virtual System::UnicodeString __fastcall ContentType() = 0 ;
	virtual System::UnicodeString __fastcall ContentEncoding() = 0 ;
	virtual System::Classes::TStream* __fastcall ContentStream() = 0 ;
	virtual int __fastcall StatusCode() = 0 ;
	virtual System::UnicodeString __fastcall StatusText() = 0 ;
	virtual System::Sysutils::TBytes __fastcall RawBytes() = 0 ;
	virtual System::Classes::TStrings* __fastcall Headers() = 0 ;
};

__interface  INTERFACE_UUID("{7CC1FE15-3BE2-4896-ADC9-BF2754AF9A34}") IMcRequest  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall AcceptEncoding() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall AcceptEncoding(const System::UnicodeString AAcceptEncoding) = 0 /* overload */;
	virtual System::UnicodeString __fastcall AcceptCharset() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall AcceptCharset(const System::UnicodeString AAcceptCharset) = 0 /* overload */;
	virtual System::UnicodeString __fastcall Accept() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall Accept(const System::UnicodeString AAccept) = 0 /* overload */;
	virtual int __fastcall Timeout() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall Timeout(const int ATimeout) = 0 /* overload */;
	virtual _di_IMcRequest __fastcall BaseURL(const System::UnicodeString ABaseURL) = 0 /* overload */;
	virtual System::UnicodeString __fastcall BaseURL() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall Resource(const System::UnicodeString AResource) = 0 /* overload */;
	virtual bool __fastcall RaiseExceptionOn500() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall RaiseExceptionOn500(const bool ARaiseException) = 0 /* overload */;
	virtual System::UnicodeString __fastcall Resource() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall ResourceSuffix(const System::UnicodeString AResourceSuffix) = 0 /* overload */;
	virtual System::UnicodeString __fastcall ResourceSuffix() = 0 /* overload */;
	virtual _di_IMcRequest __fastcall Token(const System::UnicodeString AToken) = 0 ;
	virtual _di_IMcRequest __fastcall TokenBearer(const System::UnicodeString AToken) = 0 ;
	virtual _di_IMcRequest __fastcall BasicAuthentication(const System::UnicodeString AUsername, const System::UnicodeString APassword) = 0 ;
	virtual _di_IMcRequest __fastcall Retry(const int ARetries) = 0 ;
	virtual _di_IMcResponse __fastcall Get() = 0 ;
	virtual _di_IMcResponse __fastcall Post() = 0 ;
	virtual _di_IMcResponse __fastcall Put() = 0 ;
	virtual _di_IMcResponse __fastcall Delete() = 0 ;
	virtual _di_IMcResponse __fastcall Patch() = 0 ;
	virtual System::UnicodeString __fastcall FullRequestURL(const bool AIncludeParams = true) = 0 ;
	virtual _di_IMcRequest __fastcall ClearBody() = 0 ;
	virtual _di_IMcRequest __fastcall SynchronizedEvents(const bool AValue) = 0 ;
	virtual _di_IMcRequest __fastcall AddHeader(const System::UnicodeString AName, const System::UnicodeString AValue, const Rest::Types::TRESTRequestParameterOptions AOptions = Rest::Types::TRESTRequestParameterOptions() ) = 0 ;
	virtual _di_IMcRequest __fastcall AddParam(const System::UnicodeString AName, const System::UnicodeString AValue, const Rest::Types::TRESTRequestParameterKind AKind = (Rest::Types::TRESTRequestParameterKind)(0x6)) = 0 ;
	virtual _di_IMcRequest __fastcall AddBody(const System::UnicodeString AContent, const Rest::Types::TRESTContentType AContentType = u"application/json") = 0 /* overload */;
	virtual _di_IMcRequest __fastcall FallbackCharsetEncoding(const System::UnicodeString AFallbackCharsetEncoding) = 0 ;
	virtual _di_IMcRequest __fastcall AddBody(System::Classes::TStream* const AContent, const bool AOwns = true) = 0 /* overload */;
	virtual _di_IMcRequest __fastcall AddUrlSegment(const System::UnicodeString AName, const System::UnicodeString AValue) = 0 ;
	virtual _di_IMcRequest __fastcall ClearHeaders() = 0 ;
	virtual _di_IMcRequest __fastcall ClearParams() = 0 ;
	virtual _di_IMcRequest __fastcall UserAgent(const System::UnicodeString AName) = 0 ;
	virtual _di_IMcRequest __fastcall ContentType(const System::UnicodeString AContentType) = 0 ;
	virtual _di_IMcRequest __fastcall AddField(const System::UnicodeString AFieldName, const System::UnicodeString AValue) = 0 /* overload */;
	virtual _di_IMcRequest __fastcall AddFile(const System::UnicodeString AFieldName, const System::UnicodeString AFileName, const Rest::Types::TRESTContentType AContentType = Rest::Types::TRESTContentType()) = 0 /* overload */;
	virtual _di_IMcRequest __fastcall AddFile(const System::UnicodeString AFieldName, System::Classes::TStream* const AValue, const System::UnicodeString AFileName = System::UnicodeString(), const Rest::Types::TRESTContentType AContentType = Rest::Types::TRESTContentType()) = 0 /* overload */;
	virtual _di_IMcRequest __fastcall Proxy(const System::UnicodeString AServer, const System::UnicodeString APassword, const System::UnicodeString AUsername, const int APort) = 0 ;
	virtual _di_IMcRequest __fastcall DeactivateProxy() = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcrestcontract */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCRESTCONTRACT)
using namespace Umcrestcontract;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcRestContractHPP
