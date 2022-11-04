//1) WAP to find x^a mod P, where, p is prime and gcd(a,P)=1
#include<stdio.h>

int main(){
    int a,P,x,x1,i,gcd,test,temp;
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
     printf("The gcd of a and x is not 1 so program is terminated.");
     exit(0);
    }
    if(a>P)
    printf("a is greater than P");
    else
    {
    printf("a is less than P");
    exit(0);
    }
    temp=P-1;
    if((P-1)<a)
    printf("P-1 is less than a");
    else
    {
    printf("P-1 is greater than a so program cannot be proceeded.");
    exit(0);
    }
    if(temp<a)
    printf("temp is less than a.");
    else
    {
        printf("temp is greater than a so program is terminated.");
        exit(0);
    }
    temp=(P-1)*2;
    x1=a-temp;
    
    


    return 0;
}