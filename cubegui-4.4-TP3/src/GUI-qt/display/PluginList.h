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


#ifndef PLUGINLIST_H
#define PLUGINLIST_H

#include "CubePlugin.h"
#include "ContextFreePlugin.h"

#include <QtCore>

namespace cubegui
{
/**
 * @brief PluginList is a list of all available plugins that implement the CubePlugin interface
 */
class PluginData
{
public:
    QString                         name;      // unique name of the plugin, only one plugin of the same name will be loaded
    QString                         location;  // absolute file name of the plugin
    cubepluginapi::PluginInterface* plugin;
    QPluginLoader*                  pluginLoader;
};

class PluginList
{
public:
    static int
    getCubePluginCount();
    static cubepluginapi::CubePlugin*
    getCubePlugin( int idx );
    static QString
    getCubePluginName( int idx );
    static QString
    getCubePluginPath( int idx );

    static int
    getContextFreePluginCount();
    static cubepluginapi::ContextFreePlugin*
    getContextFreePlugin( int idx );
    static QString
    getContextFreePluginName( int idx );
    static void
    disablePlugins();
    static void
    updatePluginList( const QStringList& );

private:
    void
    loadPluginList( const QStringList& pluginPath = QStringList() );
    bool
    loadCubePlugin( PluginData& data );
    bool
    loadContextFreePlugin( PluginData& data );
    bool
    loadPlugin( PluginData&        data,
                QList<PluginData>& list );

    static PluginList* single;
    static bool        disableAlways;

    QList<PluginData> cubePluginList;
    QList<PluginData> contextFreePluginList;
    PluginData*
    getPluginData( cubepluginapi::PluginInterface* plugin );
    static PluginList*
    getInstance();
};
}
#endif // PLUGINLIST_H
