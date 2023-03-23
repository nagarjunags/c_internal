#include<stdio.h>
void bubble(int x[],int m);
void main()
{
    int a[100],n,i;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble(a,n);
    printf("Sorted elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);  
}
void bubble(int x[],int m)
{
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            int temp;
            if (x[j]>x[j+1])
            {
                temp=x[j+1];
                x[j+1]=x[j];
                x[j]=temp;
            }
        }
    }
}