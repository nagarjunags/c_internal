//program to find the grade of a student marks by using if else if ladder
#include<stdio.h>
int main()
{
    int m;
    printf("Enter the marks:");
    scanf("%d",&m);
    if(m>=85)
        printf("Distinction\n");
    else if(m>=75)
        printf("first class\n");
    else if(m>=65)
        printf("second class\n");
    else if (m>=35)
        printf("pass\n");         
    else    
        printf("Fail\n");       
}