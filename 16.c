#include<stdio.h>

int main(){
    int fact=1,i,n;
    printf("Enter a positive number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("The factorial is %d",fact);
    return 0;
}