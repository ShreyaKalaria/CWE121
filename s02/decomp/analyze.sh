#!/bin/bash

if [[ $# -lt 2 ]]; then
	echo 'Pass .c file as first argument and output folder as second argument'
	exit 1
fi

cppcheck --output-file=$2/cppcheck_after.txt --enable=warning,information $1
flawfinder -Q -c $1 > $2/flawfinder_after.txt

