#include<stdio.h>
int main()
{
	int i,sum=0;
	int marks[6];
	printf("enter array elements");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=5;i++)
	{
		sum=sum+marks[i];
	}
	printf("%d\n",sum);
}
