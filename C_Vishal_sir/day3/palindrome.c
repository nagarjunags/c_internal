//program to check wehther the given number is palindrome or not
#include<stdio.h>
int main(void)
{
    int n,a,new=0,temp;
    printf("enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        new*=10;
        a=n%10;
        new+=a;
        n/=10;
    }
    if(temp==new)
        printf("\nPalindrome");
    else
        printf("\nnot palindrome");    
    
}