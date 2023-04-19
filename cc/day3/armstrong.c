#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,size=0,temp,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp/=10;
        size++;
    }
    printf("\n size = %d",size);
    temp =n;
    for(int i=0;i<size;i++)
    {
        sum+=pow((temp%10),size);
        temp/=10;
    }
    printf("\nsum=%d",sum);
    if(sum == n)
        printf("\narm");
    else
        printf("\nnot arm");    
    
}