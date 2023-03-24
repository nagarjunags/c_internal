#include<stdio.h>
void main()
{
    int n,count;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i =0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count+=1;
            }
            
        }
        printf("Frequency of %d is %d\n",a[i],count);
    }    
}