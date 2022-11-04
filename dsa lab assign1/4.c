//Q4
#include<stdio.h>
int main(){
   int student[40],pos,i,size,value;
   printf("enter number of elements in an array :");
   scanf("%d",&size);
   printf("enter the elements of an array:\n");
   for(i=0;i<size;i++)
      scanf("%d",&student[i]);

    pos = 1;
   printf("enter the value into the 1st position:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      student[i+1]=student[i];
   student[pos-1]= value;
   printf("final array after inserting the value is:\n");
   for(i=0;i<=size;i++)
      printf("%d\n",student[i]);
   return 0;
}