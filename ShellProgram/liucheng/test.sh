a=100
b=200
echo "a=$a"
echo "b=$b"
if [ $a == $b ]; then
    echo "a等于b"
elif [ $a -gt $b ]; then
    echo "a大于b"
else
    echo "a小于b"
fi
