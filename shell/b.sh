var1=1
var2=4

if (( $var1 > $var2 ))
then #^      ^      注意不是 $var1 和 $var2，为什么？
  echo "$var1 is greater then $var2"
fi     # 5 大于 4

exit 0
