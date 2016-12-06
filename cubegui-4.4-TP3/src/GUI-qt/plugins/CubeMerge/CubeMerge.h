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


#ifndef CUBE_TOOLS_MERGE_H
#define CUBE_TOOLS_MERGE_H

#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QSignalMapper>
#include "ContextFreePlugin.h"
#include "ContextFreeServices.h"
#include "ListCubeEntry.h"




class CubeMerge : public QObject, public cubepluginapi::ContextFreePlugin
{
    Q_OBJECT
    Q_INTERFACES( cubepluginapi::ContextFreePlugin )
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA( IID "CubeMergePlugin" )
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
    version( int& major,
             int& minor,
             int& bugfix ) const;

    virtual QString
    getHelpText() const;

private slots:
    void
    addCubeEntry();
    void
    loadFile( ListCubeEntry* element );
    void
    removeCubeEntry( ListCubeEntry* element );
    void
    startAction();
    void
    uncheckChoice();

private:
    cubepluginapi::ContextFreeServices*	service;

    ListCubeEntry*	listCubeEntry;
    QSignalMapper*	signalMapper_loadFile;
    QSignalMapper*	signalMapper_removeEntry;
    QPushButton*	addCube;
    QPushButton*	merge;
    QCheckBox*		reduce;
    QCheckBox*		collapse;
    void
    refreshGui();
};

#endif // CUBE_TOOLS_H
