#! /bin/bash

names=()
counts=()

read -p "Enter a name: " user_input 
while [ ! "$user_input" = "quit" ]; do
  names+=("$user_input")
  counts+=(0)
  read -p "Enter a name: " user_input 
done

echo "You entered ${#names[@]} names!"

for name in ${names[@]}; do
  echo "Name: ${name}"
done

num_trials=1000000
for i in $(seq 1 $num_trials); do
  random_idx=$(( $RANDOM % ${#names[@]} ))
  counts[random_idx]=$((${counts[random_idx]} + 1))
done

for idx in ${!names[@]}; do
  echo "Name: ${names[idx]} was chosen ${counts[idx]} times!"
done
