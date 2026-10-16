#! /bin/bash

filename="test.txt"
echo "hello" > ${filename}_backup
result=$(ls | wc -l)
echo "Our result was $result"

echo "You passed $# arguments"
echo "0 is $0"
echo "1 is $1"
echo "2 is $2"
echo "3 is $3"

x=5
echo "x is $x"
y=$(( $x / 100 ))
# () parentheses
# [] brackets
# {} braces
echo "y is $y"
z=$(($x + 1))
echo "z is $z"






