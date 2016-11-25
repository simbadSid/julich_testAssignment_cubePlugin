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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test14"                                                                                                                                                                                                                                                                                                                                                   
TEMPLATE_CUBE="$TEMPLATE_DIR/template.cube"                                                                                                                                                                                                                                                                                                                                         
               


echo "##########################################################################"
echo "# Run test 14 : Check the tool \"cube_mean\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Perform averaging of four identical cubes... "
../cube_mean example3.cube example3.cube example3.cube example3.cube
result1=$?
echo "=====> Convert result to cube3 format" 
../cube4to3 mean.cubex
result2=$?
echo "=====> Substract result from template"
../cube_diff mean.cube $TEMPLATE_CUBE
result3=$?
echo "=====> Check if empty"
../cube_is_empty diff.cubex
result4=$?
echo "=====> Compare averaging result with template"
../cube_cmp mean.cube $TEMPLATE_CUBE
result5=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 || $result3 -ne 0 || $result4 -ne 0 || $result5 -ne 0  ]];
then
echo "Test FAILED. Inspect output above and tests/test14.diff for more details."
exit -1
fi

