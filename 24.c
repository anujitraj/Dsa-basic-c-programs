//WCP to find first 'n' terms of the Fibonacci series.
#include<stdio.h>
int main(){
    int i,n,u=0,t=1,k=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    if(n==1)
    printf("0\n");
    else{
        printf("0\n");
        printf("1\n");
        for(i=0;i<n-1;i++)
        {
          k=u+t;
          printf("%d\n",k);
          u=t;
          t=k;
        }
        
    }
    return 0;
}




