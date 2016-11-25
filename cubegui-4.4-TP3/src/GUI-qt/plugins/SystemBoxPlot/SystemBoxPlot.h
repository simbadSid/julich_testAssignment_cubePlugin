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



#ifndef SYSTEMBOXPLOT_H
#define SYSTEMBOXPLOT_H

#include <QWidget>
#include <QComboBox>
#include <QSplitter>

#include "BoxPlot.h"
#include "PluginServices.h"
#include "ScrollArea.h"
#include "CubePlugin.h"

class SystemBoxPlot : public QObject, public cubepluginapi::TabInterface, public cubepluginapi::CubePlugin
{
    Q_OBJECT
    Q_INTERFACES( cubepluginapi::CubePlugin )

#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA( IID "SystemBoxPlotPlugin" ) // unique PluginName
#endif

public:
    SystemBoxPlot();

    ~SystemBoxPlot();

    // CubePlugin implementation
    virtual bool
    cubeOpened( cubepluginapi::PluginServices* service );
    virtual QString
    name() const;
    virtual void
    version( int& major,
             int& minor,
             int& bugfix ) const;

    virtual QString
    getHelpText() const;

    // end CubePlugin implementation

    // TabInterface implementation
    virtual QWidget*
    widget();

    virtual QString
    label() const;

    QIcon
    icon() const;

    void
    valuesChanged();

    void
    setActive( bool active );

    // end TabInterface implementation

private:

    cubegui::StatisticalInformation
    calculateStatistics( bool absolute );

    void
    updateValueWidget();

    void
    updateSubsetCombo();

    QSplitter*                     container;
    cubegui::ScrollArea*           scrollArea;
    QComboBox*                     subsetCombo;
    QStringListModel               subsetModel;
    cubepluginapi::PluginServices* service;
    cubegui::BoxPlot*              boxplot;

private slots:
    void
    orderHasChanged( const QList<cubepluginapi::DisplayType>& order );

    void
    subsetChanged( int idx );
};

#endif // SYSTEMBOXPLOT_H
