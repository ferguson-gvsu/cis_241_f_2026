#! /bin/bash


if [$1 -eq $2 ]; then
  echo "integer equivalent"
fi

if [ $1 = $2 ]; then
  echo "string equivalent"
fi
