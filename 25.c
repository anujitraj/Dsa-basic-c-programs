#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
} 
int main()
{
    int n;
    printf("Enter the term for which you want to find the fibonacci number from the series:");
    scanf("%d",&n);
    printf("%d", fib(n));
    getchar();
    return 0;
}



//my method
#include<stdio.h>
int main(){
    int i,n,u=0,t=1,k=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    if(n==1)
    printf("0\n");
    else{
        for(i=0;i<n-1;i++)
        {
          k=u+t;
          u=t;
          t=k;
        }
        printf("%d\n",k);
    }
    return 0;
}
