#include <stdio.h>

int main()
{
    int pos, i, n;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    int a[n];
 
    printf("Enter the elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);}
 
    printf("Enter the position to delete an element:\n");
    scanf("%d", &pos);
 
 
    for (i = pos - 1; i < n-1; i++)  
        {  
            a[i] = a[i+1];  
        }  
 
    printf("Resultant array:\n");
 
    for (i = 0; i < n; i++)
      printf("%d\n", a[i]);

    return 0;

   
}