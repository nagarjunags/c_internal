#include<stdio.h>
void copy(char *p,char *q);
int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    copy(s1,s2);
    printf("%s",s2);   
}
void copy(char *p,char *q)
{
   /*
    for(;*p;p++)// OR while(*p)
    {
        *q=*p;  //*q=*p;
         q++;   //p++;q++;
    }
    *q='\0';
    */
   while(*q++=*p++);
}