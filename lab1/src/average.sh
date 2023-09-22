#!/bin/bash
sum=0;

count=0;
for param in "$@"
do
count=$(( $count + 1 ));
sum=$(($sum+$param));
done
aver=$(($sum/$count));
echo  "$count", "$aver"