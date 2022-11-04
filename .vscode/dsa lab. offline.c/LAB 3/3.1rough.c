#include<stdio.h>
int main()
{
    int n,middle,arr[100],start , end,s;
    
   printf("Enter the size of an array :-");
   scanf("%d",&n);
   //loop for taking elements
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
   }
   //loop for printing an array
   
//    for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//    }
//sort an array 
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
         start = arr[0];
         end  = arr[n-1];
   }
   
   for(int i=0;i<n;i++){
         middle = (arr[0]+arr[n-1])/2;
   }
    

     printf("\nThe middle element is :-%d",middle);

    printf("\nEnter the element to search:-");
    scanf("%d",&s);
    if(middle<s){
          for(int i=middle;i<=end;++i){
               if(s == arr[i]){
                    printf("Element found");
               }
          }
    }
     if(middle>s){
          for(int i=start;i<middle;i++){
               if(s == arr[i]){
                    printf("Element found");
               }
          }
    }
    if(middle == s){
          printf("Element found");
    }


    return 0;
}