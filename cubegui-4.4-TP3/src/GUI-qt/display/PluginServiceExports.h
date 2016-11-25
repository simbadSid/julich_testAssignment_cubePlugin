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


#ifndef PLUGINSERVICEEXPORTS_H
#define PLUGINSERVICEEXPORTS_H

#include "Globals.h"

namespace cubegui
{
class TreeItem;
class AggregatedTreeItem;
class StatisticalInformation;
}

namespace cubepluginapi
{
// classes
using cubegui::ColorMap;
using cubegui::SettingsHandler;
using cubegui::TreeItem;
using cubegui::AggregatedTreeItem;
using cubegui::StatisticalInformation;
using cubegui::SettingsHandler;
using cubegui::ColorMap;

// enums;
using cubegui::DisplayType;
using cubegui::LineType;
using cubegui::TreeType;
using cubegui::MessageType;
using cubegui::TreeItemType;
using cubegui::ValueModus;
using cubegui::PrecisionFormat;
using cubegui::UserAction;

// enum PrecisionFormat
using cubegui::FORMAT_TREES;
using cubegui::FORMAT_DEFAULT;
using cubegui::FORMAT_DOUBLE;

// enum MessageType
using cubegui::Verbose;
using cubegui::Information;
using cubegui::Warning;
using cubegui::Error;
using cubegui::Critical;

// enum TreeItemType
using cubegui::METRICITEM;
using cubegui::CALLITEM;
using cubegui::REGIONITEM;
using cubegui::SYSTEMTREENODEITEM;
using cubegui::LOCATIONGROUPITEM;
using cubegui::LOCATIONITEM;

// enum TreeType
using cubegui::METRICTREE;
using cubegui::CALLTREE;
using cubegui::CALLFLAT;
using cubegui::SYSTEMTREE;

// enum LineType
using cubegui::BLACK_LINES;
using cubegui::GRAY_LINES;
using cubegui::WHITE_LINES;
using cubegui::NO_LINES;

// enum DisplayType { METRIC, CALL;SYSTEM };
using cubegui::METRIC;
using cubegui::CALL;
using cubegui::SYSTEM;

// enum UserAction { LoopMarkAction };
using cubegui::LoopMarkAction;

//enum ValueModus
using cubegui::ABSOLUTE;
using cubegui::OWNROOT;
using cubegui::METRICROOT;
using cubegui::CALLROOT;
using cubegui::SYSTEMROOT;
using cubegui::METRICSELECTED;
using cubegui::CALLSELECTED;
using cubegui::SYSTEMSELECTED;
using cubegui::PEER;
using cubegui::PEERDIST;
using cubegui::EXTERNAL;
}

#endif // PLUGINSERVICEEXPORTS_H
