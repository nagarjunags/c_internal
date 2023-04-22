char *reverse(char *p)
{
    static char a[100];
    static int i;
    if(*p)
    {
        reverse(p+1);
        a[i++]=*p;
    }
    return a;
}







/*#include<stdio.h>
#include<string.h>
char *reverse(char *p);
int main()
{
    char a[100];
    static char b[100]="";///???
    scanf("%s",a);
    reverse(a);
    printf("%s",x);
    return 0;
}
char *reverse(char *p)
{   
    char x[100];
    char *b=x;
    if(*p)
    {
        
        p=reverse(p+1);
        strncat(b,p,1);
        b--;
        
        //printf("%c",*p);
        //strncat(b,p,1);///???
    }
    else
    return p;

    return b;
    

}   */