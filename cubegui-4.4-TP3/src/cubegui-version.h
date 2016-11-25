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



#ifndef CUBEGUI_VERSION_H
#define CUBEGUI_VERSION_H


/*-------------------------------------------------------------------------*/
/**
 *  @file  cube-version.h
 *  @brief Provides the Cube package version information.
 **/
/*-------------------------------------------------------------------------*/


/// @name Cube version information
/// @{

/// Cube revision number
#define CUBEGUI_REVISION "15343"

/// Cube revision number
#define CUBEGUI_REVISION_NUMBER 15343

/// Cube revision number
#define CUBEGUI_REVISION_STRING CUBEGUI_REVISION




/// Cube major version number
#define CUBEGUI_MAJOR   "4"

/// Cube minor version number
#define CUBEGUI_MINOR   "4"

/// Cube bugfix version number
#define CUBEGUI_BUGFIX   "0"

/// Cube suffix
#define CUBEGUI_SUFFIX   "TP3"

/// Cube suffix_internally
#define CUBEGUI_SUFFIX_INTERNAL   TP3

/// Cube version number (<i>major</i>.<i>minor</i>)
#define CUBEGUI_SHORT_VERSION   CUBEGUI_MAJOR "." CUBEGUI_MINOR

/// Cube full version number (<i>major</i>.<i>minor</i>.<i>bugfix</i>)
#define CUBEGUI_FULL_VERSION   CUBEGUI_SHORT_VERSION "." CUBEGUI_BUGFIX

/// Cube version number
#define CUBEGUI_VERSION "4.4-TP3"

/// Cube package name "cube"
#define CUBEGUI_SHORT_NAME  "CubeGUI"

/// Cube package name "cube-4.x.1-XX"
#define CUBEGUI_FULL_NAME   CUBEGUI_SHORT_NAME "-" CUBEGUI_FULL_VERSION CUBEGUI_SUFFIX 


/// Cube library interface information
#define LIBRARY_CURRENT "8"
#define LIBRARY_REVISION "0"
#define LIBRARY_AGE "1"

/// @}


#endif   // !CUBEGUI_VERSION_H
