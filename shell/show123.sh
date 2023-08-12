#!/bin/bash
read -p "your choice:" choice
function printit () {
    echo  "your choice is ${1}"
}

case ${choice} in
    "one")  
        printit 1
        ;;
    "two")
        printit 2
        ;;
    "three")
        printit 3
        ;;
esac
    

