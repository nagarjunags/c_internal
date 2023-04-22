#include<stdio.h>
#include<string.h>
void reverse(char *p);
int main()
{
    char a[100];
    static char b[100]="";
    scanf("%s",a);
    reverse(a);
    return 0;
}
void reverse(char *p)
{
    
    if(*p)
    {
        reverse(p+1); 
        printf("%c",*p);
        strncat(b,p,1);
    }
}