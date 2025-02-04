#!/usr/bin/env bash

valor 

for (( i=1; i<=5; i++ ))
do
	echo "i = $valor"
  if [[ i == 3 ]];
   then
  	echo "Saltamos el número 3"
  	continue
  fi
done