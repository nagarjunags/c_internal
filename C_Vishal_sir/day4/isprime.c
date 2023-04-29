#include<stdio.h>
int isprime(int);

int main(void)
{
    int n;
    printf("Enter :");
    scanf("%d",&n);
    if(isprime(n))
        printf("Prime");
    else    
        printf("Not prime");    
    return 0;
}
int isprime(int n)
{
    int i;

    if(n==0 || n==1)
        return 0;

    if(n<=3)
        return 1;

    if(n%2==0 || n%3 ==0)
        return 0;

    for(i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }            
}