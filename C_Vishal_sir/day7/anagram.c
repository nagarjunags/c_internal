//anagrams
#include<stdio.h>
#define MAX 256
int main()
{
    char str1[100];
    char str2[100];
    int count[MAX]={0},i,j,status=0;
    printf("Enter string1:");
    scanf("%[^\n]s",str1);
    while(getchar()!='\n');
    printf("Enter string2:");
    scanf("%[^\n]s",str2);
                                            /*for(i=0;str1[i];i++)
                                                count[str1[i]]++;
                                            for(i=0;str2[i];i++)
                                                count[str2[i]--];*/
    for(i=0;str1[i] && str2[i];i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        for(i=0;i<MAX;i++)
        {
            if(count[i]!=0)
            {
                status=1;
                break;
            }
        }
        if(status==0)
            printf("Strings are anagrams");
        else
            printf("NOt anagrams");    
    }
    else
        printf("NOt anagrams");
        return 0;
}
     