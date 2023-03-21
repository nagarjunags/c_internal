#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the number:");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0 :
            printf("Even\n");
            break;
        default:
            printf("Odd\n");    
    }
    switch(a>=0)
    {
        case 1:
            printf("possitive\n");
            break;
        case 0:
            printf("Negative\n");    
    }
}