#include<stdio.h>
#include<math.h>
void main()
{
    float a[5];
    printf("Enter the 5 values");
    for(int i=0;i<5;i++)
        scanf("%f",&a[i]);    
     for(int i=0;i<5;i++)
        printf("%f\n",ceil(a[i]));
}