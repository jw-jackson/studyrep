ARGS=2
E_BADARGS=85
if [ $# -ne "$ARGS" ]
then
    echo " `basename $0` error"
    exit $E_BADARGS
fi

gcd ()
{
    dividend=$1
    divisor=$2 

    remainder=1

    until [ "$remainder" -eq 0 ]
    do 
        (( remainder = dividend % divisor))
        (( dividend = divisor ))
        (( divisor = remainder ))
    done
    echo $dividend

}

gcd $1 $2
exit 0
