#!/bin/bash
##*************************************************************************##
##  CUBE        http://www.scalasca.org/                                   ##
##*************************************************************************##
##  Copyright (c) 2016                                                     ##
##  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          ##
##                                                                         ##
##  This software may be modified and distributed under the terms of       ##
##  a BSD-style license.  See the COPYING file in the package base         ##
##  directory for details.                                                 ##
##*************************************************************************##


CUBES_DIR="/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-4.4-TP3/build-frontend/../test/test33_CubeProxy"
TEMPLATE="$CUBES_DIR/template.out"
IO_URL=file://${CUBES_DIR}/proxy.cubex
NETWORK_URL=cube://localhost/${CUBES_DIR}/proxy.cubex
echo "##########################################################################"
echo "# Run test 33 : Run integration test for Proxy interface"
echo "#"
echo "##########################################################################"
mkdir -p tests
cd tests

echo "=====>  Testing Io Proxy"
../cube_selftest_CubeIoProxy 2> test33_CubeProxy.err > tee test33_CubeProxy.out
returnValueIo=$?

echo "=====>  Testing Network Proxy"
../cube_server 2> test33_CubeProxy_server.err > test33_CubeProxy_server.log &
SERVER_PID=$!
sleep 1
../cube_selftest_CubeNetworkProxy 2> test33_CubeProxy.err > tee -a test33_CubeProxy.out
returnValueNetwork=$?
kill -TERM ${SERVER_PID}
echo "=====>  done"

cd ..
if [[ $returnValueIo -ne 0 || $returnValueNetwork -ne 0 ]];
then
    echo "Test FAILED. Inspect log output for more details."
    exit -1
fi
