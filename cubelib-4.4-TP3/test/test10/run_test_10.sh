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



CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test10"
TEMPLATE="$CUBES_DIR/template.out"
EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi
echo "##########################################################################"
echo "# Run test 10 : Check the tool \"cube_inclusify\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Inclusify cube..."
../cube_inclusify $CUBEFILE 
result1=$?
echo "=====> Read resulted cube and test if all metrics are inclusive and calculate some values..."
../cube_self_test10 > test10.out
result2=$?
echo "=====> Compare calculated values with saved results..."
diff test10.out $TEMPLATE &> test10.diff
result3=$1
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 || $result3 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test10.diff for more details."
exit -1
fi

