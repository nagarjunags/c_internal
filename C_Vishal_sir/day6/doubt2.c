#include<stdio.h>

int main()
{
    unsigned int a=0xffff;
    ~a;//why no lvalue error//because it is npt written as =~a;
    
    printf("%x\n", a);
    return 0;
}