﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcServer.pas' rev: 35.00 (Android)

#ifndef UmcserverHPP
#define UmcserverHPP

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
#include <uMcCommons.hpp>
#include <uMcParamsDB.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcserver
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcServer;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcServer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Umcdriverbase::TMcDriverBase* FDriver;
	System::UnicodeString FMyContent;
	Umcparamsdb::TMcParamsDB* FMParamsDB;
	Umccommons::TMcStreamKey* FStreamKey;
	System::Classes::TNotifyEvent FBeforeExecute;
	Umccommons::TMcEvent FOnError;
	System::UnicodeString __fastcall GetAbout();
	System::UnicodeString __fastcall OnResource(const System::UnicodeString AValue);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TMcServer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMcServer();
	System::UnicodeString __fastcall Resource(const System::UnicodeString AValue)/* overload */;
	System::Classes::TStream* __fastcall Resource(System::Classes::TStream* const AValue)/* overload */;
	__property System::UnicodeString MyContent = {read=FMyContent};
	__property Umcparamsdb::TMcParamsDB* ParamsDB = {read=FMParamsDB};
	__property Umccommons::TMcStreamKey* StreamKey = {read=FStreamKey, write=FStreamKey};
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
	__property Umcdriverbase::TMcDriverBase* Driver = {read=FDriver, write=FDriver};
	__property System::Classes::TNotifyEvent BeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property Umccommons::TMcEvent OnError = {read=FOnError, write=FOnError};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCSERVER)
using namespace Umcserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcserverHPP
