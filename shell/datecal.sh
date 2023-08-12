#!/bin/bash
read -p "YYYYMMDD" idate
# echo $idate | egrep  '[0-9]{8}'
if [ "$(echo $idate | egrep '[0-9]{8}')" == "" ]; then
    echo "input error"
    exit 1
fi
declare -i date_now=$(date -d "now" +%s)
declare -i the_date=$(date -d "${idate}" +%s)
# echo "${the_date}"

# 必须加"
echo "($the_date-$date_now)/60/60/24" | bc
