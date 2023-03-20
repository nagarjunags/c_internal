#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter the operator: ");
    scanf(" %c", &c);
    printf("Enter b: ");
    scanf("%d",&b);
    switch(c)
    {
        case '+':
            printf("%d+%d=%d\n",a,b,a+b);
            break;
        case '-':
            printf("%d-%d=%d\n",a,b,a-b);
            break;
        case '*':
            printf("%d*%d=%d\n",a,b,a*b);
            break;
        case '/':
            printf("%d/%d=%d\n",a,b,a/b);
            break;
        default:
            printf("Error");  
    }

}