//create an arrey which takes 10 elements and print stored 10 elements
#include<stdio.h>
void main()
{
    int a[5][5];
    printf("Enter 10 elements:\n");
    for (int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for (int i=0;i<5;i++)
    {
        printf("\n");
        for(int j=0;j<5;j++)
            printf("%d   ",a[i][j]);
    }         
    printf("\n");       
}