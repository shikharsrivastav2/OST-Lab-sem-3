echo enter a number
read n
n = 1
f = 1
until [$x - eq `expn $n + 1`]
do
f= `expr $f \* $x `
done
echo factorial = $f

