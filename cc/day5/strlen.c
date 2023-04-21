#include<stdio.h>
int main()
{
    char a[50],count=0;
    printf("Enter the array:");
    scanf("%[^\n]s",a);
    for(int i=0;a[i];i++)
        count++;
    printf("%d",count);   
    return 0;
}

