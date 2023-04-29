#include<stdio.h>
#define ssum(x,y) x+y


int aad(int a,int b)
{
    return a+b;
}


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",ssum(a,b));
    printf("\n%d",aad(a,b));
}