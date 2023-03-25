#include<stdio.h>
void main()
{
    int n,i,key;
    printf("Enter the size of the arrey:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("%d found in %d",key,i+1);
            
            break;
        }
    } 
    if(i==n)
    printf("not found");  

}