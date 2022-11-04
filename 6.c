#include<stdio.h>

int main(){
    int a,b,c,great;
    printf("Enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    great=(a>b && a>c?a:b>c?b:c);
    printf("The greatest among the three is %d",great);
    return 0;
}