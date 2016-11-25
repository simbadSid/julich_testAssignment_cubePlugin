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


#ifndef SYNCTOOLBAR_H
#define SYNCTOOLBAR_H

#include <QWidget>
#include <QToolBar>
#include <QList>
#include <QMenu>

namespace cubegui
{
class SettingsHandler;

class SynchronizationToolBar : public QToolBar
{
    Q_OBJECT
public:
    SynchronizationToolBar();
    ~SynchronizationToolBar();

    void
    updateComponents();

    bool
    sendingEnabled()
    {
        return autoSend;
    }

    bool
    isEnabled( SettingsHandler* handler );

signals:
    void
    receiveData();

private slots:
    void
    receive();
    void
    setAutoSend( bool );
    void
    setAutoReceive( bool );

private:
    QTimer*         timer;
    QMenu*          menu;
    QList<QAction*> actionList;
    bool            autoSend;
};
}
#endif // SYNCTOOLBAR_H
