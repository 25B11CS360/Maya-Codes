#include<stdio.h>
int main()
{
	int a,b,c,largest;
	
	//input three numbers
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	
	//find the largest using conditional operator
	largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
	
	//display the result
	printf("the largest number is:%d\n",largest);
}
