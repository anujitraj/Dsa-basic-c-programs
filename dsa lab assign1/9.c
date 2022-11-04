#include <stdio.h>



int main()
{
    int n,m,arr1[100],arr2[50];
    
    //taking input for array 1
    printf("Enter the value of n:-\n");
    scanf("%d",&n);
    printf("Enter the elements of array 1:-\n");\
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
  
    //taking input for array 2
    printf("Enter the value of m:-\n");
    scanf("%d",&m);
    printf("Enter the elements of array 2:-\n");\
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    
    printf("The elements of array 1:-\n");\
    for(int i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    } 
    printf("\nThe elements of array 2:-\n");\
    for(int i=0;i<m;i++){
        printf("%d\t",arr2[i]);
    } 
    
    for(int i=0;i<n+m;i++){
        arr1[n+i] = arr2[i];
    }
    printf("\nThe elements after merging are:-\n");\
    for(int i=0;i<m+n;i++){
        printf("%d\t",arr1[i]);
    } 


    return 0;
}