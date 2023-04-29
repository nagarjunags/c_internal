#include<stdio.h>
int main()
{
    int a[]={2,3,4};
    char *p;
    p=&a;
    p++;
    printf("%d",*p);
    /*
        2 stored as 0000 0000  (higher bite)
                    0000 0010  (Lower bite )
    */
}