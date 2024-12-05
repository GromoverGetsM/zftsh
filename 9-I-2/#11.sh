#!/bin/bash

tests_dir="./tests"
reports_dir="./reports"
results="${reports_dir}/results

mkdir -p "$reports_dir"
temp = $(mktemp)

for file in "$tests_dir"/*; do
	if [[ -f "$file" ]]; then
		grep -E "^# [0-9]+ : .+$" "$file" >> "$temp"
	fi
done

sort -u -t : -k1,1 -n "$temp" > "$results"

test -f "$temp" && rm "$temp"
echo "Результаты отсортированы и сохранены в $results"
