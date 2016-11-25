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


CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test12"
TEMPLATE_DATA_c="$CUBES_DIR/templatec.cube"
TEMPLATE_DATA_C="$CUBES_DIR/template_C.cube"

EXT_CUBE_LOCATION=""
if test "x$EXT_CUBE_LOCATION" == "x"; then
CUBEFILE=example3.cubex
else
CUBEFILE=$EXT_CUBE_LOCATION/example3.cubex
fi

echo "##########################################################################"
echo "# Run test 12 : Check the tool \"cube_diff\" "
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests
echo "=====> Substract cube from itself..."
../cube_diff $CUBEFILE $CUBEFILE
result1=$?
echo "=====> Test if empty result"
../cube_is_empty diff.cubex
result2=$?
# echo "=====> Check diff tool with new system tree..."
# ../cube_diff example_system_tree.cubex example_system_tree.cubex
# result3=$?
# echo "=====> Test if empty result"
# ../cube_is_empty diff.cubex
# result4=$?
# echo "=====> Check diff tool with incompatible system trees(should fail)..."
# ../cube_diff  $CUBEFILE example_system_tree.cubex
# result5=$?
# echo "=====> Check diff tool with new system tree (collapse)..."
# ../cube_diff -C example_system_tree.cubex $CUBEFILE 
# result6=$?
# echo "=====> Export to cube3 formant"
# ../cube4to3 diff.cubex
# result7=$?
# echo "=====> Compare with template"
# ../cube_cmp diff.cube $TEMPLATE_DATA_C 
# result9=$?
# echo "=====> Check diff tool with new system tree (reduce)..."
# ../cube_diff -c example_system_tree.cubex $CUBEFILE 
# result10=$?
# echo "=====> Export to cube3 formant"
# ../cube4to3 diff.cubex
# result11=$?
# echo "=====> Compare with template"
# ../cube_cmp diff.cube $TEMPLATE_DATA_c 
# result12=$?

cd ..
if [[ $result1 -ne 0 || 
      $result2 -ne 0 
# ||
#       $result3 -ne 0 || 
#       $result4 -ne 0 || 
#       $result5 -eq 0 ||
#       $result6 -ne 0 || 
#       $result7 -ne 0 ||
#       $result8 -ne 0 || 
#       $result9 -ne 0 ||
#       $result10 -ne 0 || 
#       $result11 -ne 0 ||
#       $result12 -ne 0 
   ]];
then
echo "Test FAILED. Inspect output above for more details."
exit -1
fi
