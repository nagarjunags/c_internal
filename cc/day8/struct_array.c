#include<stdio.h>

struct Emp
{
    char name[20];
    int id;
    float sal;

};
int main()
{
    struct Emp x[10];
    strcpy(x[0].name,"kalam");
    x[0].id =101;
    x[0].sal=100000;
    return 0;
    
}