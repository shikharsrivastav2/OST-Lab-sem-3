echo "Enter a number"
read num

xx=1

while [ $xx -le $num ]
do
  echo $xx
  xx=$((xx + 2))
done

