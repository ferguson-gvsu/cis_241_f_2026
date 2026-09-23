#! /bin/bash

echo "Hello!" > keep.txt

for i in $(seq 1 10)
do
  num_lines=$(( $RANDOM % 100 ))
  echo "file ${i}" > file_${i}.txt
  line_1="$RANDOM"
  line_2="$RANDOM"
  for j in $(seq 1 $num_lines)
  do
    echo "$line_1" >> file_${i}.txt
    echo "$line_2" >> file_${i}.txt
  done
done
