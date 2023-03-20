#include<stdio.h>
#define pi 3.142
int main()
{
	int r;
	float a;
	printf("Enter the radious:");
	scanf("%d",&r);
	a=pi*r*r;
	printf("area=%f sq units\n",a);
}
