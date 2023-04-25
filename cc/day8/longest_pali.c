/*
//longest palindromic subseq
        "BBABCBCAB"

        BBBBB-5
        BBCBB-5
        BABCCBAB-7
*/
#include<stdio.h>
#include<stdlib.h>

void ustrrev(char *p,char *q);
int ustrcmp(char *p,char*q);


int main()
{
    char a[]="BBABCBCAB";
    

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