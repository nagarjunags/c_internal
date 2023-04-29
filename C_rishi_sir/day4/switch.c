#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    switch(x)
    {
       printf("W");   //   It is an unreachable statement
        default:
            printf("default");
            break;
        case 1:
            printf("a");
            break;
        case 2:
            printf("b");
            break;
        case 3:
            printf("c");
            break;
          
    }
}
