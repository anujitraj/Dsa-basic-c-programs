#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t;
    float si,ci;

    
    printf("Enter the principal amount, rate of interest and time period ");
    scanf("%f%f%f",&p,&r,&t);
    si= (p*t*r)/100;
    ci= p*pow(1+r/100,t)-p;
    printf("The final amount from simple interest is %f and compound interest is %f",si,ci);
    return 0;
}