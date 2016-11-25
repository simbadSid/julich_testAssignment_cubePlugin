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



CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test1.2"
EMPTY_CUBE="$CUBES_DIR/empty.cube"
NOT_EMPTY1_CUBE="$CUBES_DIR/non_empty1.cube"
NOT_EMPTY2_CUBE="$CUBES_DIR/no_structure.cube"


echo "######################################################"
echo "#Run test 1.2 : Check the \"cube_is_empty\" tool. "
echo "#"
echo "#          "
echo "######################################################"
mkdir -p tests
cd tests
echo "=====> Check if empty cube is detected as empty..."
../cube_is_empty $EMPTY_CUBE
result1=$?
echo "=====> Check if cube with data is detected as not empty..."
../cube_is_empty $NOT_EMPTY1_CUBE
result2=$?
echo "=====> Check if cube without dimensional structure is detected as broken..."
../cube_is_empty $NOT_EMPTY2_CUBE
result3=$?
cd ..
if [[ $result1 -ne 0 || $result2 -eq 0 || $result3 -eq 0 ]];
then
echo "Test FAILED. Inspect output above for more details."
exit -1
fi