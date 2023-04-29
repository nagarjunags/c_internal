//program to check panagram or not
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    int count[26]={0},flag=0;
    printf("Enter the string:");
    scanf("%[^\n]s",p);

    for(int i=0;p[i];i++)
    {
        if(p[i]>=65 && p[i]<=90)
            count[p[i]-'A']++;
        else if(p[i]>=97 && p[i]<=122)
            count[p[i]-'a']++;    

    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==0);
        {
            flag=1;
            break;
        }    
    }
    if(flag)
        printf("Not panagram");
    else
        printf("Panagram");    
    return 0;
}
          