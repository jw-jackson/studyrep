#!/bin/bash
read -p "enter:" input
[ "$input" == "y" -o "$input" == "Y" ] && echo "yes" && exit 0
[ "$input" == "n" -o "$input" == "N" ] && echo "no" && exit 0
