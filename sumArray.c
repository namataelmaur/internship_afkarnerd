#include<stdio.h>
int myArray(int Array[],int size){
int sum=0;
int i;
for (i=0;i<size;i++){
sum+=Array[i];
}
return sum;
}
int maim()
{
int ar[3]=[4,7,9];
int sum = myArray(ar,3);
printf("the sum is %d\n",sum);
}
