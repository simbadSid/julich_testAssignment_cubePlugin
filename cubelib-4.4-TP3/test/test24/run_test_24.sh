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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test24"
TEMPLATE_OUT="$TEMPLATE_DIR/template.out"

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi

echo "##########################################################################"
echo "# Run test 24 : Check the tool \"cube_sanity\" "
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Perform sanity checks on example3.cubex..."
../cube_sanity -v 1 -o sanity.out $CUBEFILE
result1=$?
echo "=====> Compare result with saved template using diff..."
diff sanity.out $TEMPLATE_OUT &> test24.diff
result2=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test24.diff for more details." 
exit -1
fi
