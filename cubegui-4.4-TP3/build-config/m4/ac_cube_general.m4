##*************************************************************************##
##  CUBE        http://www.scalasca.org/                                   ##
##*************************************************************************##
##  Copyright (c) 1998-2016                                                ##
##  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          ##
##                                                                         ##
##  Copyright (c) 2009-2015                                                ##
##  German Research School for Simulation Sciences GmbH,                   ##
##  Laboratory for Parallel Programming                                    ##
##                                                                         ##
##  This software may be modified and distributed under the terms of       ##
##  a BSD-style license.  See the COPYING file in the package base         ##
##  directory for details.                                                 ##
##*************************************************************************##




AC_DEFUN([AC_SCOREP_CONFIG_SELECTION_REPORT], [

XEND=$1

AS_IF([ test "x$CUBE_SCOREP" != "x" ], [
AFS_SUMMARY([C++ compiler used],[$CUBE_SCOREP $CXX])
],[
AFS_SUMMARY([C++ compiler used],[$CXX])
])
AFS_SUMMARY([ Compiler flags used],[$CXXFLAGS $FRONTEND_CXXFLAGS])


AFS_SUMMARY([With cubelib-config], [$CUBELIB_CONFIG])
AFS_SUMMARY([With Cube include path], [$CUBELIB_INCLUDEPATH])
AFS_SUMMARY([With Cube ldflags], [$CUBELIB_LDFLAGS])


AS_IF( [test "x$HMI_INSTRUMENTATION" != "x" ], [
AFS_SUMMARY([HMI Instrumentation ], [ yes ] )
])

AS_IF([ test "x$CUBE_DEBUG" == "x"], [
AFS_SUMMARY([Disable qDebug() and qWarning()],[$CUBE_DEBUG_FLAGS])
],
[
AFS_SUMMARY([Enabled qDebug() and qWarning()],[yes])
])


AFS_SUMMARY([With qmake], [$QMAKE] )
AFS_SUMMARY([With Qt version], [$QT_VERSION])
AFS_SUMMARY([With Qt specs], [$QT_SPECS])
AFS_SUMMARY([With Qt defines], [$QT_DEFINES])
AFS_SUMMARY([With Qt include path], [$QT_INCPATH])
AFS_SUMMARY([With Qt compiler flags], [$QT_CXXFLAGS])
AFS_SUMMARY([With Qt linker flags], [$QT_LDFLAGS])
AFS_SUMMARY([With Qt libraries], [$QT_LIBS])
AFS_SUMMARY([With moc], [$MOC] )
AFS_SUMMARY([With uic], [$UIC] )
AFS_SUMMARY([With supported plugins], [] )
AFS_SUMMARY([  Plugin "CubeDiff"], [$WITH_GUI_PLUGIN_CUBE_DIFF] )
AFS_SUMMARY([  Plugin "Barplot"], [$WITH_GUI_PLUGIN_BARPLOT] )
AFS_SUMMARY([  Plugin "Heatmap"], [$WITH_GUI_PLUGIN_HEATMAP] )
AFS_SUMMARY([  Plugin "Launch" ], [$WITH_GUI_PLUGIN_LAUNCH] )
AFS_SUMMARY([  Plugin "Paraver" ], [$WITH_GUI_PLUGIN_PARAVER] )
AFS_SUMMARY([  Plugin "SourceEditor" ], [$WITH_GUI_PLUGIN_SOURCE_EDITOR] )
AFS_SUMMARY([  Plugin "Statistics" ], [$WITH_GUI_PLUGIN_STATISTICS] )
AFS_SUMMARY([  Plugin "Vampir" ], [$WITH_GUI_PLUGIN_VAMPIR] )
AFS_SUMMARY([  Plugin "AdvancedColorMaps" ], [$WITH_GUI_PLUGIN_ADVANCEDCM] )


])








AC_DEFUN([AC_SCOREP_CUBE_FRONTEND_SELECTION], [
AC_SCOREP_CUBE_GUI_SELECTION
# this is here and not in gui coz one can specify scorep for not gui parts 
AC_CUBE_FIND_SCOREP
AC_CUBE_DEBUG

# put here this conditionals.... in future it has to go away
AM_CONDITIONAL([WITH_GUI_PLUGIN_CUBE_DIFF], [test x$WITH_GUI_PLUGIN_CUBE_DIFF == "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_LAUNCH], [test x$WITH_GUI_PLUGIN_LAUNCH == "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_GRAPHWIDGET_COMMON], [test x$WITH_GUI_PLUGIN_GRAPHWIDGETCOMMON == "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_BARPLOT], [test x$WITH_GUI_PLUGIN_BARPLOT == "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_HEATMAP], [test x$WITH_GUI_PLUGIN_HEATMAP == "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_PARAVER], [test "x$WITH_GUI_PLUGIN_PARAVER" = "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_SOURCE_EDITOR], [test "x$WITH_GUI_PLUGIN_SOURCE_EDITOR" = "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_STATISTICS], [test "x$WITH_GUI_PLUGIN_STATISTICS" = "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_VAMPIR], [test "x$WITH_GUI_PLUGIN_VAMPIR" = "xyes"])
AM_CONDITIONAL([WITH_GUI_PLUGIN_ADVANCEDCM], [test "x$WITH_GUI_PLUGIN_ADVANCEDCM" = "xyes"])

])



AC_DEFUN([AC_SCOREP_CUBE_GUI_SELECTION], [

 AT_WITH_QT([+network +widgets +printsupport], [+plugin], [WITH_GUI="yes"], [WITH_GUI="no"])
 AS_IF([test "x$WITH_GUI" != "xno"],
 [AC_CUBE_SUPPORTED_PLUGINS],
[
AC_MSG_ERROR([Cannot use compiler $CXX to build Cube GUI. Try to set a proper --with-qt-specs=<value> and run 'configure' again.])
])


])





