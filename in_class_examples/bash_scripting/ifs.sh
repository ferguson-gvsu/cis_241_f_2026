#! /bin/bash


if [ $1 -eq $2 ]
then
  echo "int equivalent"
fi

if [ $1 = $2 ]
then
  echo "string equivalent"
fi

if (( $1 + 1 <= 10 )); then
  echo "it's 10"
fi
