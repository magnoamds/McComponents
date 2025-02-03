// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcPrimaryKey.pas' rev: 36.00 (Android)

#ifndef uMcPrimaryKeyHPP
#define uMcPrimaryKeyHPP

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
#include <uMcJSON.hpp>
#include <uMcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umcprimarykey
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMcPrimaryKeyItem;
class DELPHICLASS TMcPrimaryKeys;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcPrimaryKeyItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FAutoInc;
	Data::Db::TFieldType FDataType;
	System::UnicodeString FName;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	
__published:
	__property bool AutoInc = {read=FAutoInc, write=FAutoInc, nodefault};
	__property Data::Db::TFieldType DataType = {read=FDataType, write=FDataType, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TMcPrimaryKeyItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TMcPrimaryKeyItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMcPrimaryKeys : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
private:
	HIDESBASE TMcPrimaryKeyItem* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TMcPrimaryKeyItem* AValue);
	
public:
	Umcjson::IMcJSONArray __fastcall ToJSONArray();
	bool __fastcall Contains(System::UnicodeString AName);
	HIDESBASE TMcPrimaryKeyItem* __fastcall Add();
	HIDESBASE TMcPrimaryKeyItem* __fastcall Insert(int AIndex);
	__property TMcPrimaryKeyItem* Items[int Index] = {read=GetItem, write=SetItem};
public:
	/* TOwnedCollection.Create */ inline __fastcall TMcPrimaryKeys(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TMcPrimaryKeys() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umcprimarykey */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCPRIMARYKEY)
using namespace Umcprimarykey;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uMcPrimaryKeyHPP
