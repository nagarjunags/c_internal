#include<stdio.h>
void fun(int *a,int *b)
{
    *a=*a+10;
    *b=*b+10;
    printf("\nInside Functions: *a=%d *b=%d",*a,*b);
}
int main()
{
    int x=10,y=20;
    printf("before: x=%d   y=%d\n",x,y);
    fun(&x,&y);
    printf("\nAfter:  x=%d   y=%d",x,y);
    return 0;
}