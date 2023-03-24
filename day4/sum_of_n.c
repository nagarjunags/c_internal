// sum of first n using recursion
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Sum:%d\n",sum(n));
}
int sum(n)
{
    if (n!=0)
        return n+sum(n-1);
    else 
        return  0;  
}