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


#include "listCubeEntry.h"




ListCubeEntry::ListCubeEntry()
{
	this->label_fileName		= NULL;
	this->button_loadFile		= NULL;
	this->button_removeEntry	= NULL;
	this->cube			= NULL;
	this->next			= NULL;
}


/**
 * Free all the allocated memory addresses (recursively on the next elements)
 */
ListCubeEntry::~ListCubeEntry()
{
	delete this-> label_fileName ;
	delete this-> button_loadFile ;
	delete this-> button_removeEntry;
	if (this->cube )
		delete this-> cube;
	if (this->next )
		delete this-> next ;
}


/**
 * Returns true if the current list head has been initilized
 */
bool ListCubeEntry::isInitializedEntry()
{
	return (( this->label_fileName ) || ( this->button_loadFile ) || ( this->button_removeEntry ) || ( this->cube ));
}


/**
 * Creates a new entry at the end of the list.
 * Returns a pointer on the created entry.
 */
ListCubeEntry* ListCubeEntry::appendNewEntry()
{
	if (! this->isInitializedEntry() )
	{
		this->label_fileName		= new QLabel();
		this->button_loadFile		= new QPushButton(QApplication::style()->standardIcon( QStyle::SP_DirOpenIcon ), " Open cube file" );
		this->button_removeEntry	= new QPushButton(QApplication::style()->standardIcon( QStyle::SP_DirOpenIcon ), " Remove" );
		this->cube			= NULL;
		this->next			= NULL;

		this->button_loadFile	->setStyleSheet( "padding:4px;text-align: left" );
		this->button_removeEntry->setStyleSheet( "padding:4px;text-align: left" );

		return this;
	}
	if (this->next == NULL)
		this->next = new LixtCubeEntry();

	return this->next->appendNewEntry();
}


/**
 * Returns the number of entries where the cube cell is non null (initialized) in the sublist starting at this.
 */
int ListCubeEntry::getNbrNonNullCube()
{
	return this->getNonNullCube(NULL);
}


/**
 * Returns the number of entries where the cube cell is non null (initialized) in the sublist starting at this.
 */
int ListCubeEntry::getNonNullCube( cube::Cube** nonNullCubes )
{
	cube::Cube** nonNullCubesNext = NULL;
	int res = 0;

	if (nonNullCubes != NULL)
	{
		nonNullCubesNext = nonNullCubes;
		nonNullCubesNext ++;
	}

	if (this->cube)
		res ++;
	if (this->next)
		res += this->next->getNonNullCube(nonNullCubesNext);

	return res;
}


/**
 * Removes the given entry pointer from the list.
 * Returns true if the given entry has been found.
 */
bool ListCubeEntry::removeEntry( ListCubeEntry *entry )
{
	if (entry == this)
	{
		if (this->next != NULL)
		{
			ListCubeEntry *nextTmp		= this->next->next;
			this->label_fileName		= this->next->label_fileName;
			this->button_loadFile		= this->next->button_loadFile;
			this->button_removeEntry	= this->next->button_removeEntry;
			this->cube			= this->next->cube;
			this->next->next		= NULL;
			delete this->next;
			this->next			= nextTmp;
		}
		else
		{
			this->label_fileName		= NULL;
			this->button_loadFile		= NULL;
			this->button_removeEntry	= NULL;
			this->cube			= NULL;
			delete this->next;
			this->next			= NULL;
		}
		return true;
	}
	if (! this->next)
		return false;
	return this->next->removeEntry( entry );
}

