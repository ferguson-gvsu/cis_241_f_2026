#! /bin/bash

names=()

read -p "Enter a name: " user_input 
while [ ! "$user_input" = "quit" ]; do
  names+=("$user_input")
  read -p "Enter a name: " user_input 
done

echo "You entered ${#names[@]} names!"

for name in ${names[@]}; do
  echo "Name: ${name}"
done

random_idx=$(( $RANDOM % ${#names[@]} ))
echo "Random name: ${names[random_idx]}"
