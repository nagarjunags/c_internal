#include<stdio.h>
#include<math.h>
int isFibonacci(int);
int isPerfectsquare(int);
int main()
{
    int n;
    scanf("%d",&n);
    if(isFibonacci(n))
        printf("Fibonacci");
    else
        printf("Not fibonacci");    
    return 0;
}


int isFibonacci(int n)
{
    if(isPerfectsquare((5*n*n)+4) ||isPerfectsquare((5*n*n)-4))
        return 1;
    else
        return 0;    
}


int isPerfectsquare(int n)
{
    int temp=sqrt(n);
    if(n==(temp*temp))
        return 1;
    else return 0;    
}