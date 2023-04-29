#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter the nummber:");
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            printf("not prime\n");
            flag=1;
            break;
        }
    }
    if(!flag)
        printf("prime");

}