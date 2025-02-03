// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcJSON.pas' rev: 36.00 (Android)

#ifndef uMcJSONHPP
#define uMcJSONHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.JSON.hpp>
#include <uMcJSONContract.hpp>
#include <uMcJSONValue.hpp>
#include <uMcJSONObject.hpp>
#include <uMcJSONArray.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcjson
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef Umcjsoncontract::_di_IMcJSONValue IMcJSONValue;

typedef Umcjsoncontract::_di_IMcJSONObject IMcJSONObject;

typedef Umcjsoncontract::_di_IMcJSONArray IMcJSONArray;

using System::Json::TJSONValue;

using System::Json::TJSONPair;

using System::Json::TJSONObject;

using System::Json::TJSONArray;

using Umcjsonvalue::TMcJSONValue;

using Umcjsonobject::TMcJSONObject;

using Umcjsonarray::TMcJSONArray;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Json::TJSONNull* __fastcall McNull(void);
extern DELPHI_PACKAGE bool __fastcall IsMcJSONObject(const System::UnicodeString AValue);
extern DELPHI_PACKAGE bool __fastcall IsMcJSONArray(const System::UnicodeString AValue);
}	/* namespace Umcjson */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCJSON)
using namespace Umcjson;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcJSONHPP
