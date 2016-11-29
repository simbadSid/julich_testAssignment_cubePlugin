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
		// Attributes
		QLabel*		label_fileName;
		QPushButton*	button_loadFile;
		QPushButton*	button_removeEntry;
		cube::Cube*	cube;
		ListCubeEntry*	next;

		// Builder
		ListCubeEntry();
		~ListCubeEntry();

		// Methodes
		ListCubeEntry*	appendNewEntry();
		bool		isInitializedEntry();
		int		getNbrNonNullCube();
		int		getNonNullCube( cube::Cube** nonNullCubes );
		bool		removeEntry( ListCubeEntry *entry );
}



#endif // LIST_CUBE_ENTRY_H
