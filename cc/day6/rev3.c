#include<stdio.h>
#include<string.h>
#include"rev2.c"
//void reverse(char *p);
int main()
{
    char a[100];
    static char b[100]="";///???
    scanf("%s",a);
    char *p = reverse(a);
    printf("%s",p);
    return 0;
}
