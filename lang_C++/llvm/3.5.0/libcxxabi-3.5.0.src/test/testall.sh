#!/bin/sh

parallel=$1
: ${parallel:=1}

make -j${parallel} || exit 1

make -j${parallel} test || exit 1
