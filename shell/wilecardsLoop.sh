#!/bin/bash

filename="./*.sh"

for file in $filename
do 
    echo $file
done

for file in $filename
do 
    for entry in `ls -l $file`
    do
        echo $entry
    done
done
