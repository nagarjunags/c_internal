#include<stdio.h>
int main()
{
    int i=5;
    printf("%d%d%d%d%d",i++,i--,++i,--i,i);// output is wron in the compiler,but execute in turbo c compiler to get proper answer
    return 0;
}