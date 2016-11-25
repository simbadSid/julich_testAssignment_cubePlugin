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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test26"
TEMPLATE_CUBE="$TEMPLATE_DIR/template.cube"

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi



echo "##########################################################################"
echo "# Run test 26 : Check the tool \"cube_part\" "
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Remove threads 12-32 from cube..."
../cube_part -I -R 12-32 $CUBEFILE
result1=$?
echo "=====> Transform result to cube3 format..."
../cube4to3 part.cubex
result2=$?
echo "=====> Compare result with saved template ..."
../cube_cmp part.cube $TEMPLATE_CUBE
result3=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 || $result3 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test26.diff for more details."
exit -1
fi
