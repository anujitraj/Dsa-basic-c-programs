#include<stdio.h>

int main(){
    int i,a,b, aprb=1;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    aprb= aprb*a;
    printf("a^b=%d",aprb);
    return 0;
}