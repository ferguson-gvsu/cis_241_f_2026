#! /bin/bash

for i in $(seq 1 1000)
do
  num_lines=$(( $RANDOM % 100 ))
  echo "file ${i}" > file_${i}.txt
  for j in $(seq 1 $num_lines)
  do
    echo "$RANDOM" >> file_${i}.txt
  done
done
