#!/bin/bash

FILES="~/shell/fileinfo
~/shell/fileinfo.sh
/home/jackson/shell/fileinfo.sh
/bin/sh"

for file in $FILES
do 
    if [ ! -e $file ]
    then
        echo "$file doesn't exist."
        echo ""
        continue
    fi
    
    ls -l $file | awk '{ print $8 "     filesize: " $5 }'
    whatis `basename $file`
    echo ""
done

exit 0
