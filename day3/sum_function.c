//c program to find su using function
#include<stdio.h>
void sum(int,int);
void main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    sum(a,b);//actual argument
    sum(7,8);
}
void sum(c,d)//formal argument
{
    printf("Sum=%d\n",c+d);
}