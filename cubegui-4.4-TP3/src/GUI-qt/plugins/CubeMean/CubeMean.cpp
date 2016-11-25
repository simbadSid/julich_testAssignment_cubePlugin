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

#include "CubeMean.h"
#include "ContextFreeServices.h"
#include "Cube.h"
#include "algebra4.h"
#include "Globals.h"

using namespace cube;
using namespace cubepluginapi;

#if QT_VERSION < 0x050000
// TODO - implement CubeMeanPlugin instead of CubeDiffPlugin
Q_EXPORT_PLUGIN2( CubeDiffPlugin, CubeDiff ) // ( PluginName, ClassName )
// TODO - end
#endif

void
CubeMean::version( int& major, int& minor, int& bugfix ) const
{
    major  = 1;
    minor  = 0;
    bugfix = 0;
}

QString
CubeMean::name() const
{
    return "CubeMean";
}

void
CubeMean::opened( ContextFreeServices* service )
{
    this->service = service;
    cube1         = 0;
    cube2         = 0;
    mean          = 0;

    QWidget*     widget      = service->getWidget();
    QHBoxLayout* layoutOuter = new QHBoxLayout();
    widget->setLayout( layoutOuter );

    reduce   = new QCheckBox( "Reduce system dimension" );
    collapse = new QCheckBox( "Collapse system dimension" );
    connect( reduce, SIGNAL( pressed() ), this, SLOT( uncheckChoice() ) );
    connect( collapse, SIGNAL( pressed() ), this, SLOT( uncheckChoice() ) );

    QWidget*     inner  = new QWidget();
    QGridLayout* layout = new QGridLayout( inner );
    layoutOuter->addWidget( inner );
    inner->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Maximum );

    QPushButton* but1 = new QPushButton( QApplication::style()->standardIcon( QStyle::SP_DirOpenIcon ), " Open cube file (minuend)" );
    connect( but1, SIGNAL( clicked() ), this, SLOT( loadFile1() ) );
    but1->setStyleSheet( "padding:4px;text-align: left" );

    QPushButton* but2 = new QPushButton( QApplication::style()->standardIcon( QStyle::SP_DirOpenIcon ), " Open cube file (subtrahend)" );
    connect( but2, SIGNAL( clicked() ), this, SLOT( loadFile2() ) );
    but2->setStyleSheet( "padding:4px;text-align: left" );

    mean = new QPushButton( "Show mean" );
    connect( mean, SIGNAL( clicked() ), this, SLOT( startAction() ) );
    mean->setEnabled( false );
    mean->setStyleSheet( "padding:4px;text-align: center" );

    fileName1 = new QLabel();
    fileName2 = new QLabel();

    int line = 0;
    layout->addWidget( but1, line, 0 );
    layout->addWidget( fileName1, line++, 1 );
    layout->addWidget( but2, line, 0 );
    layout->addWidget( fileName2, line++, 1 );

    layout->addItem( new QSpacerItem( 0, 10 ), line++, 0 );
    layout->addWidget( reduce, line++, 0 );
    layout->addWidget( collapse, line++, 0 );
    layout->addItem( new QSpacerItem( 0, 10 ), line++, 0 );

    layout->addWidget( mean, line++, 0 );
}

void
CubeMean::uncheckChoice()
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
CubeMean::loadFile1()
{
    loadFile( &cube1, fileName1 );
}

void
CubeMean::loadFile2()
{
    loadFile( &cube2, fileName2 );
}

void
CubeMean::loadFile( cube::Cube** cube, QLabel* label )
{
    if ( *cube != 0 )
    {
        ( *cube )->closeCubeReport();
        *cube = 0;
    }
    QString file = QFileDialog::getOpenFileName( service->getWidget(),
                                                 tr( "Choose a file to open" ),
                                                 "",
                                                 tr( "Cube3/4 files (*cube *cube.gz *.cubex);;Cube4 files (*.cubex);;Cube3 files (*.cube.gz *.cube);;All files (*.*);;All files (*)" ) );
    if ( !file.isNull() )
    {
        *cube = new cube::Cube();
        try {
            ( *cube )->openCubeReport( file.toStdString() );
        }
        catch ( const cube::OpenFileError& e  )
        {
            service->setMessage( QString( "Error. \n" ).append( e.what() ), cubepluginapi::Error );
            service->setMessage( tr( "Error during opening cube file...." ), cubepluginapi::Error );
            delete cube;
            cube = 0;
        }
        catch ( const cube::RuntimeError& e )
        {
            service->setMessage( QString( "Error. \n" ).append( e.what() ), cubepluginapi::Error );
            service->setMessage( tr( "Error during opening cube file...." ), cubepluginapi::Error );
            delete cube;
            cube = 0;
        }
    }

    int max = 80;
    if ( file.length() > max )
    {
        file.remove( 0, file.length() - max );
        file.replace( 0, 3, "..." );
    }
    label->setText( file );
    mean->setEnabled( cube1 && cube2 );
}

void
CubeMean::startAction()
{
    cube::Cube* mean = new Cube();
    try {
// TODO - implement cube4_mean instead of cube4_diff
        cube4_diff( mean, cube1, cube2, reduce->isChecked(), collapse->isChecked() );
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

    service->openCube( mean );
}

void
CubeMean::closed()
{
    if ( cube1 )
    {
        delete cube1;
    }
    if ( cube2 )
    {
        delete cube2;
    }
    cube1 = 0;
    cube2 = 0;
}

QString
CubeMean::getHelpText() const
{
    return "This plugin calculates the mean of the given two cube files and displays them.";
}
