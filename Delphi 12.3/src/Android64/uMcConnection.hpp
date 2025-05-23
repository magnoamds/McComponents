// CodeGear C++Builder
// Copyright (c) 1995, 2025 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcConnection.pas' rev: 36.00 (Android)

#ifndef uMcConnectionHPP
#define uMcConnectionHPP

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
#include <uMcCommons.hpp>
#include <uMcParamsDB.hpp>
#include <uMcJSON.hpp>
#include <uMcRestRequest.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcconnection
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcProxy;
class DELPHICLASS TMcBasicAuthentication;
class DELPHICLASS TMcConnection;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcProxy : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FServer;
	int FPort;
	System::UnicodeString FUserName;
	System::UnicodeString FPassword;
	
public:
	__fastcall TMcProxy();
	
__published:
	__property System::UnicodeString Server = {read=FServer, write=FServer};
	__property int Port = {read=FPort, write=FPort, default=0};
	__property System::UnicodeString UserName = {read=FUserName, write=FUserName};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TMcProxy() { }
	
};


class PASCALIMPLEMENTATION TMcBasicAuthentication : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FUserName;
	System::UnicodeString FPassword;
	
public:
	__fastcall TMcBasicAuthentication();
	
__published:
	__property System::UnicodeString UserName = {read=FUserName, write=FUserName};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TMcBasicAuthentication() { }
	
};


class PASCALIMPLEMENTATION TMcConnection : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FBaseURL;
	System::UnicodeString FResource;
	TMcBasicAuthentication* FBasicAuthentication;
	TMcProxy* FProxy;
	System::UnicodeString FMyContent;
	System::UnicodeString FSecurityKey;
	int FTimeout;
	Umcparamsdb::TMcParamsDB* FMParamsDB;
	System::Classes::TNotifyEvent FOnBeforeConnect;
	System::UnicodeString __fastcall GetAbout();
	System::UnicodeString __fastcall GetBaseURL();
	System::UnicodeString __fastcall GetResource();
	
public:
	__fastcall virtual TMcConnection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcConnection();
	Umcjson::IMcJSONObject __fastcall GetJSONObjectPost();
	Umcjson::IMcJSONObject __fastcall OnRequestPost(Umcjson::IMcJSONObject AJSONObject);
	bool __fastcall ExecSQL(const System::UnicodeString ASQL);
	bool __fastcall FileUpload(const System::UnicodeString AFile, const System::UnicodeString ADirectory = System::UnicodeString())/* overload */;
	bool __fastcall FileUpload(System::Classes::TStream* const AFile, const System::UnicodeString AName, const System::UnicodeString ADirectory = System::UnicodeString())/* overload */;
	System::Classes::TStream* __fastcall FileDownload(const System::UnicodeString AName, const System::UnicodeString ADirectory = System::UnicodeString());
	Umcjson::IMcJSONArray __fastcall FileList(const System::UnicodeString ADirectory = System::UnicodeString());
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
	__property System::UnicodeString BaseURL = {read=GetBaseURL, write=FBaseURL};
	__property System::UnicodeString Resource = {read=GetResource, write=FResource};
	__property TMcBasicAuthentication* BasicAuthentication = {read=FBasicAuthentication, write=FBasicAuthentication};
	__property TMcProxy* Proxy = {read=FProxy, write=FProxy};
	__property System::UnicodeString MyContent = {read=FMyContent, write=FMyContent};
	__property System::UnicodeString SecurityKey = {read=FSecurityKey, write=FSecurityKey};
	__property int Timeout = {read=FTimeout, write=FTimeout, default=30000};
	__property Umcparamsdb::TMcParamsDB* ParamsDB = {read=FMParamsDB, write=FMParamsDB};
	__property System::Classes::TNotifyEvent OnBeforeConnect = {read=FOnBeforeConnect, write=FOnBeforeConnect};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcconnection */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCCONNECTION)
using namespace Umcconnection;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcConnectionHPP
