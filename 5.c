#include<stdio.h>

int main(){
    int a,b,choice,c;
    printf("\nYou have to enter two integers only:");
    printf("\nEnter first integer:");
    scanf("%d",&a);
    printf("\nEnter second integer:");
    scanf("%d",&b);
    printf("\n Press 1 for addition:\n Press 2 for subtraction:\n Press 3 for multiplication\n Press 4 for division:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        c=a+b;
        printf("\nThe sum of two integers is %d",c);
        break;
        
        case 2:
        c=a-b;
        printf("\nThe subtraction of two integers is %d",c);
        break;

        case 3:
        c=a*b;
        printf("\nThe product of two  integers is %d",c);
        break;
        case 4:
        c=a/b;
        printf("\nThe division of two integers is %d",c);
        break;
    }
    return 0;
}