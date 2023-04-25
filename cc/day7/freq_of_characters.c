#include<stdio.h>
#include<stdlib.h>

//void frequency(char *q,int A,int a);
void frequency2(char *q,int A,int a);
//void main2();

/*int main(void)
{
    //char *p;//dangling pointer- a pointer which is not initialized to any and we cannot leave this   
    char *p=(char *)malloc(100*sizeof(char));
    int A=65,a=97;
    
    printf("Enter the string");
    scanf("%[^\n]s",p);

    for(;A<=90;A++,a++)
        frequency(p,A,a);
    main2();

    return 0;
}*/
          




/*void frequency(char *q,int A,int a)
{
    int count =0;
    while(*q)
    {
        if(*q==A || *q ==a)
            count++;    
        q++;    
    }
    if(count)
        printf("%c (%d)\n",A,count);
} */         

void main()
{
    //char *p;//dangling pointer- a pointer which is not initialized to any and we cannot leave this   
    char *p=(char *)malloc(100*sizeof(char));
    int A=65,a=97;
    
    printf("Enter the string");
    scanf("%[^\n]s",p);

    for(;A<=90;A++,a++)
    {
        printf("\n%c:",A);
        frequency2(p,A,a);
    }    
        
    
}

void frequency2(char *q,int A,int a)
{
    int count =0;
    while(*q)
    {
        if(*q==A || *q ==a)
            printf("*");    
        q++;    
    }
   
}  