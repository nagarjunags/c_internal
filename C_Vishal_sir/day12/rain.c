#include<stdio.h>
int count=0;
int replace(char *p);
int main(void)
{
    int flag=0;
    char str[50];
    scanf("%s",str);
    replace(str);
    printf("%s\n",str);
    for(int i=0;str[i];i++)
        if(str[i]=='H')
            if(str[i+1]!='T' && str[i-1]!='T')
            {
                flag=1;
                goto out;
            }
out:if(!flag)
        printf("\n%d",count);
    else printf("\n-1");    
    return 0;
}
int replace(char *p)
{
    int i;
    if(p[0]=='-')
        if(p[1]=='H' && p[2]!='-')
        {
            p[0]='T';
            count++;
        }
    for( i=1;p[i];i++)
    {
        if(p[i]=='-')
            if(p[i-1]=='-' && p[i+1]=='-')
                continue;
            else if(p[i-1]=='H' && (p[i-2]!='T'))            
                {
                    p[i]='T';
                    count++;
                }   
    }
    if(p[i-1]=='H' && (p[i-2]=='-'))
            {
                p[i-2]='T';
                count++;
            } 
}