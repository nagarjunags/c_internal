//even or odd without controll statement
//largest of 2 numbers using only 1 if statement
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m= n & 0b1;
    printf("%d",m);
}