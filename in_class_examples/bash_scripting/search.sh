#! /bin/bash

search_str=$1
filename=$2
total_lines=$(cat $filename | wc -l)
hit_lines=$(grep $search_str $filename | wc -l)

echo "String ${search_str} found in ${hit_lines} / ${total_lines} lines of file: ${filename}"
