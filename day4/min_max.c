#include<stdio.h>
void main()
{
    int n,max=0,min=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];    
    }
    printf("max=%d\nmin=%d\n",max,min);
}