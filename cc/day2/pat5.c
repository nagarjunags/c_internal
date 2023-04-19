/*
    1
   121
  12321 


*/
#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        
        for(int j=n-1;j>=i;j--)//or  for(int j=0;j<n-i-1;i++)
            printf(" ");
        for(int k=0;k<=i;k++)
            printf("%d",k+1);
        for(int l=i;l>0;l--)
            printf("%d",l);    
        printf("\n");
        
      
       
    }        
    return 0;
}

