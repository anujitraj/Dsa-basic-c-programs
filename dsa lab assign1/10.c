#include <stdio.h>

int main()
{
   char arr[100];
   int n,a,b[100];
   
  printf("Enter number of elements in array:-\n");
  scanf("%d",&n);
   
   printf("Enter the character of an array:-\n");
   for(int i=0;i<n;i++){
        scanf("%s",&arr[i]);   
   }
   
   
  printf("\nEnter the value '+2' or '-2' :-\n");
  scanf("%d",&a);
  
  for(int i=0;i<n;i++){
      
  }
   
  for(int i=0;i<n;i++){
        if(a == +2){
            if(arr[i]>65 || arr[i]<90){
                b[i] = arr[i]+2;
            }
            if(arr[i] == 90 || arr[i] == 89){
                b[i] = arr[i]-25+1;
            }
           
        }
        if(a == -2){
           
             if(arr[i]>65 || arr[i]<90){
                b[i] = arr[i]-2;
            }
            if(arr[i] == 65 || arr[i] == 66){
                b[i] = arr[i]+25-1;
            }
        }
      
  }
   
   printf("The character in an array are:-\n");
   for(int i=0;i<n;i++){
        printf("%c\t",b[i]);   
   }
   
 
   
   
    return 0;
}