#include<stdio.h>
void main()
{
    int q,v,d,t,tot;
    printf("enter quantity,value,discount and tax: ");
    scanf("%d%d%d%d",&q,&v,&d,&t);
    tot=((q*v)-d)+((q*v)-d)*(t/100);
    printf("Total: %d\n",tot);
}