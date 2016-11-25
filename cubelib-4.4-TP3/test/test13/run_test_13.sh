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




TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test13"
TEMPLATE_CUBE="$TEMPLATE_DIR/template.cube"
EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi

echo "##########################################################################"
echo "# Run test 13 : Check the tool \"cube_cut\" "
echo "#"
echo "##########################################################################"
echo "Perform cut cube_cut $CUBEFILE -r adi_ -p '!$omp parallel @rhs.f:28'  "
mkdir -p tests
cd tests
../cube_cut -r adi_ -p '!$omp parallel @rhs.f:28' $CUBEFILE 
result1=$?
../cube4to3 cut.cubex
echo "Compare with template ..."
../cube_cmp cut.cube $TEMPLATE_CUBE
result2=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 ]];
then
echo "Test FAILED. Inspect output above for more details."
exit -1
fi
