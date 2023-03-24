//not exe
#include<stdio.h>
int fibo(int);
void main()
{
    int n;
    printf("Enter:");
    scanf("%d",&n);
    printf("fibo:%d",fibo(n));
}
int fibo(n)
{
   
    int count=0;
    if (n==0)
    {
        
        return 0;
    }    
    if (n==1)
    {
        
        return 1;
    }   
    else
    {
        printf("%d  ",fibo(n-1)+fibo(n-2));
        return (fibo(n-1)+fibo(n-2)); 
    }         
   
}