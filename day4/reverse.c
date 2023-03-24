#include<stdio.h>
void main()
{
    int n,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

   /* for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;

    }   */
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp =a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
     

}