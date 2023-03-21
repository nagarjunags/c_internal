#include<stdio.h>
void main()
{
    int a,flag=1;
    printf("Enter: ");
    scanf("%d",&a);
    while(a%3==0)
    {
        printf("%d is devisible by 3",a);
        flag=0;
        break;
    }
    while(flag)
    {
        printf("Not dev\n");
        break;
    }
}