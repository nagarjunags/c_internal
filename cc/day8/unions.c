 #include<stdio.h>

 union x
{
    char u[2];
    int i;
    int j;
};
int main()
{
    union x y;
    y.u[0]=3;
    y.u[1]=2;

    y.i=10;

    printf("%d  %d  %d   %d",y.u[0],y.u[1],y.i,y.j);//3  2  515 
                                        //the total memory filled in this union is 16 bit and the int is also of 2 byte so it merges everything and return 515
    return 0;                                    
}    