i=0
while [ $i -le 1000 ]
do
    ARG=$(seq 500 | shuf)
    ./a.out $ARG | wc -l | awk '$1 > 5500 {print $1}'
    i=$((i + 1))
done
