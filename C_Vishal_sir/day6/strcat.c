#include<stdio.h>
void concat(char *p,char *q);
int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    concat(s1,s2);
    printf("%s",s2);   
}
void concat(char *p,char *q)
{
    while(*q)   //while(*q++);
        q++;    //q--
    while(*q++=*p++);
}