/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  Copyright (c) 2009-2015                                                **
**  German Research School for Simulation Sciences GmbH,                   **
**  Laboratory for Parallel Programming                                    **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
****************************************************************************/



#ifndef CUBELIB_VERSION_H
#define CUBELIB_VERSION_H


/*-------------------------------------------------------------------------*/
/**
 *  @file  cube-version.h
 *  @brief Provides the Cube package version information.
 **/
/*-------------------------------------------------------------------------*/


/// @name Cube version information
/// @{

/// Cube revision number
#define CUBELIB_REVISION "15344"

/// Cube revision number
#define CUBELIB_REVISION_NUMBER 15344

/// Cube revision number
#define CUBELIB_REVISION_STRING CUBELIB_REVISION




/// Cube major version number
#define CUBELIB_MAJOR   "4"

/// Cube minor version number
#define CUBELIB_MINOR   "4"

/// Cube bugfix version number
#define CUBELIB_BUGFIX   "0"

/// Cube suffix
#define CUBELIB_SUFFIX   "TP3"

/// Cube suffix_internally
#define CUBELIB_SUFFIX_INTERNAL   TP3

/// Cube version number (<i>major</i>.<i>minor</i>)
#define CUBELIB_SHORT_VERSION   CUBELIB_MAJOR "." CUBELIB_MINOR

/// Cube full version number (<i>major</i>.<i>minor</i>.<i>bugfix</i>)
#define CUBELIB_FULL_VERSION   CUBELIB_SHORT_VERSION "." CUBELIB_BUGFIX

/// Cube version number
#define CUBELIB_VERSION "4.4-TP3"

/// Cube package name "cube"
#define CUBELIB_SHORT_NAME  "CubeLib"

/// Cube package name "cube-4.x.1-XX"
#define CUBELIB_FULL_NAME   CUBELIB_SHORT_NAME "-" CUBELIB_FULL_VERSION CUBELIB_SUFFIX 


/// Cube library interface information
#define LIBRARY_CURRENT "8"
#define LIBRARY_REVISION "0"
#define LIBRARY_AGE "1"

/// @}


#endif   // !CUBELIB_VERSION_H
