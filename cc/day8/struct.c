#include<stdio.h>
struct Emp
{
    char name[20];
    int id;
    float sal;

};
int main()
{
    struct Emp x={"Dennis",101,1000000};
    struct Emp y={.id=102, .sal=12000, .name="kalam"};
    struct Emp z={"Michal"};
    printf("%s  %d  %f",z.name,z.id,z.sal);
    return 0;
    
}