//Black jack
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



int change(int);
int rrandom();
char pr(int);




int main()
{
    srand(time(0));
    int us3=0;
    int a[13]={2,3,4,5,6,7,8,9,10,11,12,13,14};
    int com1=(rand()%13)+2;
    int com2=(rand()%13)+2;
    int us1=(rand()%13)+2;
    int us2=(rand()%13)+2;
    printf("Computer card is %c\n",pr(com1));
    printf("user cards are  %c  %c   \n",pr(us1),pr(us2));
    com1 = change(com1);
    com2 = change(com2);
    us1 = change(us1);
    us2 = change(us2);
    printf("Do you want another card?\n");
    char yn[3];
    gets(yn);
    tolower(yn);
    if(strcmp(yn,"yes")==0)
    {
        
        us3=(rand()%13)+2;
        printf("User card %c\n",pr(us3));
        us3=change(us3);

    }
    printf("computer score = %d\n",com1+com2);
    printf("User score %d ",us1+us2+us3);
    if((us1+us2+us3)>21)
        printf("\nLOST");
    else if((us1+us2+us3)==(com1+com2))    
        printf("\nDRAW");
    else if((us1+us2+us3)>(com1+com2))
        printf("\nWIN!");
    else
        printf("\nLOST");        


    return 0;    
}



int change(a)
{
    if(a>10)
        return 10;
}



char pr(a)
{
     switch(a)
    {
        case 11:
           return 'k';
            break;
        case 12:
            return 'q';
            break;
        case 13:
            return 'j';
            break;
        case 14:
            return 'a';
            break;        
        default:
            return a+48;      

    }

}

