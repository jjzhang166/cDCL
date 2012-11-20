// ==============================
// Fichier:			TDCLPOSIXRootDir.h
// Projet:			Desktop Connection Library
// 
// Cr�� le:			22/6/2003
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
// The Original Code is TDCLPOSIXRootDir.h.
//
// The Initial Developers of the Original Code are Paul Guyot, Michael Vac�k
// and Nicolas Zinovieff. Portions created by the Initial Developers are
// Copyright (C) 2003-2004 the Initial Developers. All Rights Reserved.
//
// Contributor(s):
//   Paul Guyot <pguyot@kallisys.net> (original author)
//   Michael Vac�k <mici@metastasis.net> (original author)
//   Nicolas Zinovieff <krugazor@poulet.org> (original author)
//
// ***** END LICENSE BLOCK *****
// ===========
// $Id: TDCLPOSIXRootDir.h,v 1.6 2004/11/24 14:09:02 paul Exp $
// ===========

#ifndef _TDCLPOSIXROOTDIR_H
#define _TDCLPOSIXROOTDIR_H

#include <DCL/Headers/DCLDefinitions.h>
#include <DCL/Interfaces/TDCLRootFolder.h>
#include <DCL/Interfaces/POSIX/TDCLPOSIXDirBase.h>

// DCL
#include <DCL/Interfaces/POSIX/TDCLPOSIXFiles.h>

///
/// Classe pour la racine en POSIX.
///
/// \author Paul Guyot <pguyot@kallisys.net>
/// \version $Revision: 1.6 $
///
/// \test	aucun test d�fini.
///
class TDCLPOSIXRootDir
	:
		public TDCLPOSIXDirBase,
		public TDCLRootFolder
{
public:
	///
	/// Constructeur � partir de l'interface sur les fichiers.
	///
	/// \param inFilesIntf		interface pour les fichiers.
	///
	TDCLPOSIXRootDir( TDCLPOSIXFiles* inFilesIntf );

private:
	///
	/// Constructeur par copie volontairement indisponible.
	///
	/// \param inCopy		objet � copier
	///
	TDCLPOSIXRootDir( const TDCLPOSIXRootDir& inCopy );

	///
	/// Op�rateur d'assignation volontairement indisponible.
	///
	/// \param inCopy		objet � copier
	///
	TDCLPOSIXRootDir& operator = ( const TDCLPOSIXRootDir& inCopy );

	///
	/// Construit le nom de l'objet. C'est une cha�ne unicode UTF-16 qui est allou�e
	/// avec malloc. Cette m�thode n'est appel�e que si n�cessaire (au plus une fois).
	///
	/// \return le nom allou� avec malloc.
	/// \throw TDCLException si un probl�me est survenu.
	///
	virtual KUInt16*	MakeName( void ) const;
};

#endif
		// _TDCLPOSIXROOTDIR_H

// ==================================================================== //
// Machines certainly can solve problems, store information, correlate, //
// and play games -- but not with pleasure.                             //
//                 -- Leo Rosten                                        //
// ==================================================================== //
