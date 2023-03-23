//c program to demonstrate types of functions wrt arguments and return values
#include<stdio.h>
void product();//no arg no return type
void sum(int,int);//no return but have arg
diff(int,int);//with arg and with return value
void main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    product();
    sum(a,b);//actual argument
    printf("difference is %d\n",diff(a,b));
}
void sum(c,d)//formal argument
{
    printf("Sum=%d\n",c+d);
}
int diff(c,d)
{
    return c-d;
}
void product()
{
    int a,b;
    printf("Enter to multiply:");
    scanf("%d%d",&a,&b);
    printf("Product=%d\n",a*b);
}