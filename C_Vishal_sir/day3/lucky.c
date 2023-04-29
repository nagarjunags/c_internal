//Program to find lucky number
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%9==0)
        printf("9");
    else
        printf("%d",n%9);       
    return 0;
}