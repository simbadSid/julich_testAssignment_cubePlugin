#!/bin/bash
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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test15"
TEMPLATE_CUBE=$TEMPLATE_DIR/template.cube

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi


echo "##########################################################################"
echo "# Run test 15 : Check the tool \"cube_merge\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Merge created cube and saved template ..."
../cube_merge $CUBEFILE cut.cubex 
result1=$?
echo "=====> Transform merging result into cube3 ..."
../cube4to3 merge.cubex
result2=$?
echo "=====> Compare result with saved template"
../cube_cmp merge.cube $TEMPLATE_CUBE
result3=$?
cd ..
if [[ $result1 -ne 0  || $result2 -ne 0 || $result3 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test15.diff for more details."
exit -1
fi
