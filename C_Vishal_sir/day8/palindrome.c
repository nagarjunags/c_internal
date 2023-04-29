
#include<stdio.h>
#include<stdlib.h>
void ustrrev(char *p,char *q);//function to reverse the string
int ustrcmp(char *p,char*q);// function to compare

int main()
{
    int j;
    char *p = (char *)malloc(100*sizeof(char));
    char *q = (char *)malloc(100*sizeof(char));
    printf("Enter:");
    scanf("%s",p);
    ustrrev(p,q);
    if(!ustrcmp(p,q))
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");    
    return 0;
}


void ustrrev(char *p,char *q)//function to reverse the string
{
    int j,k=0;
    for(j=0;p[j];j++);
    for(int i=j-1;i>=0;i--,k++)
    {
        q[k]=p[i];
    }
    q[k]='\0';
}

int ustrcmp(char *p,char*q)
{
    for(int i=0;p[i];i++)
    {
        if(p[i]!=q[i])
            return 1;
    }
    return 0;
}