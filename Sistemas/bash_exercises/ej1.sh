#!/usr/bin/env bash

for archivo in *.txt; 
do
	if [[ grep -q '.' "$archivo" ]]; 
	then
		echo "El archivo" &archivo "NO está vacío"
	else 
		echo "El archivo" &archivo "está vacío"
	fi
done