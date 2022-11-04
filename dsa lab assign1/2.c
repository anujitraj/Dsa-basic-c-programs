#include <stdio.h>

int main()
{


    int i,n, min, max, secmin, secmax;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int a[n];
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
        if (max < a[i]) 
        {
            max = a[i];
            
        } 
        else if (a[i] < secmax && a[i] != max) 
        {
            secmax = a[i];
        }
		if (a[i] < min)
		{
		    min = a[i];
        }
        else if (a[i] > secmin && a[i] != min)
        {
            secmin = a[i];
        }
		
    }
    
     printf("Minimum of array : %d",min);
     printf("\nMaximum of array : %d",max);

     printf("\nSecond minimum of array : %d",secmin);
     printf("\nSecond maximum of array : %d",secmax);

    return 0;
}