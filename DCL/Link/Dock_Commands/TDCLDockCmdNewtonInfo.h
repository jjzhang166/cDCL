// ==============================
// Fichier:			TDCLDockCmdNewtonInfo.h
// Projet:			Desktop Connection Library
//
// Cr�� le:			06/02/2001
// Tabulation:		4 espaces
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
// The Original Code is TDCLDockCmdNewtonInfo.h.
//
// The Initial Developers of the Original Code are Paul Guyot, Michael Vac�k
// and Nicolas Zinovieff. Portions created by the Initial Developers are
// Copyright (C) 2001-2004 the Initial Developers. All Rights Reserved.
//
// Contributor(s):
//   Paul Guyot <pguyot@kallisys.net> (original author)
//   Michael Vac�k <mici@metastasis.net> (original author)
//   Nicolas Zinovieff <krugazor@poulet.org> (original author)
//
// ***** END LICENSE BLOCK *****
// ===========
// $Id: TDCLDockCmdNewtonInfo.h,v 1.3 2004/11/24 14:09:04 paul Exp $
// ===========

#ifndef __TDCLDOCKCMDNEWTONINFO__
#define __TDCLDOCKCMDNEWTONINFO__

#include <DCL/Headers/DCLDefinitions.h>
#include <DCL/Link/Dock_Commands/TDCLDockCommand.h>

///
/// Classe pour les commandes comprenant les informations sur le Newton.
///
/// \author Paul Guyot <pguyot@kallisys.net>
/// \version $Revision: 1.3 $
///
/// \test	aucun test d�fini.
///
class TDCLDockCmdNewtonInfo
	:
		public TDCLDockCommand
{
public:
	///
	/// Constructeur unique � partir de donn�es.
	///
	/// \param inLength	taille des donn�es
	/// \param inData	donn�es (copi�es)
	///
	TDCLDockCmdNewtonInfo( KUInt32 inLength, const void* inData );
	
	///
	/// Accesseur sur la version du protocol de Dock g�r�e par le Newton.
	///
	/// \return la version du protocol g�r� par le Newton.
	///
	inline	KUInt32			GetProtocolVersion( void )
		{
			return mNewtonInfo.fProtocolVersion;
		}
		
	///
	/// Accesseur sur un mot de 64 bits al�atoire pour le d�fi DES.
	///
	/// \return un pointeur sur le d�fi DES.
	///
	inline	KUInt32*			GetChallenge( void )
		{
			return mNewtonInfo.fChallenge;
		}

private:
	///
	/// Structure pour les informations venant du Newton.
	///
	struct SNewtonInfo
	{
		KUInt32		fProtocolVersion;	///< Version du protocol g�r�e.
		KUInt32		fChallenge[2];		///< Deux nombres al�atoires pour le d�fi DES.
	};
	
	/// \name Variables

	SNewtonInfo			mNewtonInfo;	///< Informations de cette commande.
};

#endif
		// __TDCLDOCKCMDNEWTONINFO__

// ===================================================== //
// You have a massage (from the Swedish prime minister). //
// ===================================================== //
