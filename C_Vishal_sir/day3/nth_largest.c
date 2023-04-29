// to find nth largest element in an array of n elements(smallest)
#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    int smallest=2147483647;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<smallest)
            smallest=a[i];
    }
    printf("\nnth largest=%d",smallest);    
}