#include<stdio.h>
int main()
{
	int a,flag=0;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		flag=1;
	}
	if(flag==1)
		printf("even\n");
	if(flag==0)
		printf("odd\n");

}
