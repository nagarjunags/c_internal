#include<stdio.h>
void sievesprime(int);
int main(void)
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    sievesprime(n);
    return 0;
}
void sievesprime(int n)
{
    int prime[n+1];
    for(int i=0;i<=n;i++)
    {
        
        prime[i]=0;
    }    
    for(int i=2;i*i<=n;i++)
    {
       
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
                

            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
            printf("%d\t",i);
        
    }           
}