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



CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test9"
TEMPLATE_CUBE="$CUBES_DIR/template.cube" 
TEMPLATE1_CUBEX="template18" 
TEMPLATE2_CUBEX="template28" 
echo "##########################################################################"
echo "# Run test 9 : Check the tool \"cube3to4\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Transform saved template to cube4 format..."
../cube3to4 -o $TEMPLATE1_CUBEX $TEMPLATE_CUBE 
../cube3to4 -o $TEMPLATE2_CUBEX example3.cube 
result1=$?
echo "=====> Compare result with example3.cubex..."
../cube_cmp $TEMPLATE1_CUBEX.cubex $TEMPLATE2_CUBEX.cubex
result2=$?
cd ..
if [[ $result1 -ne 0 ||  $result2 -ne 0 ]];
then
echo "Test FAILED. Inspect output above for more details."
exit -1
fi
