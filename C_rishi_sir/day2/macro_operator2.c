#include<stdio.h>
#define f(a,b) a##b
int main()
{
    int x=f(1,2);
    //int y=f(x,3);    x is not yet declared during compilation
    printf("%d",x);
    int xy=10;
    int z=f(x,y);// equivalent to z=xy
    printf("\n%d",z);
}