#include<stdio.h>

int main(){
    int n,i,test=1;
    printf("\nEnter the number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
    test=0;
    break;
    }
    }
    if(test==1)
    printf("The number is prime.")   ;
    else
   printf("The number is not prime.") ;
   return 0;
   
}


