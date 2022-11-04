#include<stdio.h>

int main(){
    int phy,chem,math,total,choice;
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
    printf("\n Press 1 if your average is above 90\n Press 2 if your average is above 80 below 90\n Press 3 if your average is above 70 below 80\n Press 4 if your average is above 60 below 70\n Press 5 if your average is above 50 below 60\n Press 6 if your average is below 50");
    printf("\nYour choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         printf("\nYour grade is A");
        break;
        case 2:
        printf("\nYour grade is B");
        break;
        case 3:
        printf("\nYour grade is C");
        break;
        case 4:
        printf("\nYour grade is D");
        break;
        case 5:
        printf("\nYour grade is E");
        break;
        case 6:
        printf("\nYour have Failed");
        break;
    }
    return 0;
}