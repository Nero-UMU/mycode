function func1 () {
   echo 'this function will add two number in one number'
   echo -e "please input the first number: \c"
   read firstNum
   echo -e "please input the second number: \c"
   read secondNum
   echo "two number is $firstNum and $secondNum"
   return $(( $firstNum + $secondNum ))  
}
func1
echo "these number add to one number is $?"
