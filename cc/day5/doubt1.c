#include<stdio.h>
int main(void)
{
    int a =600;
    char *p=&a;
    
    printf("%d\n",*p);//this loss of address can be avoided using void pointer and typecasting before the printing
    printf("%d\n",*(int *)p);//pointer typecasting
 
}