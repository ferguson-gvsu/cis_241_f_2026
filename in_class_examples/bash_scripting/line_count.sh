#! /bin/bash

search_string=$1
filename=$2

total_lines=$(cat $filename | wc -l)
hit_lines=$(grep $search_string $filename | wc -l)

echo "String $search_string found in $hit_lines / $total_lines lines of file: $filename"
