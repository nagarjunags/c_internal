#include<stdio.h>
void main()
{
    int a[5],sum=0;
    printf("Enter 5 elements");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    } 
 
    printf("sum=%d\tavg=%f",sum,sum/5.0);
           
}