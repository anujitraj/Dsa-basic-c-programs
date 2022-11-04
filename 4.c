#include<stdio.h>

int main(){
    float cel,fah;
    printf("Enter the temperature in celcius:");
    scanf("%f",&cel);
    fah=((9.0/5.0)*cel)+32;
    printf("The temperature in fahrenheit is %f",fah);
    return 0;
}