#include<stdio.h>
#define f(b) #b//convert to string
int main()
{
    int a=123;
    printf(f(123));
}