#include<stdio.h>
int fibo(int);
void main()
{
    int n,sum=0,d;
    printf("Enter:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        d=fibo(i);
        printf(" %d,   ",d);
        sum+=d;
    }
    printf("\nsum=%d\n",sum);
}
int fibo(n)
{
    
    int count=0;
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2)); 
             
   
}