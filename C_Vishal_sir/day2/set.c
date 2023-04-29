//program to count the number of set bits in a number
#include<stdio.h>
int main()
{
    int n=15;
    int count=0;
   
   
    /*while(n!=0)
    {
        if(n%2==1)
            count++;
        n/=2;
    }*///    O R
/*while(n !=0)
{    
    if(n&1==1)
        count++;
    n >>=1;    
}*/     // OR

while(n !=0)
{
    n=n&n-1;
    count++;
}


    printf("%d",count);
    return 0;
}