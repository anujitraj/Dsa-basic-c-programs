//Wap to print armstrong no. till 1000
#include<stdio.h>

int main(){
    int n,temp,t,k;
    
    for(k=100;k<1000;k++)
    {
        temp=0;
        n=k;
    while(n)
    {
    t=n%10;
    n=n/10;       //t=0 n=10 temp=0cube 
    temp=t*t*t+temp;
    }
    if(temp==k)
    printf("%d\n",temp);
    
    
    }
    
    return 0;
}