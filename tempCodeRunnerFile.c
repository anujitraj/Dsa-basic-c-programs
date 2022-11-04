// Defining macro like a function
#include<stdio.h>
#define PRODUCT(a,b)   (a)*(b)
int main(){
    printf("The  sum of two digits is %d",PRODUCT(3+2,4-6));
    return 0;
}