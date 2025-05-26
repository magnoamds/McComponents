// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcEngineUniDAC.pas' rev: 36.00 (Android)

#ifndef uMcEngineUniDACHPP
#define uMcEngineUniDACHPP

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
#include <Data.DB.hpp>
#include <uMcEngineContract.hpp>
#include <Uni.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcengineunidac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcEngineUniDAC;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMcEngineUniDAC : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Uni::TUniConnection* FConnection;
	Uni::TUniQuery* FQry;
	Data::Db::TParams* FParams;
	
public:
	__fastcall TMcEngineUniDAC(Uni::TUniConnection* AConexao);
	__fastcall virtual ~TMcEngineUniDAC();
	__classmethod Umcenginecontract::_di_IMcEngine __fastcall New(Uni::TUniConnection* AConexao);
	bool __fastcall InTransaction();
	Umcenginecontract::_di_IMcEngine __fastcall StartTransaction();
	Umcenginecontract::_di_IMcEngine __fastcall Commit();
	Umcenginecontract::_di_IMcEngine __fastcall Rollback();
	System::Classes::TStrings* __fastcall SQL();
	Data::Db::TParams* __fastcall Params();
	Umcenginecontract::_di_IMcEngine __fastcall ExecSQL();
	Data::Db::TDataSet* __fastcall DataSet();
	Umcenginecontract::_di_IMcEngine __fastcall Open(System::UnicodeString ASQL)/* overload */;
	Umcenginecontract::_di_IMcEngine __fastcall Open()/* overload */;
	Umcenginecontract::_di_IMcEngine __fastcall Close();
	Umcenginecontract::_di_IMcEngine __fastcall OpenConnection();
	Umcenginecontract::_di_IMcEngine __fastcall CloseConnection();
	bool __fastcall ConnectionExecSQL(const System::UnicodeString ASQL);
	Umcenginecontract::_di_IMcEngine __fastcall SaveToStream(System::Classes::TStream* AStream);
private:
	void *__IMcEngine;	// Umcenginecontract::IMcEngine 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CC056AF1-2C82-4721-8B7B-FAF7D840291C}
	operator Umcenginecontract::_di_IMcEngine()
	{
		Umcenginecontract::_di_IMcEngine intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Umcenginecontract::IMcEngine*(void) { return (Umcenginecontract::IMcEngine*)&__IMcEngine; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcengineunidac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCENGINEUNIDAC)
using namespace Umcengineunidac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcEngineUniDACHPP
