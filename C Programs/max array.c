#include<stdio.h>
int main()
{
	int a[10],i,large;
	printf("enter array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("the largest element is %d\n",large);
}
