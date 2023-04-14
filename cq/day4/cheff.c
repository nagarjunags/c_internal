#include<stdio.h>
int main(void)
{
    char a[100];
    gets(a);
    int p=printf("%s",a);
    int q = a[p-1]-48;
    int r = 10*(a[p-2]-48);
    int s =q+r;
    printf("\n%d",s);
    
}