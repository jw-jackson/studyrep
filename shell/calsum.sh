#!/bin/bash
read -p "enter:" input
sum=0

while [ "${input}" != "0" ]
do
    input=$(($input-1))
    sum=$(($sum+$input))
done
echo ${sum}
