#include<stdio.h>

int main(){
    int phy,chem,math,total;
    float average;
    printf("Enter the marks of students in physics: ");
    scanf("%d",&phy);
    printf("Enter the marks of students in chemistry:");
    scanf("%d",&chem);
    printf("Enter the marks of students in mathematics:");
    scanf("%d",&math);
    total=phy+chem+math;
    average=(phy+chem+math)/3;
    printf("\nTotal marks = %d/300 \nAverage = %f",total,average);
    if(average>=90)
    printf("\nThe student has obtained an A grade.");
    else if(average>=80 && average<90)
    printf("\nThe student has obtained a B grade.");
    else if(average>=70 && average<80)
    printf("\nThe student has obtained a C grade.");
    else if(average>=60 && average<70)
    printf("\nThe student has obtained a D grade.");
    else if(average>=50 && average<60)
    printf("\nThe student has obtained an E grade.");
    else
    printf("\nWe are sorry but student has obtained an F(fail) grade.");

    return 0;
}