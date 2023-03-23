#include<stdio.h>
int fac(int);
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a==0)
        printf("1\nS");
    else    
        printf("Factorial=%d\n",fac(a));
}
int fac(int a)
{
    int b;
    if(a==1)
        return 1;
    b=a*fac(a-1);
    return b;
}