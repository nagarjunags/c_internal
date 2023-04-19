//Program to print the pair of primes whose diff is 6
#include<stdio.h>
int main(void)
{
    int n,flag,a[50],z=0,l=0,pcount=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int h=2;h<n;h++)
    {
        flag = 0;
        for(int i=2;i*i<=h;i++)
        {
            if(h%i==0)
            {
                //printf("not prime\n");
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a[z]=h;
            z+=1;
        }    
    }
    while(a[l]< n)
    {
        pcount++;
        l+=1;
    }
    printf("count =%d\n",pcount);
   // printf("all prime:");
   /*for(int i=0;i<pcount;i++)
   {
        printf("%d  ",a[i]);
   }*/ 
   for(int i=0;i<pcount;i++)
    {
        for(int j=0;j<pcount;j++)
        {
            if((a[j]-a[i]== 6) || (a[j]-a[i]== -6))
                printf("\n%d    %d",a[i],a[j]);
        }
    } 
}