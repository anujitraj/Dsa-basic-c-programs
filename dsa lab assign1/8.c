#include <stdio.h>

void printarr(int arr[], int n);
void deleteval(int arr[],int n,int index);

int main()
{
    int arr[100],n,index;
    
    printf("Enter the value of n:-");
    scanf("%d",&n);
    
    printf("\nEnter the Elements of an array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the value index:-");
    scanf("%d",&index);
    printf("\nThe Elements before deletion are:-\n");
    printarr(arr,n);
    
    deleteval(arr,n,index);
    n -=1;
    
    printf("\nThe Elements after deletion are:-\n");
    printarr(arr,n);

    return 0;
}

void printarr(int arr[] ,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void deleteval(int arr[],int n,int index){
    for(int i=index-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }

}