#!/bin/sh

category=$1
find ./${category} -name "*.exe" -exec rm {} \;
find ./${category} -name "*.log" -exec rm {} \;
