#include<stdio.h>
int iskthBitSet(unsigned int x,int k)
{
    return (x&(1<<(k-1))?1:0);
}
int isPalindrome(unsigned int x)jk

{
    int l=1;
    int r=sizeof(int)*8;
    while(l<r)
    {
        if(iskthBitSet(x,1)!=iskthBitSet(x,r))
            return 0;
        l++;
        r--;    
    }
    return 1;
}
int main()
{
    unsigned int n;
    printf("Enter the numbewr:");
    scanf("%d",&n);
    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not palindrome");    
}