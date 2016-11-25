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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test23"
TEMPLATE_OUT="$TEMPLATE_DIR/template.out"

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi



echo "##########################################################################"
echo "# Run test 23 : Check the tool \"cube_regioninfo\" "
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Print out information about regions..."
export OMP_NUM_THREADS=1
../cube_regioninfo -r -m time,visits,bytes_sent,bytes_rcvd $CUBEFILE > regioninfo.out
result1=$?
echo "=====> Compare result with saved template using diff..."
diff $TEMPLATE_OUT regioninfo.out &> test23.diff
result2=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test23.diff for more details."
exit -1
fi
