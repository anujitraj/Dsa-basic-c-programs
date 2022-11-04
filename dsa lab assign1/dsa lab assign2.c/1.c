#include<stdio.h>

int main(){
    int a[3][3],i,j,max,min;
    printf("\nEnter the elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>max)
            max=a[i][j];
            if(a[i][j]<min)
            min=a[i][j];
        }
    }
    printf("\nMaximum = %d\nMinimum = %d",max,min);
    return 0;
}