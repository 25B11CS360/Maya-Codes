#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	int max=x>y? x:y;
	printf("maximum of%d and %d is:%d",x,y,max);
}
