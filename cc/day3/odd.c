//???
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    /*for(int i=0;i<n;i++)
    {
        int count = 0;
        if((a[i]==-1)  )
            continue;
        
        for(int j=0;j<n;j++)
        {
            if((a[j]==-1)  )
            continue;
            
            if(a[i]==a[j])
            {
                count++;
                a[j]==-1;
            }

        }
        if((count %2) != 0)
        {
            printf("%d ",a[i]);
            a[i]==-1;
        }    
    }  */
     int sum=0;
    for(int i =0;i<n;i++)
    {   
        sum=sum^a[i];
        
           
    }    
    if(sum)
        {
            printf("%d",a[i]);
           
        }  

}