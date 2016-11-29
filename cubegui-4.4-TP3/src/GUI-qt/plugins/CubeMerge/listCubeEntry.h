/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
*****************************************************************************
**  Modification braugth by SID LAKHDAR Riyane:				   **
**	Objective: implement new context-free plugins			   **
*****************************************************************************/


#ifndef LIST_CUBE_ENTRY_H
#define LIST_CUBE_ENTRY_H

#include <QPushButton>
#include <QLabel>
#include "ContextFreeServices.h"


class ListCubeEntry
{
	public:
		// Builder
		ListCubeEntry();
		~ListCubeEntry();

		// Attributes
		QLabel*		label_fileName;
		QPushButton*	button_loadFile;
		QPushButton*	button_removeEntry;
		cube::Cube*	cube;
		ListCubeEntry*	next;

		// Methodes
		ListCubeEntry*	appendNewEntry();
		bool		isEmpty();
		int		getNbrNonNullCube();
		bool		removeEntry( ListCubeEntry *entry );

	private:
		bool		removeEntry( ListCubeEntry *entry, ListCubeEntry *previous );
}



#endif // LIST_CUBE_ENTRY_H
