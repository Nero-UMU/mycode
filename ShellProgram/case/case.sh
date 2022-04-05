echo "input a number in 1-4"
echo -e "your number: \c"
read Num
case "${Num}" in
    1)
        echo "you have chosen 1"
    ;;
    2)
        echo "you have chosen 2"
    ;;
    3)
        echo "you have chosen 3"
    ;;
    4)
        echo "you have chosen 4"
        ;;
    *)
        echo "you have not choose number in 1-4"
        ;;
esac

