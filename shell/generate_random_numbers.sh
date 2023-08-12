#!/bin/bash
MAXCOUNT=10
count=1


while (( count < MAXCOUNT ))
do 
    number=$RANDOM
    echo $number
    (( count++ ))
done

RANGE=50

count=1
while (( count < MAXCOUNT ))
do 
    (( number = $RANDOM % RANGE ))
    echo $number
    (( count++ ))
done
