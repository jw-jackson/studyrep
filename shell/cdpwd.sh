#!/bin/bash
# linux 中文件名中可以有\n
dirname='te mp
'

cd $dirname

# 命令替换丢失尾部换行符
cd "`pwd`"

cd ..
rm -r dirname
