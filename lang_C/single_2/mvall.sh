#!/bin/bash
for i in $(cat $1); do
    if [ -f $(basename $i) ]; then
	echo "$(basename $i) exists"
    else	
	mv $i  ./
    fi
done
