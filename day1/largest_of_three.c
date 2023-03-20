//to find largest of three numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the 3 numbers a b and c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a=%d is greater\n",a);
		}
		else
		{
			printf("c=%d is greater\n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("b=%d is greater",b);
		}
		else
		{
			printf("c=%d is greater",c);
		}
	}
}
