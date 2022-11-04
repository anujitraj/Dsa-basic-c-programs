// to find whether the year is leap year or not.

#include<stdio.h>

int main(){
    int year,lpyr;
    printf("Enter the year:");
    scanf("%d",&year);
    lpyr=(year%4==0 && year%100!=0 || year%400==0 ?printf("%d is leap year",year):printf("%d is not a leap year",year));
    return 0;
}