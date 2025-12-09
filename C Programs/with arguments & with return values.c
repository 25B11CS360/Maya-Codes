#include<stdio.h>
int add(void)
{
	int a,b;
	printf("enter two values");
	scanf("%d %d",&a,&b);
	return a+b;
}
int main()
{
	int result=add();
	printf("sum =%d\n",result);
}
