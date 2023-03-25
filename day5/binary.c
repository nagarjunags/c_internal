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
    
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (a[mid] < key) 
        {
            lo = mid + 1;
        }
        else 
        {
            hi = mid;
        }
    }
    if (a[lo] == key) 
    {
       printf("Founf at %d\n",lo+1);
    }
    else if (a[hi] == key) {
        printf(" Found at %d",hi+1);
       
    }
    else {
        printf(" Not found");
    }
}
