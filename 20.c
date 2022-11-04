#include<stdio.h>

int main(){
    int n,temp=0,i,t,k;
    printf("Enter the three digit number:");
    scanf("%d",&k);
    n=k;
    while(n!=0)
    {
    t=n%10;
    n=n/10;       //t=3 n=0  temp=1cube +7cube +3cube
    temp=t*t*t+temp;
    }
    if(k==temp)
    printf("%d is an armstrong number.",k);
    else
    printf("%d is not an armstrong number.",k);
    return 0;
}