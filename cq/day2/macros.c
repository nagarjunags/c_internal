#include<stdio.h>
int main()
{
    printf("%d,%d\n",EOF,NULL);
    printf("%s\n",__TIME__);//current time
    printf("%s\n",__DATE__);
    printf("%d\n",__LINE__);//current line number
    printf("%s\n",__FILE__);//working file neme
    return 0;
}