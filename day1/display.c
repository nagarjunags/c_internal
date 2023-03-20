//progarm to display the name and reg number
#include<stdio.h>
void main()
{
	int n;
	char name[20],reg[20];
	printf("Enter the size of name:");
	scanf("%d",&n);
	printf("Enter the name:");
	for (int i =0;i<=n;i++)
	{
		scanf("%c",&name[i]);
	}
	printf("Enter the reg no:");

	for(int j=0;j<=10;j++)
	{
		scanf("%c",&reg[j]);
	}

	printf("Name:%s\nReg:%s",name,reg);

}
