// fibonacci upto n
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d\n%d\n",0,1);
    for(int i=1;i<n;i++)
    {  
        float a1=sqrt((5*(i*i))+4),a2=sqrt(((5*i*i)-4));
        int a3=sqrt((5*(i*i))+4),a4=sqrt(((5*i*i)-4));
        if(a1==a3 || a2==a4)
            printf("%d\n",i);                                   
    }
    return 0;
}