#!/bin/bash
string=abcABC123ABCabc

echo ${string#ABC}

# success
# from the head 开始匹配
echo ${string#a*b}


echo ${string#A*C}
