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


CONFIG	+= qt thread rtti exceptions warn_on  release
TEMPLATE = lib
TARGET = 
CUBE +=
CUBE_SRC = C:/Scalasca-Soft/Install/Cube2.0/install
GUI_SRC = ../../../src/GUI-qt
GUI_CONFIG = ../../../vpath/src
DEPENDPATH += $${GUI_SRC} $${GUI_SRC}/display
INCLUDEPATH += $${GUI_SRC} $${GUI_CONFIG} $${GUI_SRC}/display   $${CUBE_SRC}/include/cube \
     $${CUBE_SRC}/../../vpath/src/ \
     $${CUBE_SRC}/include/service\
	 $${CUBE_SRC}/include/service/cubelayout \
	 $${CUBE_SRC}/include/service/cubelayout/layout \
	 $${CUBE_SRC}/include/service/cubelayout/readers \
	 $${CUBE_SRC}/include/dimensions/metric \
	 $${CUBE_SRC}/include/dimensions/metric/strategies \
	 $${CUBE_SRC}/include/dimensions/metric/data \
	 $${CUBE_SRC}/include/dimensions/metric/cache \
	 $${CUBE_SRC}/include/dimensions/metric/data/rows \
	 $${CUBE_SRC}/include/dimensions/metric/matrix \
	 $${CUBE_SRC}/include/dimensions/metric/index \
	 $${CUBE_SRC}/include/dimensions/metric/value \
	 $${CUBE_SRC}/include/dimensions/metric/value/trafo \
	 $${CUBE_SRC}/include/dimensions/metric/value/trafo/single_value \
	 $${CUBE_SRC}/include/dimensions/calltree \
	 $${CUBE_SRC}/include/dimensions/system \
	 $${CUBE_SRC}/include/dimensions \
	 $${CUBE_SRC}/include/syntax \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/nullary \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/nullary/statements \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/unary \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/unary/functions/single_argument \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/unary/functions/two_arguments \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/unary/functions/lambda_calcul \
	 $${CUBE_SRC}/include/syntax/cubepl/evaluators/binary \
	 $${CUBE_SRC}/include/syntax/cubepl \
	 $${CUBE_SRC}/include/derivated \
	 $${CUBE_SRC}/include/topologies \
	 $${CUBE_SRC}/include/ \
	 C:/Scalasca-Soft/Misc/regex-2.7-bin/include 
	 
LIBS += -L$${CUBE_SRC}/lib -lcube  -L../GUI-qt-core/release -lcube4gui -L C:/Scalasca-Soft/Misc/regex-2.7-bin/lib -lregex

DEFINES+= CUBE_PREFIX=\\\"unknown\\\" 
DEFINES+= LIBDIR=\\\".\\\"


QMAKE_CXXFLAGS=-fexceptions

QT += network

# Input{
HEADERS += \
$${GUI_SRC}/plugins/Graphwidget-common/CubeDataItem.h \
$${GUI_SRC}/plugins/Graphwidget-common/CubeRead.h \
$${GUI_SRC}/plugins/Graphwidget-common/DataProvider.h \
$${GUI_SRC}/plugins/Graphwidget-common/globals.h \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractPlotArea.h \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractRuler.h \
$${GUI_SRC}/plugins/Graphwidget-common/HorizontalRuler.h \
$${GUI_SRC}/plugins/Graphwidget-common/VerticalRuler.h \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractPlotAreaController.h \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractRulerController.h \
$${GUI_SRC}/plugins/Graphwidget-common/HorizontalRulerController.h \
$${GUI_SRC}/plugins/Graphwidget-common/VerticalRulerController.h\
$${GUI_SRC}/plugins/Graphwidget-common/ImageSaverController.h


SOURCES += \
$${GUI_SRC}/plugins/Graphwidget-common/HorizontalRuler.cpp\
$${GUI_SRC}/plugins/Graphwidget-common/HorizontalRulerController.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/CubeDataItem.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/CubeRead.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/DataProvider.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractPlotArea.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractRuler.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/VerticalRuler.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractPlotAreaController.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/AbstractRulerController.cpp \
$${GUI_SRC}/plugins/Graphwidget-common/VerticalRulerController.cpp\
$${GUI_SRC}/plugins/Graphwidget-common/ImageSaverController.cpp



# Hack for IBM AIX
aix-g++ {
  QMAKE_CXXFLAGS_RELEASE += -O0
}
aix-g++-64 {
  QMAKE_CXXFLAGS_RELEASE += -O0
}
