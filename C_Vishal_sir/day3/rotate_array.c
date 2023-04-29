// wap to rotate elements on left side by k times
#include<stdio.h>
int main()
{
    int n,k,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);  
    printf("Enter the number of times to shift:");
    scanf("%d",&k);
    
    for(int j=0;j<k;j++)
    {    
        temp=a[0];    
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }    
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);

}