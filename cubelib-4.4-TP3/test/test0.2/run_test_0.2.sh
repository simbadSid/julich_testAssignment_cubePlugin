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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test0.2"

echo "################# UNITE TESTS ########################"
echo "#Run test 0.2  : Check the handling of Tau Atomic Metrics "
echo "#                ( saving, reading and calculation of incl/excl values"  
echo "#         SWITCHED OFF DUE THE DEVELOPMENT             "
echo "######################################################"
exit 0
echo "=====> Create cube with some tau metrics..."
mkdir -p tests
cd tests
../cube_unite_test0.2_0
result1=$?
echo "=====> Read cube with tau metrics and calculate some values..."
../cube_unite_test0.2_1 > test0.2.out
result2=$?
echo "=====> Compare result with saved template using diff"
diff test0.2.out $TEMPLATE_DIR/template &> test0.2.diff
result3=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 || $result3 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test0.2.diff for more details."
exit -1
fi
