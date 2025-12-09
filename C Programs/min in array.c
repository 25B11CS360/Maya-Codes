#include<stdio.h>
int main()
{
	int a[10],i,small;
	printf("enter array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("the smallest number is %d\n",small);
}
