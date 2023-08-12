#!/bin/bash

read -p "enter:" input 
if [ "$input" == "y" ] || [ "$input" == "Y" ]; then
    echo "yes"
    exit 0
fi
if [ "$input" == "N" ] || [ "$input" == "n" ]; then
    echo "no"
    exit 0
fi
