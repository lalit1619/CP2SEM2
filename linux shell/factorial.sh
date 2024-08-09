# Start writting your script
n=5
factorial=1
for((i=n;i>=1;i--))
do
factorial=$((factorial*i))
done
echo $factorial