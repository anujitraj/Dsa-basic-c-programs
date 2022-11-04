//1) WAP to find x^a mod P, where, p is prime and gcd(a,P)=1
#include<stdio.h>

int main(){
    int a,P,x,i,gcd,test;
    printf("To find the value of x^a mod p\n");
    printf("Enter the value of x, a and p");
    scanf("%d%d%d",&x,&a,&P);
    // checking whether P is prime or not
    for(i=2;i<=P/2;i++)
    {
    if(P%i==0)
    {
    test=0;
    break;
    }
    }
    if(test==1)
    printf("The number is prime.")   ;
    else
    {
   printf("The number is not prime.") ;
   exit(0);
    }
    // checking gcd of x and p
    for(i=1;i<=x && i<=a;i++)
    {
        //checking if i is factor of both the integers 
        if(a%i==0 && x%i==0)
        gcd=i;
    }
    if(gcd=1)
     printf("The gcd of a and x is %d",gcd);
    else
    {
     printf("The gcd of a and x is not 1");
     exit(0);
    }


    return 0;
}