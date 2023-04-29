#include<stdio.h>
int main(void)
{
   int n;
   scanf("%d",&n);

   for(int i=1;i<=n;i++)        //number of rows
   {
        for(int j=n-i;j>0;j--)  //spaces
            printf("  ");
        for(int k=1;k<=i;k++)   //forward incrementing number
            printf("%d ",k);
        for(int l=i-1;l>0;l--)  //decrementing number
            printf("%d ",l);
        printf("\n");
   }
}