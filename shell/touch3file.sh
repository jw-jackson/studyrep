#!/bin/sh
read -p "filename[filename]:" filename
date1=$(date -d '2 days ago' +%Y%m%d)
date2=$(date -d '1 days ago' +%Y%m%d)
date3=$(date -d '0 days ago' +%Y%m%d)

echo ${filename:-"filename"}$date1
echo ${filename:-"filename"}$date2
echo ${filename:-"filename"}$date3
touch ${filename:-"filename"}$date1
touch ${filename:-"filename"}$date2
touch ${filename:-"filename"}$date3
