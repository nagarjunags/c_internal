#include<stdio.h>
void main()
{
    int n,sum=0,i=1;
    printf("Enter:");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<n);

    printf("avg=%f",(float)sum/i);

}