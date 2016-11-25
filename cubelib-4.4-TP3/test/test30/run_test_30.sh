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



TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test30"
TEMPLATE_FILE="$TEMPLATE_DIR/template.out"

echo "##########################################################################"
echo "# Run test 30 : Check the datatype \"ScaleFuncValue\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Testing creation and manipulation of SFV objects..."
../cube_self_test30
result1=$?
echo "=====> Comparing the cube to the expected result..."
../cube_dump -m all scale_test.cubex > test30.out
diff test30.out $TEMPLATE_FILE &> test30.diff
result2=$?
#echo "=====> Transform one tau profile to cube..."
#../tau2cube $TEMPLATE_TAU_PROFILE1 &> tau1.out
#result1=$?
#echo "=====> Transform result to cube3 ..."
#../cube4to3 tau_profile.cubex
#result2=$?
#echo "=====> Compare result with saved template using diff..."
#diff tau_profile.cube $TEMPLATE_CUBE1 &> test28.1.diff
#result3=$?
#
#rm tau_profile.cubex tau_profile.cube
#
#echo "=====> Transform another tau profile to cube..."
#../tau2cube $TEMPLATE_TAU_PROFILE2 &> tau2.out
#result4=$?
#echo "=====> Transform result to cube3..."
#../cube4to3 tau_profile.cubex
#result5=$?
#echo "=====> Compare result with saved template using diff..."
#diff tau_profile.cube $TEMPLATE_CUBE2 &> test28.2.diff
#result6=$?
#
#rm tau_profile.cubex tau_profile.cube
#cd ..
#rm -rf tests
#if [[ $result1 -ne 0 || $result2 -ne 0 || $result3 -ne 0 ||  $result4 -ne 0 || $result5 -ne 0 || $result6 -ne 0 ]];
if [[ $result1 -ne 0 || $result2 -ne 0 ]];
then
echo "Test FAILED. Inspect output above and tests/test30.diff for more details."
exit -1
fi
