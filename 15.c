//sum of first n natural numbers.
#include<stdio.h>

int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("\n%d",sum);
    return 0;
}
