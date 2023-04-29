#include<stdio.h>
int main()
{
    int a=4,b=3;
    /*
    a=a+b;
    b=a-b;
    a=a-b;
    */
    // OR
   /*a=a^b;
   b=a^b;
   a=a^b;*/
    // OR
   /*
   a^=b;
   b^=a;
   a^=b;
   */ 
    // OR
    a^=b^=a^=b;    
    printf("a=%d   b=%d",a,b);
}