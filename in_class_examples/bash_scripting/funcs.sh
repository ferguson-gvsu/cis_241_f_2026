#! /bin/bash

function repeat() {
  range=$(seq 0 $2)
  for i in $range
  do
    echo "$1"
  done
}

repeat "hello" 5
repeat "!!!" 10
repeat $1 $2

