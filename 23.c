//WCP to find all prime number with in a given range using loop.
#include<stdio.h>

int main(){
    int i,n,flag=0;
printf("Enter the number less than 100:");
scanf("%d",&n);

    if(n==0 || n==1 )
    flag=1;
for(i=2;i<n/2;i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }
}
if(flag==0)
printf(" %d is prime number",n);
else
printf("%d is non prime number.",n);

    return 0;
}