// ==============================
// File:			TDCLInspectorCmdDeletePkg.h
// Project:			Desktop Connection Library
//
// ***** BEGIN LICENSE BLOCK *****
// Version: MPL 1.1
//
// The contents of this file are subject to the Mozilla Public License Version
// 1.1 (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// for the specific language governing rights and limitations under the
// License.
//
// The Original Code is TDCLInspectorCmdDeletePkg.h.
//
// The Initial Developer of the Original Code is Eckhart K�ppen
// Copyright (C) 2007 the Initial Developers. All Rights Reserved.
//
// Contributor(s):
//   Eckhart K�ppen <eck@users.sourceforce.net> (original author)
//
// ***** END LICENSE BLOCK *****
// ===========
// $Id: $
// ===========

#ifndef __TDCLINSPECTORCMDDELETEPKG__
#define __TDCLINSPECTORCMDDELETEPKG__

#include <DCL/Headers/DCLDefinitions.h>
#include <DCL/Link/Inspector_Commands/TDCLInspectorCommand.h>

class TDCLInspectorCmdDeletePkg: public TDCLInspectorCommand
{
public:
									TDCLInspectorCmdDeletePkg( const KUInt16* inPackageName );
									TDCLInspectorCmdDeletePkg( const char* inPackageName );
};

#endif
