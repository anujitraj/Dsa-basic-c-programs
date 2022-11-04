#include <stdio.h>
#include <stdlib.h>
struct student{
    int rollno;
    char name[20];
    char gender;
    float cgpa;
    int placed;
};  
int main(){
    int n;
    struct student *ptr, stu;
    ptr = &stu;
    char *filename = "students.txt";
    FILE *fp = fopen(filename, "r");
    printf("Enter the number of records:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("\nDetails of Student %d: \n", i+1);
        fscanf(fp,"%d",&ptr->rollno);
        fscanf(fp,"%s",ptr->name);
        fscanf(fp," %c",&ptr->gender);
        fscanf(fp,"%f",&ptr->cgpa);
        fscanf(fp,"%d",&ptr->placed);  

        printf("%d\n", ptr->rollno);
        printf("%s\n", ptr->name);
        printf("%c\n", ptr->gender);
        printf("%.2f\n", ptr->cgpa);
        if(ptr->placed = 1)
            printf("Placed!");
        else
            printf("Not placed!");

        printf("\n");
    }
}