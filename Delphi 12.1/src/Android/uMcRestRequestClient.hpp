// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcRestRequestClient.pas' rev: 36.00 (Android)

#ifndef uMcRestRequestClientHPP
#define uMcRestRequestClientHPP

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
#include <REST.Client.hpp>
#include <REST.Types.hpp>
#include <System.Net.HttpClient.hpp>
#include <REST.Authenticator.Basic.hpp>
#include <uMcRestContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcrestrequestclient
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcRequestClient;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcRequestClient : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TStrings* FParams;
	Umcrestcontract::_di_IMcResponse FResponse;
	System::Classes::TStrings* FHeaders;
	Rest::Authenticator::Basic::THTTPBasicAuthenticator* FHTTPBasicAuthenticator;
	Rest::Client::TRESTRequest* FRESTRequest;
	Rest::Client::TRESTResponse* FRESTResponse;
	Rest::Client::TRESTClient* FRESTClient;
	int FRetries;
	void __fastcall ExecuteRequest();
	void __fastcall DoJoinComponents();
	System::UnicodeString __fastcall PrepareUrlSegments(const System::UnicodeString AValue);
	System::UnicodeString __fastcall AcceptEncoding()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall AcceptEncoding(const System::UnicodeString AAcceptEncoding)/* overload */;
	System::UnicodeString __fastcall AcceptCharset()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall AcceptCharset(const System::UnicodeString AAcceptCharset)/* overload */;
	System::UnicodeString __fastcall Accept()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall Accept(const System::UnicodeString AAccept)/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall BaseURL(const System::UnicodeString ABaseURL)/* overload */;
	System::UnicodeString __fastcall BaseURL()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall Resource(const System::UnicodeString AResource)/* overload */;
	System::UnicodeString __fastcall Resource()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall ResourceSuffix(const System::UnicodeString AResourceSuffix)/* overload */;
	System::UnicodeString __fastcall ResourceSuffix()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall Timeout(const int ATimeout)/* overload */;
	int __fastcall Timeout()/* overload */;
	bool __fastcall RaiseExceptionOn500()/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall RaiseExceptionOn500(const bool ARaiseException)/* overload */;
	System::UnicodeString __fastcall FullRequestURL(const bool AIncludeParams = true);
	Umcrestcontract::_di_IMcRequest __fastcall Token(const System::UnicodeString AToken);
	Umcrestcontract::_di_IMcRequest __fastcall TokenBearer(const System::UnicodeString AToken);
	Umcrestcontract::_di_IMcRequest __fastcall BasicAuthentication(const System::UnicodeString AUsername, const System::UnicodeString APassword);
	Umcrestcontract::_di_IMcRequest __fastcall Retry(const int ARetries);
	Umcrestcontract::_di_IMcResponse __fastcall Get();
	Umcrestcontract::_di_IMcResponse __fastcall Post();
	Umcrestcontract::_di_IMcResponse __fastcall Put();
	Umcrestcontract::_di_IMcResponse __fastcall Delete();
	Umcrestcontract::_di_IMcResponse __fastcall Patch();
	Umcrestcontract::_di_IMcRequest __fastcall ClearBody();
	Umcrestcontract::_di_IMcRequest __fastcall AddParam(const System::UnicodeString AName, const System::UnicodeString AValue, const Rest::Types::TRESTRequestParameterKind AKind = (Rest::Types::TRESTRequestParameterKind)(0x6));
	Umcrestcontract::_di_IMcRequest __fastcall AddBody(const System::UnicodeString AContent, const Rest::Types::TRESTContentType AContentType = u"application/json")/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall AddBody(System::Classes::TStream* const AContent, const bool AOwns = true)/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall FallbackCharsetEncoding(const System::UnicodeString AFallbackCharsetEncoding);
	Umcrestcontract::_di_IMcRequest __fastcall AddUrlSegment(const System::UnicodeString AName, const System::UnicodeString AValue);
	Umcrestcontract::_di_IMcRequest __fastcall SynchronizedEvents(const bool AValue);
	Umcrestcontract::_di_IMcRequest __fastcall ClearHeaders();
	Umcrestcontract::_di_IMcRequest __fastcall AddHeader(const System::UnicodeString AName, const System::UnicodeString AValue, const Rest::Types::TRESTRequestParameterOptions AOptions = Rest::Types::TRESTRequestParameterOptions() );
	Umcrestcontract::_di_IMcRequest __fastcall ClearParams();
	Umcrestcontract::_di_IMcRequest __fastcall ContentType(const System::UnicodeString AContentType);
	Umcrestcontract::_di_IMcRequest __fastcall UserAgent(const System::UnicodeString AName);
	Umcrestcontract::_di_IMcRequest __fastcall AddField(const System::UnicodeString AFieldName, const System::UnicodeString AValue)/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall AddFile(const System::UnicodeString AFieldName, const System::UnicodeString AFileName, const Rest::Types::TRESTContentType AContentType = Rest::Types::TRESTContentType())/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall AddFile(const System::UnicodeString AFieldName, System::Classes::TStream* const AValue, const System::UnicodeString AFileName = System::UnicodeString(), const Rest::Types::TRESTContentType AContentType = Rest::Types::TRESTContentType())/* overload */;
	Umcrestcontract::_di_IMcRequest __fastcall Proxy(const System::UnicodeString AServer, const System::UnicodeString APassword, const System::UnicodeString AUsername, const int APort);
	Umcrestcontract::_di_IMcRequest __fastcall DeactivateProxy();
	
protected:
	virtual void __fastcall DoAfterExecute(Rest::Client::TCustomRESTRequest* Sender);
	virtual void __fastcall DoBeforeExecute(Rest::Client::TCustomRESTRequest* Sender);
	virtual void __fastcall DoHTTPProtocolError(Rest::Client::TCustomRESTRequest* Sender);
	
public:
	__fastcall virtual TMcRequestClient();
	__fastcall virtual ~TMcRequestClient();
	__classmethod Umcrestcontract::_di_IMcRequest __fastcall New();
private:
	void *__IMcRequest;	// Umcrestcontract::IMcRequest 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7CC1FE15-3BE2-4896-ADC9-BF2754AF9A34}
	operator Umcrestcontract::_di_IMcRequest()
	{
		Umcrestcontract::_di_IMcRequest intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcrestcontract::IMcRequest*(void) { return (Umcrestcontract::IMcRequest*)&__IMcRequest; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcrestrequestclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCRESTREQUESTCLIENT)
using namespace Umcrestrequestclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcRestRequestClientHPP
