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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test19"
TEMPLATE_CUBE="$TEMPLATE_DIR/template.cube"

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi

echo "##########################################################################"
echo "# Run test 19 : Check the tool \"cube_canonize\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Canonize cube..."
../cube_canonize -p -m 12 -f -l $CUBEFILE example_canonized.cubex
result1=$?
echo "=====> Transform canonized cube into cube3 format..."
../cube4to3 example_canonized.cubex
result4=$?
echo "=====> Compare result with saved template using diff..."
diff $TEMPLATE_CUBE example_canonized.cube > test19.diff
result5=$?
cd ..
if [[ $result1 -ne 0  || $result4 -ne 0 || $result5 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test19.diff for more details."
exit -1
fi

