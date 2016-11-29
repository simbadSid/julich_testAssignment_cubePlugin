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


#include <QtPlugin>
#include <QDebug>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QApplication>
#include <QStyle>

#include "CubeMerge.h"
#include "ContextFreeServices.h"
#include "Cube.h"
#include "algebra4.h"
#include "Globals.h"

using namespace cube;
using namespace cubepluginapi;

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2( CubeMergePlugin, CubeMerge ) // ( PluginName, ClassName )
#endif

void
CubeMerge::version( int& major, int& minor, int& bugfix ) const
{
    major  = 1;
    minor  = 0;
    bugfix = 0;
}

QString
CubeMerge::name() const
{
    return "CubeMerge";
}

void
CubeMerge::opened( ContextFreeServices* service )
{
    this->service	= service;
    this->merge		= 0;
    this->listCubeEntry	= new ListCubeEntry();

    this->signalMapper_loadFile		= new QSignalMapper (this);
    this->signalMapper_removeEntry	= new QSignalMapper (this);

    merge	= new QPushButton( "Show merge" );
    addCube	= new QPushButton( "Add cube" );
    reduce	= new QCheckBox( "Reduce system dimension" );
    collapse	= new QCheckBox( "Collapse system dimension" );
    connect( merge,			SIGNAL( clicked() ),	this, SLOT( startAction() ) );
    connect( addCube,			SIGNAL( clicked() ),	this, SLOT( addCubeEntry() ) );
    connect( reduce,			SIGNAL( pressed() ),	this, SLOT( uncheckChoice() ) );
    connect( collapse,			SIGNAL( pressed() ),	this, SLOT( uncheckChoice() ) );
    connect( signalMapper_loadFile,	SIGNAL( mapped(int)),	this, SLOT( loadFile( ListCubeEntry* ) ) );
    connect( signalMapper_removeEntry,	SIGNAL( mapped(int)),	this, SLOT( removeCubeEntry( ListCubeEntry* ) ) );

    merge->setEnabled( false );
    merge->setStyleSheet( "padding:4px;text-align: center" );

    refreshGui();
}

void
CubeMerge::refreshGui()
{
    QWidget*	 widget		= this->service->getWidget();
    QWidget*	 inner		= new QWidget();
    QGridLayout* layout		= new QGridLayout( inner );
    QHBoxLayout* layoutOuter	= new QHBoxLayout();

    widget	->setLayout( layoutOuter );
    layoutOuter	->addWidget( inner );
    inner	->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Maximum );

    int line = 0;
    ListCubeEntry* listCubeEntryPtr = this->listCubeEntry;

    while(listCubeEntryPtr  &&  !listCubeEntryPtr->isEmpty())
    {
    	layout->addWidget( label_fileName,	line, 0 );
    	layout->addWidget( button_loadFile,	line, 1 );
    	layout->addWidget( button_removeEntry,	line, 2 );
	line ++;
    	listCubeEntryPtr = listCubeEntryPtr->next;
    }

    layout->addItem( new QSpacerItem( 0, 10 ), line++, 0 );
    layout->addWidget( reduce, line++, 0 );
    layout->addWidget( collapse, line++, 0 );
    layout->addItem( new QSpacerItem( 0, 10 ), line++, 0 );

    layout->addWidget( merge, line++, 0 );
}

void
CubeMerge::addCubeEntry()
{
    ListCubeEntry* listCubeEntryPtr = listCubeEntry->appendNewEntry();

    connect(listCubeEntryPtr->button_loadFile,		SIGNAL( clicked() ), signalMapper_loadFile,	SLOT( map() ) );
    connect(listCubeEntryPtr->button_removeEntry,	SIGNAL( clicked() ), signalMapper_removeEntry, 	SLOT( map() ) );

    signalMapper_loadFile	->setMapping(listCubeEntryPtr->button_loadFile,		listCubeEntryPtr);
    signalMapper_removeEntry	->setMapping(listCubeEntryPtr->button_removeEntry,	listCubeEntryPtr);

    refreshGui();
}

void
CubeMerge::uncheckChoice()
{
    if ( sender() == reduce )
    {
        collapse->setChecked( false );
    }
    else
    {
        reduce->setChecked( false );
    }
}

void
CubeMerge::loadFile( ListCubeEntry* element )
{
    if ( *(element->cube) != 0 )
    {
        ( *(element->cube) )->closeCubeReport();
        *(element->cube) = 0;
    }
    QString file = QFileDialog::getOpenFileName( service->getWidget(),
                                                 tr( "Choose a file to open" ),
                                                 "",
                                                 tr( "Cube3/4 files (*cube *cube.gz *.cubex);;Cube4 files (*.cubex);;Cube3 files (*.cube.gz *.cube);;All files (*.*);;All files (*)" ) );
    if ( !file.isNull() )
    {
        *(element->cube) = new cube::Cube();
        try {
            ( *(element->cube) )->openCubeReport( file.toStdString() );
        }
        catch ( const cube::OpenFileError& e  )
        {
            service->setMessage( QString( "Error. \n" ).append( e.what() ), cubepluginapi::Error );
            service->setMessage( tr( "Error during opening cube file...." ), cubepluginapi::Error );
            delete (element->cube);
            (element->cube) = 0;
        }
        catch ( const cube::RuntimeError& e )
        {
            service->setMessage( QString( "Error. \n" ).append( e.what() ), cubepluginapi::Error );
            service->setMessage( tr( "Error during opening cube file...." ), cubepluginapi::Error );
            delete (element->cube);
            (element->cube) = 0;
        }
    }

    int max = 80;
    if ( file.length() > max )
    {
        file.remove( 0, file.length() - max );
        file.replace( 0, 3, "..." );
    }
    element->label_fileName->setText( file );
    merge->setEnabled( (listCubeEntry->getNbrNonNullCube()) >= 2 );
}


void
CubeMerge::removeCubeEntry( ListCubeEntry* element )
{
    this->listCubeEntry->removeEntry( element );
    refreshGui();
}


void
CubeMerge::startAction()
{
    cube::Cube* merge = new Cube();
    try {
// TODO - implement cube4_merge instead of cube4_diff
        cube4_diff( merge, cube1, cube2, reduce->isChecked(), collapse->isChecked() );
// TODO - end
    }
    catch ( cube::Error e )
    {
        QString message = QString( e.what() );
        message.append( " You may try to set the options to reduce or collapse system dimensions. " );
        service->setMessage( message, cubepluginapi::Error );
        return;
    }

    delete cube1;
    delete cube2;
    cube1 = 0;
    cube2 = 0;

    service->openCube( merge );
}

void
CubeMerge::closed()
{
    if ( listCubeEntry )
    {
        delete listCubeEntry;
    }
    if ( signalMapper_loadFile )
    {
	delete signalMapper_loadFile;
    }
    if ( signalMapper_removeEntry )
    {
	delete signalMapper_removeEntry;
    }
}

QString
CubeMerge::getHelpText() const
{
    return "This plugin calculates the merge beetween the given two cube files and displays them.";
}
