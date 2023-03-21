#include<stdio.h>
void main()
{
    int n, rad,l,b;
    printf("1=circle\n2=rectangle\n3=triangle\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter the radius: ");
            scanf("%d",&rad);
            printf("area:%f\n",3.142*rad*rad);
            break;
        case 2:
            printf("Enter l and b: ");
            scanf("%d%d",&l,&b);
            printf("area = %d\n",l*b);
            break;
        case 3:
            printf("Enter b and h: ");
            scanf("%d%d",&b,&l);
            printf("area=%f\n",0.5*b*l);
        default:
            printf("ERROR");        
    }
 

}