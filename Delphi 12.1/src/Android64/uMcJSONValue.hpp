// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcJSONValue.pas' rev: 36.00 (Android)

#ifndef uMcJSONValueHPP
#define uMcJSONValueHPP

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
#include <System.JSON.hpp>
#include <System.Generics.Collections.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcjsonvalue
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcJSONValue;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcJSONValue : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
public:
	enum DECLSPEC_DENUM THcTypeJson : unsigned char { tjunknown, tjValue, tjObject, tjArray };
	
	
private:
	System::UnicodeString FPairName;
	int FIndex;
	System::Json::TJSONObject* FJSONObject;
	System::Json::TJSONArray* FJSONArray;
	THcTypeJson FMcTypeJson;
	
public:
	__fastcall TMcJSONValue(System::Json::TJSONObject* AJSONObject, System::UnicodeString APairName)/* overload */;
	__fastcall TMcJSONValue(System::Json::TJSONArray* AJSONArray, int AIndex)/* overload */;
	__fastcall virtual ~TMcJSONValue();
	static Umcjsoncontract::_di_IMcJSONValue __fastcall New(System::Json::TJSONObject* AJSONObject, System::UnicodeString APairName)/* overload */;
	static Umcjsoncontract::_di_IMcJSONValue __fastcall New(System::Json::TJSONArray* AJSONArray, int AIndex)/* overload */;
	System::Json::TJSONValue* __fastcall AsJSONValueNative();
	Umcjsoncontract::_di_IMcJSONObject __fastcall AsJSONObject();
	Umcjsoncontract::_di_IMcJSONArray __fastcall AsJSONArray();
	System::UnicodeString __fastcall AsString();
	unsigned __int64 __fastcall AsUInt64();
	__int64 __fastcall AsInt64();
	int __fastcall AsInteger();
	unsigned __fastcall AsCardinal();
	double __fastcall AsDouble();
	System::Extended __fastcall AsExtended();
	System::Currency __fastcall AsCurrency();
	bool __fastcall AsBoolean();
	bool __fastcall IsNull();
private:
	void *__IMcJSONValue;	// Umcjsoncontract::IMcJSONValue 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {129B85E0-1026-4E34-A94B-FFE6AC2D176A}
	operator Umcjsoncontract::_di_IMcJSONValue()
	{
		Umcjsoncontract::_di_IMcJSONValue intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcjsoncontract::IMcJSONValue*(void) { return (Umcjsoncontract::IMcJSONValue*)&__IMcJSONValue; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcjsonvalue */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCJSONVALUE)
using namespace Umcjsonvalue;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcJSONValueHPP
