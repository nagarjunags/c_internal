#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Std
{
    int id;
    float mark;
};
/*int main()//static memory allocation
{
    struct Std *p;
    struct Std x;
    p=&x;
    p->id=101;
    p->mark=50.1;

 
    return 0;
    
}*/
int main()//Dynamic memory allocation
{
    struct Std *p=(struct Std *)malloc(sizeof(struct Std));
    p->id=101;
    p->mark=50.1;
    printf("%d",p->id);

    return 0;
    
}