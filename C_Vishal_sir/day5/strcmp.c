#include<stdio.h>
int main()
{
    char a[50],count=0,flag=0;
    printf("Enter the array:");
    scanf("%[^\n]s",a);
    for(int i=0;a[i];i++)
        count++;
    for(int i=0;i<count/2;i++)
    {
        if(a[i]!=a[count-1-i])
        {
            flag=1;
            printf("Not palindrome");
            break;
        }
    }    
    if(!flag)
        printf("Palindrome");
}

