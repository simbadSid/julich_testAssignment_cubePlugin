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




CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test1.1"
TEMPLATE_CUBE="$CUBES_DIR/template.cube"
EQUAL_CUBE="$CUBES_DIR/equal.cube"
NOT_EQUAL1_CUBE="$CUBES_DIR/not_equal1.cube"
NOT_EQUAL2_CUBE="$CUBES_DIR/not_equal2.cube"                                


echo "######################################################"
echo "# Run test 1.1 : Check the \"cube_cmp\" tool. "
echo "#"
echo "######################################################"
mkdir -p tests
cd tests
echo "=====> Check equality of two equal cubes"
../cube_cmp $TEMPLATE_CUBE $EQUAL_CUBE
result1=$?
echo "=====> Check equality of not equal cubes in dimensions"
../cube_cmp $TEMPLATE_CUBE $NOT_EQUAL1_CUBE 
result2=$?
echo "=====> Check equality of not equal cubes in data"
../cube_cmp $TEMPLATE_CUBE $NOT_EQUAL2_CUBE
result3=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 1 || $result3 -ne 1 ]]; 
then
echo "Test FAILED. Inspect output above for more details."
exit -1 
fi

