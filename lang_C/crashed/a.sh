#!/bin/bash

for i in *.c; do
	b=$(basename $i .c)
	if [ -f ../single/$b.reference_output ]; then
		git mv ../single/$b.reference_output .
	fi
done
