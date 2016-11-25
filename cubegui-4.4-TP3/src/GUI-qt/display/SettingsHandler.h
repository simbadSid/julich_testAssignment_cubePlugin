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


#ifndef SETTINGHANDLER_H
#define SETTINGHANDLER_H

#include <QSettings>

namespace cubegui
{
/**
 * SettingsHandler provides methods which are called, if the settings are loaded or saved
 * @see PluginServices::addSettingsHandler
 * @see examples/GUI/plugins/plugin-demo
 */
class SettingsHandler
{
public:
    virtual void
    loadGlobalSettings( QSettings& )
    {
    };
    virtual void
    saveGlobalSettings( QSettings& )
    {
    };

    virtual void
    loadExperimentSettings( QSettings& )
    {
    };
    virtual void
    saveExperimentSettings( QSettings& )
    {
    };

    /** Used to synchronize status of several cube instances, @see ClipboardToolBar. */
    virtual void
    loadStatus( QSettings& )
    {
    }
    virtual void
    saveStatus( QSettings& )
    {
    }
    virtual bool
    synchronizationIsDefault()
    {
        return false;
    }

    virtual QString
    settingName() = 0;

    QString
    settingNameCompact() // blanks would be escaped in ini file with a longer sequence
    {
        return settingName().remove( ' ' );
    }
};
}
#endif // SETTINGHANDLER_H
