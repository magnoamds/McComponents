﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcJSONObject.pas' rev: 35.00 (Android)

#ifndef UmcjsonobjectHPP
#define UmcjsonobjectHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.JSON.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcjsonobject
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcJSONObject;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcJSONObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	Umcjsoncontract::_di_IMcJSONValue operator[](System::UnicodeString Name) { return this->Values[Name]; }
	
private:
	System::Json::TJSONObject* FJSONObject;
	bool FAOwns;
	Umcjsoncontract::_di_IMcJSONValue __fastcall GetValues(System::UnicodeString AName);
	
public:
	__fastcall TMcJSONObject();
	__fastcall virtual ~TMcJSONObject();
	static Umcjsoncontract::_di_IMcJSONObject __fastcall New();
	Umcjsoncontract::_di_IMcJSONObject __fastcall SetPointer(System::Json::TJSONValue* const AJSONValue);
	Umcjsoncontract::_di_IMcJSONObject __fastcall Parse(const System::UnicodeString AJSONString);
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, System::Json::TJSONValue* const AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::UnicodeString AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const __int64 AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const int AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const unsigned AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const double AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::Extended AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::Currency AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const bool AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const Umcjsoncontract::_di_IMcJSONObject AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const Umcjsoncontract::_di_IMcJSONArray AValue)/* overload */;
	System::Json::TJSONObject* __fastcall ToJSONObject();
	System::UnicodeString __fastcall Stringify();
	bool __fastcall Contains(const System::UnicodeString AName);
	Umcjsoncontract::_di_IMcJSONObject __fastcall Delete(const System::UnicodeString AName);
	bool __fastcall IsEmpty();
	Umcjsoncontract::_di_IMcJSONObject __fastcall Clear();
	int __fastcall Count();
	__property Umcjsoncontract::_di_IMcJSONValue Values[System::UnicodeString Name] = {read=GetValues/*, default*/};
private:
	void *__IMcJSONObject;	// Umcjsoncontract::IMcJSONObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BD9FF7F2-7549-4CDF-83FA-9768358DC6B1}
	operator Umcjsoncontract::_di_IMcJSONObject()
	{
		Umcjsoncontract::_di_IMcJSONObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcjsoncontract::IMcJSONObject*(void) { return (Umcjsoncontract::IMcJSONObject*)&__IMcJSONObject; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcjsonobject */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCJSONOBJECT)
using namespace Umcjsonobject;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmcjsonobjectHPP