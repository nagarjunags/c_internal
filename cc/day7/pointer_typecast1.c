#include<stdio.h>
int main(void)
{
    void *vp;
    char ch='j';
    int i=65;
    char *p ="Jack";

    vp=&ch;
    printf("%c",*(char *)vp);//j
    vp=&i;
    printf("%c",*(int *)vp);
    return 0;
}