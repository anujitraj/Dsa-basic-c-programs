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

    FILE *fp = fopen("students.txt", "w");
    printf("Enter the number of records:");
    scanf("%d",&n);
    if (ptr == NULL)
    {
        printf("Empty!");
        exit(1);
    }
    for(int i=0; i<n; i++){
        printf("Enter roll: ");
        scanf("%d", &ptr->rollno);
        printf("Enter name: ");
        scanf("%s", ptr->name);
        printf("Enter gender: ");
        scanf(" %c", &ptr->gender);
        printf("Enter cgpa: ");
        scanf("%f", &ptr->cgpa);
        printf("Enter 1 if placed and 0 if not: ");
        scanf("%d", &ptr->placed);

        fprintf(fp, "%d", ptr->rollno);
        fprintf(fp, "%s", ptr->name);
        fprintf(fp, " %c", ptr->gender);
        fprintf(fp, "%f", ptr->cgpa);
        fprintf(fp, " %d", ptr->placed);
    }
  
    
   fclose(fp);
   return 0;
}