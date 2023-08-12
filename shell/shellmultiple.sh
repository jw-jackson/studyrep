#!/bin/bash

read -p "first number:" num1
read -p "second number:" num2

# bash shellmultiple.sh 可以运行
# declare 是 bash 内建命令
declare -i result=$num1*$num2
echo $result
echo $(($num1 * $num2))

echo $num1*$num2 | bc
