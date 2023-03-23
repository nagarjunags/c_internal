#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(a,b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d\n%d\n",a,b);
}