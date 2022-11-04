
#include<stdio.h>

int main(){
    int i,n,k,t,cubic=0;
    printf("Enter a number:");
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        t=k%10;
        k=k/10;
        cubic=cubic+ t*t*t;
    }
    if(n==cubic)
    printf("The number %d is Narcissistic.",n);
    else
    printf("The number %d is not Narcissistic.",n);
    return 0;
}



