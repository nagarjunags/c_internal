#include<stdio.h>

int main()
{
    char *p;
    int i;
    for(i=0;i<3;i++)
        scanf("%s",(p+i));
    for(i=0;i<3;i++)
        printf("%c",*(p+i));
    for(i=0;i<3;i++)
        printf("\n%s",(p+i));    
    return 0;
}
