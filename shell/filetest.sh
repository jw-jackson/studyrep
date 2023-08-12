#!/bin/bash
read -p "filename:" filename
test -z $filename && echo "please input filename" && exit 0
# 是否不存在 , 不存在 -> 1

test -e $filename || { echo "NOT exist" && exit 0; }

# !test -e $filename && echo "NOT exist" && exit 0
# 1. 左结合
# 2. $? 为 0 代表执行成功
# 3. $$ 前面有执行成功的就执行
# 4. || 前面有执行失败的就执行
# 5. {} 代替 () 必须有空格


test -f $filename && filetype="regular file"
test -d $filename && filetype="directory"
test -r $filename && perm="readalbe"
test -w $filename && perm="${perm} writable"
test -x $filename && perm="${perm} executable"

echo "The filename: $filenmae is a $filetype"
echo "you can: $perm"

