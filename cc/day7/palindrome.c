
#include<stdio.h>
#include<stdlib.h>
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

int main()
{
    int j;
    char *p = (char *)malloc(100*sizeof(char));
    char *q = (char *)malloc(100*sizeof(char));
    printf("Enter:");
    scanf("%s",p);
    ustrrev(p,q);
    printf("%s",q);

    
    return 0;

}