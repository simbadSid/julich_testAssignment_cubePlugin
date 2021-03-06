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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test22"
TEMPLATE_OUT1="$TEMPLATE_DIR/template1.out"
TEMPLATE_OUT2="$TEMPLATE_DIR/template2.out"

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi


echo "##########################################################################"
echo "# Run test 22 : Check the tool \"cube_rank\" "
echo "##########################################################################"

mkdir -p tests
cd tests
echo "=====> Calculate ranks for metric visits of $CUBEFILE"
../cube_rank -m visits $CUBEFILE  > rank1.out
result1=$?
echo "=====> Compare result with saved template using diff..."
diff rank1.out $TEMPLATE_OUT1 &> test22.1.diff
result2=$?
echo "=====> Calculate ranks for metric time of $CUBEFILE"
../cube_rank -m time $CUBEFILE > rank2.out
result3=$?
echo "=====> Compare result with saved template using diff..."
diff rank2.out $TEMPLATE_OUT2 &> test22.2.diff
result4=$?



cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 || $result3 -ne 0 || $result4 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test22.[1|2|3].diff for more details."
exit -1
fi
