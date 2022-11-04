#include<stdio.h>
#include<math.h>

int main(){
    double D,a,b,c,sqrot,root1,root2;
    printf("\nThe quadratic equation is of the format ax^2+bx+c=0");
    printf("\nSo enter the values of a, b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    D=pow(b,2)-4*a*c;
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);
    printf("\nThe roots of equation is %lf and %lf",root1,root2);
    if(root1>0)
    printf("\nThe roots are real and distinct.");
    else if(root1=0)
    printf("\nThe roots are real and equal.");
    else
    printf("\nThe roots are complex.");

    return 0;
}