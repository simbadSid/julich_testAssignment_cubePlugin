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


/**
 * @file
 *
 * Implements the representation and analysis of library dependencies
 */

#include "config.h"

#include <iostream>
#include <stdlib.h>
#include <cstring>

#include <cubegui_config.hpp>

#include <cubegui_config_data.hpp>

using namespace std;

cubegui_config_data*
cubegui_config_get_frontend_data( void )
{
    static cubegui_config_data data;

    data.m_cc                    = " gcc";
    data.m_cxx                   = " g++";
    data.m_cppflags              = "-I/opt/modules/packages/cube/tarball-for-builds/CubeGUI-releasetag/include/cubegui";
    data.m_incldir               = "/opt/modules/packages/cube/tarball-for-builds/CubeGUI-releasetag/include/cubegui";
    data.m_use_rpath_flag        = 1;
    data.m_rpath_flag_cc         = "$wl-rpath $wl$libdir";
    data.m_wl_flag               = "-Wl,";
    data.m_aix_libpath           = "";
    data.m_sys_lib_dlsearch_path = "/lib /usr/lib /lib/i386-linux-gnu /usr/lib/i386-linux-gnu /lib/i486-linux-gnu /usr/lib/i486-linux-gnu /usr/local/lib /lib/x86_64-linux-gnu /usr/lib/x86_64-linux-gnu /lib32 /usr/lib32 ";

    deque<string> libs;
    deque<string> ldflags;
    deque<string> rpaths;
    deque<string> dependency_las;

    #define la_object  cubegui_config_data::la_object
    #define la_objects ( &data.m_la_objects )
    /* cubegui_config_library_dependencies_frontend_inc.hpp is
       generated by vendor/common/build-config/generate-library-dependency.sh */
    #include <cubegui_config_library_dependencies_frontend_inc.hpp>

    data.prepare_rpath_flags();

    return &data;
}
