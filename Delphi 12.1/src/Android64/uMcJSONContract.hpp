// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcJSONContract.pas' rev: 36.00 (Android)

#ifndef uMcJSONContractHPP
#define uMcJSONContractHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.JSON.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcjsoncontract
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMcJSONValue;
typedef System::DelphiInterface<IMcJSONValue> _di_IMcJSONValue;
__interface DELPHIINTERFACE IMcJSONObject;
typedef System::DelphiInterface<IMcJSONObject> _di_IMcJSONObject;
__interface DELPHIINTERFACE IMcJSONArray;
typedef System::DelphiInterface<IMcJSONArray> _di_IMcJSONArray;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{129B85E0-1026-4E34-A94B-FFE6AC2D176A}") IMcJSONValue  : public System::IInterface 
{
	virtual System::Json::TJSONValue* __fastcall AsJSONValueNative() = 0 ;
	virtual _di_IMcJSONObject __fastcall AsJSONObject() = 0 ;
	virtual _di_IMcJSONArray __fastcall AsJSONArray() = 0 ;
	virtual System::UnicodeString __fastcall AsString() = 0 ;
	virtual unsigned __int64 __fastcall AsUInt64() = 0 ;
	virtual __int64 __fastcall AsInt64() = 0 ;
	virtual int __fastcall AsInteger() = 0 ;
	virtual unsigned __fastcall AsCardinal() = 0 ;
	virtual double __fastcall AsDouble() = 0 ;
	virtual System::Extended __fastcall AsExtended() = 0 ;
	virtual System::Currency __fastcall AsCurrency() = 0 ;
	virtual bool __fastcall AsBoolean() = 0 ;
	virtual bool __fastcall IsNull() = 0 ;
};

__interface  INTERFACE_UUID("{BD9FF7F2-7549-4CDF-83FA-9768358DC6B1}") IMcJSONObject  : public System::IInterface 
{
	
public:
	_di_IMcJSONValue operator[](System::UnicodeString Name) { return this->Values[Name]; }
	virtual _di_IMcJSONObject __fastcall Parse(const System::UnicodeString AJSONString) = 0 ;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, System::Json::TJSONValue* const AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::UnicodeString AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const unsigned __int64 AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const __int64 AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const int AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const unsigned AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const double AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::Extended AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::Currency AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const bool AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const _di_IMcJSONObject AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddPair(const System::UnicodeString AName, const _di_IMcJSONArray AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddJSONObject(const System::UnicodeString AName) = 0 ;
	virtual _di_IMcJSONArray __fastcall AddJSONArray(const System::UnicodeString AName) = 0 ;
	virtual System::Json::TJSONObject* __fastcall Clone() = 0 ;
	virtual System::Json::TJSONObject* __fastcall ToJSONNative(const bool ASelfOwns = false) = 0 ;
	virtual System::UnicodeString __fastcall Stringify() = 0 ;
	virtual bool __fastcall Contains(const System::UnicodeString AName) = 0 ;
	virtual _di_IMcJSONObject __fastcall Delete(const System::UnicodeString AName) = 0 ;
	virtual _di_IMcJSONObject __fastcall Clear() = 0 ;
	virtual bool __fastcall IsEmpty() = 0 ;
	virtual int __fastcall Count() = 0 ;
	virtual _di_IMcJSONValue __fastcall GetValues(System::UnicodeString AName) = 0 ;
	__property _di_IMcJSONValue Values[System::UnicodeString Name] = {read=GetValues/*, default*/};
};

__interface  INTERFACE_UUID("{A4E4A08C-6768-4BEC-AFF4-C0368C4C69DE}") IMcJSONArray  : public System::IInterface 
{
	
public:
	_di_IMcJSONValue operator[](int Index) { return this->Items[Index]; }
	virtual _di_IMcJSONArray __fastcall Parse(const System::UnicodeString AJSONString) = 0 ;
	virtual _di_IMcJSONArray __fastcall Add(System::Json::TJSONValue* const AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const System::UnicodeString AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const __int64 AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const int AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const unsigned AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const double AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const System::Extended AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const System::Currency AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const bool AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const _di_IMcJSONObject AValue) = 0 /* overload */;
	virtual _di_IMcJSONArray __fastcall Add(const _di_IMcJSONArray AValue) = 0 /* overload */;
	virtual _di_IMcJSONObject __fastcall AddJSONObject() = 0 ;
	virtual _di_IMcJSONArray __fastcall AddJSONArray() = 0 ;
	virtual System::Json::TJSONArray* __fastcall Clone() = 0 ;
	virtual System::Json::TJSONArray* __fastcall ToJSONNative(const bool ASelfOwns = false) = 0 ;
	virtual System::UnicodeString __fastcall Stringify() = 0 ;
	virtual bool __fastcall Contains(const int AIndex) = 0 ;
	virtual _di_IMcJSONArray __fastcall Delete(const int AIndex) = 0 ;
	virtual _di_IMcJSONArray __fastcall Clear() = 0 ;
	virtual bool __fastcall IsEmpty() = 0 ;
	virtual int __fastcall Count() = 0 ;
	virtual _di_IMcJSONValue __fastcall GetItems(int AIndex) = 0 ;
	__property _di_IMcJSONValue Items[int Index] = {read=GetItems/*, default*/};
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcjsoncontract */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCJSONCONTRACT)
using namespace Umcjsoncontract;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcJSONContractHPP
