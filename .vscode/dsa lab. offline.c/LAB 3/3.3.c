//sparse matrix

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;
    printf("enter row and column: ");
    scanf(" %d %d", &row, &col);
    int(*arr)[col] = malloc((row * col) * sizeof(int));
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("enter a[%d][%d]", i, j);
            scanf("%d", (*(arr + i) + j));
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", ((arr + i) + j));
        }
        printf("\n");
    }
int count =0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(((arr + i) + j) == 0)
                count++;
        }
    }
    
    if(count>(0.5*row*col))
    printf("Sparse Matrix!");
    else
    printf("Not a Sparse Matrix!");
    return 0;
}