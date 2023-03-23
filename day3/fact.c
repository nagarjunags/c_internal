#include<stdio.h>
void main()
{
    int a,fact=1;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        fact*=a;
        a-=1;
    }
    printf("%d\n",fact);
}