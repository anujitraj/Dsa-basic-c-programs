#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    printf("The triangle is feasible to be formed.");
    else
    printf("The triangle is not feasible.");
    
    return 0;
}