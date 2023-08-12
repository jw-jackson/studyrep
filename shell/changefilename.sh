#!/bin/bash

#filelist=/home/jackson/shell/*
filelist=*
echo $filename

for file in $filelist
do
    name=${file%.sh}
    mv $file "$name$1"
done
