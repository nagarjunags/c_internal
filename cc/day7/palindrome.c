#include<stdio.h>

int main()
{
    int j,k=0;
    char *p = (char *)malloc(100*sizeof(char));
    char *q = (char *)malloc(100*sizeof(char));
    printf("Enter:");
    scanf("%s",p);
    for(j=0;p[j];j++);
    for(int i=j-1;i>=0;i--,k++)
    {
        q[k]=p[i];
    }
    printf("%s",q);

    
    return 0;

}