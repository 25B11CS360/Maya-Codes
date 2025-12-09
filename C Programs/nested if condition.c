#include<stdio.h>
int main()
{
	int num;
	printf("enter a value");
	scanf("%d",&num);
	if(num>0)
	{
		printf("number is positive.\n");
		if(num%2==0)
		{
			printf("number is even.\n");
		}
		else
		{
		    printf("number is odd.\n");
		}
	}
	else
	{
		printf("number is non positive.\n");
	}
}
