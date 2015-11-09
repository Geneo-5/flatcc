#!/usr/bin/env bash

set -e
cd `dirname $0`/../..
ROOT=`pwd`
TMP=${ROOT}/build/tmp/test/reflection_test

CC=${CC:-cc}
${ROOT}/scripts/build.sh
mkdir -p ${TMP}
rm -rf ${TMP}/*
bin/flatcc --schema -o ${TMP} test/monster_test/monster_test.fbs

cp test/reflection_test/*.c ${TMP}
cd ${TMP}

$CC -g -I ${ROOT}/include reflection_test.c \
    ${ROOT}/lib/libflatccbuilder_d.a -o reflection_test_d
$CC -O3 -DNDEBUG -I ${ROOT}/include reflection_test.c \
    ${ROOT}/lib/libflatccbuilder.a -o reflection_test
echo "running reflection test debug"
./reflection_test_d
echo "running reflection test optimized"
./reflection_test
