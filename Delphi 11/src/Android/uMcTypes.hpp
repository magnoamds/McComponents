// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uMcTypes.pas' rev: 35.00 (Android)

#ifndef UmctypesHPP
#define UmctypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Umctypes
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TMcAction : unsigned char { mcConnExecSQL, mcOpen, mcPersistence, mcExecSQL, mcFile };

enum class DECLSPEC_DENUM TMcOperation : unsigned char { mcNone, mcInsert, mcUpdate, mcDelete };

enum class DECLSPEC_DENUM TMcFileOption : unsigned char { mcUpload, mcDownload, mcList };

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Umctypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UMCTYPES)
using namespace Umctypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UmctypesHPP
