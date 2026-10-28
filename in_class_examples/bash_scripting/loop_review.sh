#! /bin/bash


for x in $(seq 5 10)
do
  echo "$x -> $((x * x))" 
done

echo "switching loops"
y=0
while ((y < 10))
do
  echo "$y"
  y=$((y+1))
done
