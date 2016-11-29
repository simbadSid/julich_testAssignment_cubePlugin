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


bool ListCubeEntry::isEmpty()
{
	return ((! this->label_fileName) && (! this->button_loadFile) && (! this->button_removeEntry) && (! this->cube));
}


ListCubeEntry* ListCubeEntry::appendNewEntry()
{
	if ( this->isEmpty() )
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


int ListCubeEntry::getNbrNonNullCube()
{
	int res = 0;

	if (this->cube)
		res ++;
	if (this->next)
		res += this->next->getNbrNonNullCube();

	return res;
}


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

