//to find the greatest number in given 3 number
#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("one %d",a);
        }
        else
        {
            printf("two  %d",c);
        }
    }
    else if(b>c)
    {;
        printf("three  %d",b);
    }
    else
        printf("four  %d",c);
}