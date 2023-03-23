#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("Enrter a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        printf("roots are equal");
        r1=r2=-b/(2*a);
        printf("r1=%f\nr2=%f",r1,r2);

    }
    else if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("r1=%f\nr2=%f",r1,r2);
    }
    else
    { 
        printf("roots are imaginary");
        r1=r2=-b/(2*a);
        printf("r1=%f+%fi \nr2=%f-%f i",r1,abs(sqrt(d)),r2,abs(sqrt(d)));
    }
}