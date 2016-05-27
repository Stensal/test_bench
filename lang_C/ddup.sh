#!/bin/bash

D1=$1
D2=$2

find $D1 -name *.c  > f1.list

for i in $(cat f1.list); do
	f1=$(basename $i)

	if [ -f ${D2}/${f1} ]; then
		echo "check the duplication of $f1"		
		cmp $i ${D2}/${f1}
		if [ "$?" -eq 0 ]; then
			echo "$i is duplicated in $D2"
			rm ${D2}/${f1}
		fi
	fi
done

