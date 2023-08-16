#!/bin/bash
((digit_num=0))

until ((digit_num >=2 ))
do
    password=`cat /dev/random | tr -cd "a-zA-Z0-9" | head -c 8`     
    digit_num=`echo $password | grep -o "[0-9]" | wc -c`
done
echo $password
  


