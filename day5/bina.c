#include<stdio.h>
void main()
{
    int key,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element in ascending order:");
    for(int i =0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element:");
    scanf("%d",&key);
    int hi=n;
    int lo =0;
    while(hi-lo>1)
    {
        int mid=(hi+lo)/2;
        if(key==a[mid])
        {
            printf("key found in %d",mid+1);
            break;
        }
        else if(key>a[mid])
        {
            lo=mid+1;
        }
        else if(key <a[mid])
            hi=mid-1;
        else
            printf("not found\n");   
    }
}    