//reversing the given number
#include<stdio.h>
int main(void)
{
    int n,a,new=0;
    printf("enter the number to be reversed:");
    scanf("%d",&n);
    while(n!=0)
    {
        new*=10;
        a=n%10;
        new+=a;
        n/=10;
    }
    printf("%d",new);
}