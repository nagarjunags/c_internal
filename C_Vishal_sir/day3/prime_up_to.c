#include<stdio.h>
int main(void)
{
    int n,flag;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int h=2;h<n;h++)
    {
        flag = 0;
        for(int i=2;i*i<=h;i++)
        {
            if(h%i==0)
            {
                //printf("not prime\n");
                flag=1;
                break;
            }
        }
        if(!flag)
            printf("%d ",h);
    }
}