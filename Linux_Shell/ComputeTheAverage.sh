read a
for i in $(seq 1 $a)
do
    read b
    sum=$((sum + b))
done

printf "%.3f" $(echo "$sum/$a" | bc -l)
