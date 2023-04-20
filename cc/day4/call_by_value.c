#include<stdio.h>
void fun(int ,int );//parameter name is optional

int main(void)
{
    int x=10,y=20;
    printf("before  x=%d  ,y=%d\n",x,y);
    fun(x,y);
    printf("After x=%d     y=%d",x,y);
}
void fun( a, b)
{
    a=b=0;
}

