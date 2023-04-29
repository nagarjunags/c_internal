#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int count[26]={0},temp;
    char *p = (char *)malloc(100*sizeof(char));
    
    scanf("%s",p);
    for(int i=0;p[i];i++)
    {
        if(p[i]>=65 && p[i]<=90)
            count[p[i]-'A']++;
        else if(p[i]>=97 && p[i]<=122)
            count[p[i]-'a']++;    
    }
    for(int k=0;k<26;k++)// removes one of the odd letters if it is more than once
    {
        if(p[k]%2!=0 && p[k]>1)
            p[k]-=1;
    }
    for(int k=0;k<26;k++)
    {
        temp=count[k];
        if(count[k]!=1)
            for(int i=0;i<(count[k])/2;i++)
                printf("%c",k+65);
    }
    for(int k=0;k<26;k++)
    {
        if(count[k]==1)
        {
             printf("%c",k+65);
             break;
        }
    }
    for(int k=25;k>=0;k--)
    {
        temp=count[k];
        if(count[k]!=1)
            for(int i=0;i<(count[k])/2;i++)
                printf("%c",k+65);
    }
}