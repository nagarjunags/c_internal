//create an arrey which takes 10 elements and print stored 10 elements
#include<stdio.h>
void main()
{
    int a[10];
    printf("Enter 10 elements:\n");
    for (int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<10;i++)
        printf("%d   ",a[i]); 
    printf("\n");       
}