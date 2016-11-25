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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test0.1"

echo "################# UNITE TESTS ########################"
echo "#Run test 0.1  : Check the hash building.              "
echo "#"
echo "######################################################"
mkdir -p tests
cd tests
echo "=====> Create hash values for metrics, regions, cnodes and system vertices..."
# ../cube_unite_test0.1 > test0.1.out
diff test0.1.out $TEMPLATE_DIR/template &> test0.1.diff
result=$?
cd ..
if [[ $result -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test0.1.diff for more details."
exit -1
fi
