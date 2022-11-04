#include<stdio.h>

int main(){
    int a,b,c,lowest;
    printf("\nEnter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    lowest=(a<b && a<c?a:b<c?b:c);
    printf("The lowest among all is %d",lowest);
    return 0;
}