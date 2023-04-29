#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        /*
        for(int j=n-1;j>=i;j--)//or  for(int j=0;j<n-i-1;i++)
            printf(" ");
        for(int k=0;k<=i;k++)
            printf("*");
        for(int l=0;l<i;l++)
            printf("*");    
        printf("\n");
        */
        for(int j=n-1;j>=i;j--)//or  for(int j=0;j<n-i-1;i++)
            printf(" ");
        for(int k=0;k<2*i+1;k++)
            printf("*");
   
        printf("\n");
       
    }        
    return 0;
}

/*HW
*/