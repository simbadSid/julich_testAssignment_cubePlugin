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


## file       run_serial_test.sh
## maintainer Christian Roessel <c.roessel@fz-juelich.de>
TEMPLATE_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test0.0"
TEMPLATE_OUT="$TEMPLATE_DIR/template.out"


echo "################# UNITE TESTS ########################"
echo "#Run test 0.0  : Check the constructoras of Cube tool. "
echo "#"
echo "######################################################"
mkdir -p tests
cd tests
echo "=====> Read different cube3 and cube4 report using same code.."
../cube_unite_test0.0 >test0.0.output
result1=$?
echo "=====> Compare result with saved template using diff..."
diff $TEMPLATE_OUT test0.0.output &> test0.0.diff
result2=$?
cd ..
if [[ $result1 -ne 0 || $result2 -ne 0 ]];
then
echo "Test FAILED."
exit -1
fi
