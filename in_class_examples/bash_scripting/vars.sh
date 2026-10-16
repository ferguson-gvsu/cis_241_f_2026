#! /bin/bash

x=12
echo "x is $x"
y=$(( $x  / 100 ))
echo "y is $y"

result=$(ls | wc -l )
echo "Running ls resulted in ${result} files"

# Don't do this
#a=echo
#echo "$($a + 5)"
