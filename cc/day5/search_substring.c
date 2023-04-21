#include<stdio.h>
#include<string.h>//use user defined strlen functions
void me();

void sir();
int main()
{
    sir();
    me();
    return 0;

}
void sir()
{
    char a[50],b[50],count=0,flag;
    printf("Enter the array:");
    scanf("%[^\n]s",a);
    printf("Enter the search array:");
    scanf(" %[^\n]s",b);  
    for(int i=0;i<=strlen(a)-strlen(b);i++)
    {
        for(int j=i;j<i+strlen(b);j++)
        {
            flag=0;
            if(a[j]!=b[j-i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            break;
    } 
    if(!flag)
        printf("found\n");
    else    
        printf("not found\n");    
}

void me()
{

    char a[50],b[50],count=0,flag;
    printf("Enter the array:");
    scanf("%[^\n]s",a);
    printf("Enter the search array:");
    scanf(" %[^\n]s",b);
    for(int i=0;a[i];i++)
    {
        flag=0;
        for(int j=0;b[j];j++)
        {
            if(b[j]!=a[i+j])   // OR  (a[i+j]!=b[j]) ===(a[j]!=b[j-i])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            printf("found\n");
            break;
        }
    }
    if(flag)
        printf("not found\n");
   
}
