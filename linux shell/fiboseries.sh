
num_terms=10
a=0
b=1
for (( i=0; i<num_terms; i++ ))
do
    echo -n "$a "
    c=$((a + b))
    a=$b
    b=$c
done

echo ""
