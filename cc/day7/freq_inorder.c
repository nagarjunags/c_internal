///???
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    int i,count[26]={0};

    printf("Enter the string: ");
    scanf("%[^/n]s",p);

    for(i=0;p[i];i++)
    {
        if(p[i]>=65 && p[i]<=90)
            count[p[i]-'A']++;
        else if(p[i]>=97 && p[i]<=122)
            count[p[i]-'a']++;    
    }

    for(i=0;p[i];i++)
    {
        if(p[i]>=65 && p[i]<=90)
        {
            if(count[p[i]-'A']>0)
            {
                printf("%c(%d)\n",p[i],count[p[i]-'A']);
                count[p[i]-'A']=0;
            }
        }
        else if(p[i]>=97 && p[i]<=122)
        {
            if(count[p[i]-'a']>0)
            {
                printf("%c(%d)\n",p[i],count[p[i]-'a']);
                count[p[i]-'a']=0;
            }
        }
        
    }
    return 0;
}
          