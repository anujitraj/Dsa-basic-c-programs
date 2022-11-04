#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int R,C;
    printf("Enter the size of row:-");
    scanf("%d",&R);
    printf("Enter the size of column:-");
    scanf("%d",&C);
    
 
    int *ptr = malloc((R * C) * sizeof(int));
 
   
    for (int i = 0; i < R * C; i++)
        ptr[i] = i + 1;
 
   
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            printf("%d ", ptr[i * C + j]);
        printf("\n");
    }
 
   
 
    return 0;
}