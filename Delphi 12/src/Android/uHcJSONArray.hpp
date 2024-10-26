﻿// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcJSONArray.pas' rev: 36.00 (Android)

#ifndef uHcJSONArrayHPP
#define uHcJSONArrayHPP

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
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcjsonarray
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcJSONArray;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THcJSONArray : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	Uhcjsoncontract::_di_IHcJSONValue operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Json::TJSONArray* FJSONArray;
	bool FAOwns;
	Uhcjsoncontract::_di_IHcJSONValue __fastcall GetItems(int AIndex);
	
public:
	__fastcall THcJSONArray();
	__fastcall virtual ~THcJSONArray();
	static Uhcjsoncontract::_di_IHcJSONArray __fastcall New();
	Uhcjsoncontract::_di_IHcJSONArray __fastcall SetPointer(System::Json::TJSONValue* const AJSONValue);
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Parse(const System::UnicodeString AJSONString);
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(System::Json::TJSONValue* const AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const System::UnicodeString AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const __int64 AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const int AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const unsigned AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const double AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const System::Extended AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const System::Currency AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const bool AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const Uhcjsoncontract::_di_IHcJSONObject AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Add(const Uhcjsoncontract::_di_IHcJSONArray AValue)/* overload */;
	System::Json::TJSONArray* __fastcall ToJSONArray();
	System::UnicodeString __fastcall Stringify();
	bool __fastcall Contains(const int AIndex);
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Delete(const int AIndex);
	bool __fastcall IsEmpty();
	Uhcjsoncontract::_di_IHcJSONArray __fastcall Clear();
	int __fastcall Count();
	__property Uhcjsoncontract::_di_IHcJSONValue Items[int Index] = {read=GetItems/*, default*/};
private:
	void *__IHcJSONArray;	// Uhcjsoncontract::IHcJSONArray 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A4E4A08C-6768-4BEC-AFF4-C0368C4C69DE}
	operator Uhcjsoncontract::_di_IHcJSONArray()
	{
		Uhcjsoncontract::_di_IHcJSONArray intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcjsoncontract::IHcJSONArray*(void) { return (Uhcjsoncontract::IHcJSONArray*)&__IHcJSONArray; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcjsonarray */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCJSONARRAY)
using namespace Uhcjsonarray;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcJSONArrayHPP
