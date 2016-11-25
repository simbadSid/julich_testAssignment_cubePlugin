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





CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test8"
TEMPLATE_CUBE="$CUBES_DIR/template.cube" 
EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi

echo "##########################################################################"
echo "# Run test 8 : Check the tool \"cube4to3\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Transform example3.cubex to cube3 format..."
../cube4to3 -o example3.cube $CUBEFILE 
result1=$?
echo "=====> Compare result with saved template ..."
../cube_cmp example3.cube $TEMPLATE_CUBE
result2=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 ]];
then
echo "Test FAILED. Inspect output above for more details."
exit -1 
fi
