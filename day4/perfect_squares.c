//to print perfect squares in given array
#include<stdio.h>
#include<math.h>
void main()
{
    int a[5],s2;
   // float s1;
    printf("Enter:");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);


    for(int i=0;i<5;i++)
    {
        // s1=sqrt(a[i]);
        s2=sqrt(a[i]);
        //if(s1==(float)s2)
        if(s2*s2==a[i])
            printf("%d   ",a[i]);
    }    
}