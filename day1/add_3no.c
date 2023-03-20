//adding 3 floating number and result as int
#include<stdio.h>
int main()
{
	float d;
	int a,b,c;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	printf("%d+%d+%d=%f \n",a,b,c,d);
}
