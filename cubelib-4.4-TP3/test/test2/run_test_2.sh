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


CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test2"
TEMPLATE_CUBE="$CUBES_DIR/template.cube"
TEMPLATE_MISC_DATA="$CUBES_DIR/template.data"



echo "######################################################"
echo "#Run test 2 : Check the cube creation by C++ library. "
echo "#"
echo "#"
echo "######################################################"
mkdir -p tests
cd tests
echo  "=====> Creation of the own example3.cubex example cube..."
../cube_self_test2_ext
echo  "=====> Creation of the example cube..."
../cube_self_test2
result1=$?
echo  "=====> Creation of the example cube with advanced system tree..."
../cube_self_test2_1
result1_1=$?
echo "=====> Compare result with saved template..."
../cube_cmp example2.cubex $TEMPLATE_CUBE 
result2=$?
cp example2_2.cubex example2_2_compare.cubex
echo  "=====>  Compare result with advanced system tree with itself..."
../cube_cmp example2_2.cubex example2_2_compare.cubex
result2_1=$?
echo  "=====> Test cube report as a container..."
tar -xf example2.cubex "Die Ameisen"
diff "Die Ameisen" $TEMPLATE_MISC_DATA > run_test_2.diff
result3=$?
cd ..
if [[ $result1 -ne 0 ||  $result1_1 -ne 0 || $result2 -ne 0 || $result2_1 -ne 0 || $result3 -ne 0 ]];
then
echo "Test FAILED. Inspect output above for more details."
exit -1
fi
