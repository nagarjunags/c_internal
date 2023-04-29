// program to print the prime number in range of m and n 
#include<stdio.h>
int main(void)
{
    int n,flag,m;
    printf("Enter the range:");
    scanf("%d%d",&m,&n);
    for(int h=m;h<n;h++)
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