#include<stdio.h>
#define SUM(a,b) ((unsigned char)a+b)//executes during compilation time and not during execution time
int a,b;
int main()
{
    
    printf("enter:");
    scanf("%d%d",&a,&b);
    printf("Sum=%d\n",SUM(a,b));
}
