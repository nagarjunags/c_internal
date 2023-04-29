// fibo or not
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    

        float a1=sqrt((5*(n*n))+4),a2=sqrt(((5*n*n)-4));
        int a3=sqrt((5*(n*n))+4),a4=sqrt(((5*n*n)-4));
        if(a1==a3 || a2==a4)
            printf("fib");
        else
            printf("no");    
                                  
    
    return 0;
}