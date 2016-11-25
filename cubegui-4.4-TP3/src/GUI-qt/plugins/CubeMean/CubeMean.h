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


#ifndef CUBE_TOOLS_MEAN_H
#define CUBE_TOOLS_MEAN_H

#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include "ContextFreePlugin.h"
#include "ContextFreeServices.h"

class CubeMean : public QObject, public cubepluginapi::ContextFreePlugin
{
	Q_OBJECT
	Q_INTERFACES( cubepluginapi::ContextFreePlugin )
#if QT_VERSION >= 0x050000
	Q_PLUGIN_METADATA( IID "CubeMeanPlugin" )
#endif


public:
	// ContextFreePlugin interface
	virtual QString
	name() const;

	virtual void
	opened( cubepluginapi::ContextFreeServices* service );

	virtual void
	closed();

	virtual void
	version(	int& major,
			int& minor,
			int& bugfix ) const;

	virtual QString
	getHelpText() const;

private slots:
	void
	startAction();
	void
	loadFile1();
	void
	loadFile2();
	void
	uncheckChoice();

private:
	cubepluginapi::ContextFreeServices* service;

	cube::Cube*  cube1;
	cube::Cube*  cube2;
	QPushButton* mean;
	QLabel*      fileName1;
	QLabel*      fileName2;
	QCheckBox*   reduce;
	QCheckBox*   collapse;
	void
	loadFile(	cube::Cube** cube,
			QLabel*      label );
};

#endif // CUBE_TOOLS_H
