#/bin/bash
((randomnumber=RANDOM%100 +1 ))
echo $randomnumber

if ((randomnumber % 2 == 1))
then
    echo "odd"
else
    echo "even"
fi

if ((randomnumber % 3 == 0))
then 
    echo "can be divided by 3"
fi 


read -p "enter:" input

while ((input != randomnumber))
do
    if ((input > randomnumber))
    then
        echo "guess lower"
    else
        echo "guess bigger"
    fi
    read -p "enter:" input
done

echo "wowowowowowowow"

