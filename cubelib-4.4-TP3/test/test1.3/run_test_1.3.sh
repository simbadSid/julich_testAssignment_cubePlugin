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




CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test1.3"
TEMPLATE_CUBE="$CUBES_DIR/template.cube"

echo "######################################################"
echo "# Run test 1.3 : Check the reading of gzipped cube3 cube "
echo "#                using \"cube_cmp\" tool "
echo "#"
echo "######################################################"
mkdir -p tests
cd tests
echo "=====> Gzip template..."
cp $TEMPLATE_CUBE gz_template.cube
gzip -f gz_template.cube
echo "=====> Compare result using \"cube_cmp\" tool"
../cube_cmp $TEMPLATE_CUBE gz_template.cube.gz
result1=$?
cd ..
if [[ $result1 -ne 0  ]]; 
then
echo "Test FAILED. Inspect output above for more details."
exit -1 
fi

