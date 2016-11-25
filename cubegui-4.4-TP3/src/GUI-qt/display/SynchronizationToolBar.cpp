/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
****************************************************************************/


#include "SynchronizationToolBar.h"
#include <QAction>
#include <QDebug>
#include <QApplication>
#include <QToolButton>
#include <QWidgetAction>

#include "Globals.h"
#include "PluginManager.h"
#include "SettingsHandler.h"
#include "Globals.h"

#define TREE_TYPES 4
using namespace cubegui;

SynchronizationToolBar::SynchronizationToolBar()
{
    timer    = 0;
    autoSend = false;

    menu = new QMenu();
    QToolButton* toolButton = new QToolButton();
    toolButton->setText( "Synchronize state of ..." );
    toolButton->setMenu( menu );
    toolButton->setPopupMode( QToolButton::InstantPopup );
    QWidgetAction* toolButtonAction = new QWidgetAction( this );
    toolButtonAction->setDefaultWidget( toolButton );
    this->addAction( toolButtonAction );

    QAction* sendAlways = this->addAction( QIcon( ":/images/send_state.png" ), "Send state" );
    sendAlways->setCheckable( true );
    this->addAction( sendAlways );
    connect( sendAlways, SIGNAL( triggered( bool ) ), this, SLOT( setAutoSend( bool ) ) );


    QAction* readAlways = this->addAction( QIcon( ":/images/recv_state.png" ), "Receive state" );
    readAlways->setCheckable( true );
    this->addAction( readAlways );
    connect( readAlways, SIGNAL( triggered( bool ) ), this, SLOT( setAutoReceive( bool ) ) );
}

void
SynchronizationToolBar::updateComponents()
{
    menu->clear();
    actionList.clear();
    int                                   idx  = 0;
    static const QList<SettingsHandler*>& list = Globals::getSettingsHandler();
    foreach( SettingsHandler * handler, list )
    {
        QAction* action = new QAction( handler->settingName(), this );
        action->setCheckable( true );
        action->setChecked( handler->synchronizationIsDefault() );
        action->setData( QVariant( idx++ ) );
        menu->addAction( action );
        actionList.append( action );
    }
}

bool
SynchronizationToolBar::isEnabled( SettingsHandler* handler )
{
    int idx = Globals::getSettingsHandler().indexOf( handler );
    if ( idx >= 0 && actionList.size() == Globals::getSettingsHandler().size() )
    {
        return actionList.at( idx )->isChecked();
    }
    return false;
}

SynchronizationToolBar::~SynchronizationToolBar()
{
    QApplication::clipboard()->clear();
}


void
SynchronizationToolBar::receive()
{
    emit receiveData();
}

void
SynchronizationToolBar::setAutoReceive( bool isAutoReceive )
{
    if ( timer )
    {
        delete timer;
    }
    timer = 0;

    if ( isAutoReceive )
    {
        receive();

        timer = new QTimer( this );
        connect( timer, SIGNAL( timeout() ), this, SLOT( receive() ) );
        timer->start( 500 );
    }
}

void
SynchronizationToolBar::setAutoSend( bool send )
{
    autoSend = send;
}
