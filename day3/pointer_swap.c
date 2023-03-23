#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Values after swapping:\n");
    printf("%d\n%d\n",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}