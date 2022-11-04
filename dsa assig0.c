// Q.1
#include <stdio.h>

int main()
{
    char arr[50];
    int n;
//To take input from the user
    printf("Enter the string with a period operator(.):");
    scanf("%s",arr);// after completion write this line with loop

    printf("Press 0 or 1:");
    scanf("%d",&n);

//To find the length of the string
    int len = 0;
    for(int i=0; arr[i] != '\0';i++){
        len++;
    }
    //    printf("The length of the string is:- %d",len);

    int bin = 0;
//conditional statement to check wheather the number n is before or after the period operator 
    for(int i=0;i<len;i++){
        if(arr[i] == '.'){
            bin = i;
        }
    }
    if(n == 0){
        for(int i=0;i<bin;i++){
            printf("%c",arr[i]);
        }
    }
    else if(n == 1){
        for(int i= bin+1;i < len;i++){
            printf("%c",arr[i]);

        }

    }

    return 0;
}



//Q.2
#include <stdio.h>
void split(char str[50], int a, char c){
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            if (a == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("%c", str[j]);
                }
                   printf("\t");
            }
            else
            {
                printf("%s\t", str + i + 1);
               
            }
        }
        i++;
    }  
}

int main()
{
    int a;
    char str[50];
    char c;
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Enter the char for splitting the string: ");
    scanf(" %c",&c);
    printf("Press 0 or 1: ");
    scanf("%d",&a);
    
    split(str,a,c);
}





//Q.3
#include <stdio.h>
#include <math.h>

void Subseq(char str[], int n)
{
    int num = 1;
    while (num <= pow(2, n) - 1)
    {
        int temp = num, i = 0;
        while (i < n)
        {
            if ((temp >> i) & 1)
                printf("%c", str[i]);
            i++;
        }
        printf("\n");
        num++;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", &str);
    int n = 0;
    while (str[n] != '\0')
        n++;
    Subseq(str, n);
    return 0;
}

//Q.4
#include <stdio.h>
void lemm(char str1[20], char str2[20], char str3[20]){
    int i=0;
    printf("The common word is: ");
    while(str1[i]!='\0'&&str2[i]!='\0'&&str3[i]!='\0'){
        if(str1[i]==str2[i]){
            if(str1[i]==str3[i]){
                printf("%c",str1[i]);
            }
        }
        i++;
    }
}

int main()
{
    char str1[20], str2[20], str3[20];
    printf("Enter the three strings:");
    scanf("%s %s %s", str1, str2, str3);
    lemm(str1,str2,str3);
}