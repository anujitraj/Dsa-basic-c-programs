#include <stdio.h>

int main()
{
    int pos, i, n, x;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int a[n];
 
    printf("Enter the elements in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);}
 
    printf("Enter the position to insert element\n");
    scanf("%d", &pos);
 
    printf("Enter the value to be insert\n");
    scanf("%d", &x);
 
    for (i = n - 1; i >= pos - 1; i--)
    a[i+1] = a[i];
 
    a[pos-1] = x;
 
    printf("Resultant array is\n");
 
    for (i = 0; i <= n; i++)
      printf("%d\n", a[i]);

    return 0;
}