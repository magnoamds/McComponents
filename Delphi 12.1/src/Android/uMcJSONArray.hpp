// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcJSONArray.pas' rev: 36.00 (Android)

#ifndef uMcJSONArrayHPP
#define uMcJSONArrayHPP

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

namespace Umcjsonarray
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcJSONArray;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcJSONArray : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	Umcjsoncontract::_di_IMcJSONValue operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Json::TJSONArray* FJSONArray;
	bool FSelfOwns;
	Umcjsoncontract::_di_IMcJSONValue __fastcall GetItems(int AIndex);
	
public:
	__fastcall TMcJSONArray();
	__fastcall virtual ~TMcJSONArray();
	static Umcjsoncontract::_di_IMcJSONArray __fastcall New();
	Umcjsoncontract::_di_IMcJSONArray __fastcall Parse(const System::UnicodeString AJSONString);
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(System::Json::TJSONValue* const AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const System::UnicodeString AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const __int64 AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const int AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const unsigned AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const double AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const System::Extended AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const System::Currency AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const bool AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const Umcjsoncontract::_di_IMcJSONObject AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONArray __fastcall Add(const Umcjsoncontract::_di_IMcJSONArray AValue)/* overload */;
	Umcjsoncontract::_di_IMcJSONObject __fastcall AddJSONObject();
	Umcjsoncontract::_di_IMcJSONArray __fastcall AddJSONArray();
	System::Json::TJSONArray* __fastcall Clone();
	System::Json::TJSONArray* __fastcall ToJSONNative(const bool ASelfOwns = false);
	System::UnicodeString __fastcall Stringify();
	bool __fastcall Contains(const int AIndex);
	Umcjsoncontract::_di_IMcJSONArray __fastcall Delete(const int AIndex);
	bool __fastcall IsEmpty();
	Umcjsoncontract::_di_IMcJSONArray __fastcall Clear();
	int __fastcall Count();
	__property Umcjsoncontract::_di_IMcJSONValue Items[int Index] = {read=GetItems/*, default*/};
private:
	void *__IMcJSONArray;	// Umcjsoncontract::IMcJSONArray 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A4E4A08C-6768-4BEC-AFF4-C0368C4C69DE}
	operator Umcjsoncontract::_di_IMcJSONArray()
	{
		Umcjsoncontract::_di_IMcJSONArray intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcjsoncontract::IMcJSONArray*(void) { return (Umcjsoncontract::IMcJSONArray*)&__IMcJSONArray; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcjsonarray */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCJSONARRAY)
using namespace Umcjsonarray;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcJSONArrayHPP
