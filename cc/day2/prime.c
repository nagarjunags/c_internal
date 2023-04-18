//
#include<stdio.h>
int main(void)
{
    int n,i,flag=0;
    int count =0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++)//???
    {
        if(n%i == 0)
        {
            flag=printf("not prime");
            break;
        }
    }    
    if(!flag)
        printf("prime");
    
    return 0;
}